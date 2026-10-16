#include "debug.h"
#include "ch32v30x_i2c.h"
#include "Dec_IIC.h"
#include <stdbool.h>
#include <stdint.h>

#include "cs43131.h"
#include "ch32v30x_usbhs_device.h"


uint32_t g_current_rate_hz = 0;
uint8_t g_current_bits = 0;
// 左右 DAC 的 FSD 全局配置值（可在其他模块直接修改）。
// 约定：0x30 为右 DAC，0x31 为左 DAC，取值范围 0..7。
uint8_t g_cs43131_fsd_dac_30 = CS43131_ASP_FSD_2;
uint8_t g_cs43131_fsd_dac_31 = CS43131_ASP_FSD_2;

#if !CS43131_USE_EXTERNAL_VCPFILT
typedef struct {
    uint8_t hp_ctrl1_out_fs;
    uint8_t hv_en;
    uint8_t plus1db_en;
} cs43131_hp_profile_t;

static const cs43131_hp_profile_t s_hp_profiles[] = {
    { CS43131_HP_OUT_FS_2V,    0, 0 },
    { CS43131_HP_OUT_FS_2P8V,  0, 0 },
    { CS43131_HP_OUT_FS_4V,    0, 0 },
    { CS43131_HP_OUT_FS_5P7V,  1, 0 },
    { CS43131_HP_OUT_FS_5P7V,  1, 1 }
};

static cs43131_hp_amp_mode_t s_hp_amp_mode = CS43131_HP_AMP_MODE_CLASS_H;
static cs43131_hp_full_scale_t s_hp_full_scale = CS43131_HP_FS_1P732VRMS;
#endif


// --- 24-bit subaddress helpers for CS43131 ---
static int i2c_write_reg24(uint8_t devAddr7, uint32_t reg, uint8_t val)
{
    const uint8_t devAddr8 = (uint8_t)(devAddr7 << 1);
    uint8_t a = (uint8_t)((reg >> 16) & 0xFF);
    uint8_t b = (uint8_t)((reg >> 8) & 0xFF);
    uint8_t c = (uint8_t)(reg & 0xFF);
    for (int attempt = 0; attempt < 3; ++attempt) {
        uint32_t timeout = 0;
        while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_GenerateSTART(I2C1, ENABLE);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_Send7bitAddress(I2C1, devAddr8, I2C_Direction_Transmitter);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, a);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, b);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, c);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        // Send control byte: SIZE=00 (8-bit), INCR=1
        I2C_SendData(I2C1, 0x01);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        // Now send data byte
        I2C_SendData(I2C1, val);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_GenerateSTOP(I2C1, ENABLE);
        return 0;
    retry: ;
    }
    return -1;
}

static int i2c_read_reg24(uint8_t devAddr7, uint32_t reg, uint8_t *pval)
{
    const uint8_t devAddr8_w = (uint8_t)(devAddr7 << 1);
    const uint8_t devAddr8_r = (uint8_t)(devAddr8_w | 0x01);
    uint8_t a = (uint8_t)((reg >> 16) & 0xFF);
    uint8_t b = (uint8_t)((reg >> 8) & 0xFF);
    uint8_t c = (uint8_t)(reg & 0xFF);
    for (int attempt = 0; attempt < 3; ++attempt) {
        uint32_t timeout = 0;
        while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        // Write preamble (MAP bytes + CONTROL byte), then STOP per datasheet Fig. 4-34
        I2C_GenerateSTART(I2C1, ENABLE);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_Send7bitAddress(I2C1, devAddr8_w, I2C_Direction_Transmitter);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, a);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, b);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, c);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        // Send control byte: SIZE=00 (8-bit), INCR=1
        I2C_SendData(I2C1, 0x01);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_GenerateSTOP(I2C1, ENABLE);
        // Read 1 byte from the specified MAP address
        I2C_GenerateSTART(I2C1, ENABLE);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_Send7bitAddress(I2C1, devAddr8_r, I2C_Direction_Receiver);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_RECEIVED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        *pval = I2C_ReceiveData(I2C1);
        I2C_GenerateSTOP(I2C1, ENABLE);
        return 0;
    retry: ;
    }
    return -1;
}

static int cs43131_reg_or(uint8_t devAddr7, uint32_t reg, uint8_t mask)
{
    uint8_t v = 0; if (i2c_read_reg24(devAddr7, reg, &v) != 0) return -1;
    v |= mask; return i2c_write_reg24(devAddr7, reg, v);
}

static int cs43131_reg_and(uint8_t devAddr7, uint32_t reg, uint8_t mask)
{
    uint8_t v = 0; if (i2c_read_reg24(devAddr7, reg, &v) != 0) return -1;
    v &= mask; return i2c_write_reg24(devAddr7, reg, v);
}

#if !CS43131_USE_EXTERNAL_VCPFILT
static const cs43131_hp_profile_t* cs43131_get_active_hp_profile(void)
{
    if ((unsigned)s_hp_full_scale >= (sizeof(s_hp_profiles) / sizeof(s_hp_profiles[0]))) {
        s_hp_full_scale = CS43131_HP_FS_1P732VRMS;
    }
    return &s_hp_profiles[s_hp_full_scale];
}
#endif

static int cs43131_apply_hp_user_config(uint8_t devAddr7)
{
    uint8_t classh_ctrl = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_CLASSH_CTRL, &classh_ctrl) != 0) {
        return -1;
    }

    classh_ctrl &= (uint8_t)~(CS43131_CLASSH_ADPT_PWR_MASK | CS43131_CLASSH_HV_EN | CS43131_CLASSH_EXT_VCPFILT);

#if CS43131_USE_EXTERNAL_VCPFILT
    classh_ctrl |= (uint8_t)((0x02u << CS43131_CLASSH_ADPT_PWR_SHIFT) |
                             CS43131_CLASSH_EXT_VCPFILT |
                             CS43131_CLASSH_HV_EN);
#else
    const cs43131_hp_profile_t *profile = cs43131_get_active_hp_profile();
    if (s_hp_amp_mode == CS43131_HP_AMP_MODE_CLASS_AB) {
        classh_ctrl |= (uint8_t)(0x02u << CS43131_CLASSH_ADPT_PWR_SHIFT);
    } else {
        classh_ctrl |= (uint8_t)(0x07u << CS43131_CLASSH_ADPT_PWR_SHIFT);
    }
    if (profile->hv_en) {
        classh_ctrl |= (uint8_t)CS43131_CLASSH_HV_EN;
    }
#endif

    if (i2c_write_reg24(devAddr7, CS43131_REG_CLASSH_CTRL, classh_ctrl) != 0) {
        return -1;
    }

    uint8_t hp_ctrl1 = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_HP_CTRL1, &hp_ctrl1) != 0) {
        return -1;
    }

    hp_ctrl1 &= (uint8_t)~(CS43131_HP_CLAMPA |
                           CS43131_HP_CLAMPB |
                           CS43131_HP_OUT_FS_MASK |
                           CS43131_HP_IN_EN |
                           CS43131_HP_IN_LP |
                           CS43131_HP_PLUS1DB_EN);

#if CS43131_USE_EXTERNAL_VCPFILT
    hp_ctrl1 |= CS43131_HP_OUT_FS_5P7V;
#else
    hp_ctrl1 |= profile->hp_ctrl1_out_fs;
    if (profile->plus1db_en) {
        hp_ctrl1 |= CS43131_HP_PLUS1DB_EN;
    }
#endif

    return i2c_write_reg24(devAddr7, CS43131_REG_HP_CTRL1, hp_ctrl1);
}

#if !CS43131_USE_EXTERNAL_VCPFILT
static int cs43131_apply_hp_runtime_both(void)
{
    bool inserted = Headphone_IsInserted();
    if (cs43131_mute_both_channels(0x30) != 0) return -1;
    if (cs43131_mute_both_channels(0x31) != 0) return -2;
    if (cs43131_hp_power_down(0x30) != 0) return -3;
    if (cs43131_hp_power_down(0x31) != 0) return -4;
    if (cs43131_configure_hp_no_detect(0x30) != 0) return -5;
    if (cs43131_configure_hp_no_detect(0x31) != 0) return -6;
    if (!inserted) return 0;
    if (cs43131_hp_power_up(0x30) != 0) return -7;
    if (cs43131_hp_power_up(0x31) != 0) return -8;
    if (cs43131_unmute_both_channels(0x30) != 0) return -9;
    if (cs43131_unmute_both_channels(0x31) != 0) return -10;
    return 0;
}
#endif

// --- GPIO helpers ---
void CS43131_GPIO_Init(void)
{
    // Enable GPIO clocks for A, B, C, D
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure = {0};

    // PC0: VCP_FILT± power enable (high to enable)
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
    GPIO_ResetBits(GPIOC, GPIO_Pin_0); // default off

    // PD8: Both DAC resets tied together (active low)
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
    GPIO_ResetBits(GPIOD, GPIO_Pin_8); // hold in reset

    // PD9: Shared INT pin (input, pull-up)
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);

    // PA1: 4.4mm Headphone detect (input, pull-up). Low: no headphone; High: inserted
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // PA2: 3.5mm Headphone detect (input, pull-up). High: no headphone; low: inserted
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);


    // 在释放 RESET 前预留稳定时间，避免电源和 MCLK 尚未稳定时提前启动 DAC。
    cs43131_int_pd9_exti_init();
    Delay_Ms(2);
    GPIO_SetBits(GPIOD, GPIO_Pin_8); // Both DACs (PD8) exit reset
}

// PDN_DONE 中断到达标志（由ISR或轮询置位）
static volatile uint8_t s_pdn_done_isr_flag = 0;
static volatile uint8_t s_cs43131_int_irq_seen = 0;
// PD9电平缓存用于轮询边沿检测
static uint8_t s_pd9_prev_level = 0;

bool Headphone_IsInserted(void)
{
    BitAction pa1 = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1);
    BitAction pa2 = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_2);
    bool inserted_44 = (pa1 == Bit_SET);
    bool inserted_35 = (pa2 == Bit_RESET);
    return inserted_44 || inserted_35;
}

cs43131_jack_mode_t Headphone_GetJackMode(void)
{
    BitAction pa1 = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1);
    BitAction pa2 = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_2);
    bool inserted_44 = (pa1 == Bit_SET);
    bool inserted_35 = (pa2 == Bit_RESET);
    if (inserted_44) return CS43131_JACK_MODE_44MM;
    if (inserted_35) return CS43131_JACK_MODE_35MM;
    return CS43131_JACK_MODE_NONE;
}

// --- Init (still pending complete register map) ---
void cs43131_init(uint8_t devAddr7) {
    // Step 3: 配置系统时钟源为外部直连 MCLK（本板为 CPLD 直出的 49.152/45.1584 MHz，
    // 即标称 24.576/22.5792 的 2 倍，规格外但比率自洽，详见 cs43131.h 顶部注释）
    // 清除 MCLK_INT(bit2) 与 MCLK_SRC_SEL(bits1:0)，选择直连外部 MCLK（00）
    uint8_t sysclk = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SYSCLK_CTRL1, &sysclk) == 0) {
        sysclk &= (uint8_t)(~0x07u); // bit2..0 置 0 -> MCLK_INT=0, MCLK_SRC_SEL=00
        (void)i2c_write_reg24(devAddr7, CS43131_REG_SYSCLK_CTRL1, sysclk);
    }

    // Step 5: 读取中断状态 1 清除可能的挂起位
    uint8_t dummy = 0;
    (void)i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS1, &dummy);

    // Step 6: 只使能 PDN_DONE 中断；外部 MCLK 下无需 XTAL_READY/XTAL_ERROR 中断
    uint8_t mask1 = 0xFFu;
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_MASK1, &mask1) == 0) {
        mask1 &= (uint8_t)(~CS43131_INT_MASK_PDN_DONE); // 取消屏蔽 PDN_DONE
        mask1 |= (uint8_t)(CS43131_INT_XTAL_READY | CS43131_INT_XTAL_ERROR); // 保持屏蔽 XTAL 相关
        (void)i2c_write_reg24(devAddr7, CS43131_REG_INT_MASK1, mask1);
    }

    // Step 7: 不启用 XTAL 驱动，确保其保持掉电（外部有源 MCLK 已供给）
    (void)cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_XTAL);
}

// 取消屏蔽 PDN_DONE 中断源（INT_MASK1 bit0 置0为Unmask）
void cs43131_enable_int_pdn_done(uint8_t devAddr7)
{
    uint8_t mask1 = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_MASK1, &mask1) != 0) return;
    mask1 &= (uint8_t)(~CS43131_INT_MASK_PDN_DONE);
    (void)i2c_write_reg24(devAddr7, CS43131_REG_INT_MASK1, mask1);
}

// 使能 ASP 接口相关中断掩码（仅调试时建议开启）
int cs43131_enable_asp_interrupts(uint8_t devAddr7)
{
    // 仅在需要调试 ASP 接口时开启；正常播放无需这些中断
    uint8_t mask2 = 0xFFu;
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_MASK2, &mask2) != 0) return -1;
    // 取消屏蔽 ASP 相关中断：OVFL/ERROR/LATE/EARLY/NOLRCK
    mask2 &= (uint8_t)(~(CS43131_ASP_OVFL_INT_MASK | CS43131_ASP_ERROR_INT_MASK |
                         CS43131_ASP_LATE_INT_MASK | CS43131_ASP_EARLY_INT_MASK |
                         CS43131_ASP_NOLRCK_INT_MASK));
    return i2c_write_reg24(devAddr7, CS43131_REG_INT_MASK2, mask2);
}

// 外部直连 MCLK 的家族切换：本板实际在 49.152 MHz（48k 族）与 45.1584 MHz（44.1k 族）
// 之间切换（CPLD mck_sel 直出，为标称 24.576/22.5792 的 2 倍，详见 cs43131.h 顶部注释）
int cs43131_switch_mclk_external(uint8_t devAddr7, bool is_24m576)
{
    // 依据外部有源时钟场景：仅调整 INTSEL 相关位，不切换到 XTAL/RCO
    // 1) 选择外部直连 MCLK 源 (MCLK_SRC_SEL=00)
    uint8_t sysclk = 0x00u;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SYSCLK_CTRL1, &sysclk) != 0) return -1;
    sysclk &= (uint8_t)(~0x03u); // 清除 MCLK_SRC_SEL[1:0]
    sysclk &= (uint8_t)(~0x04u); // 清除 MCLK_INT (bit2)
    // 2) 设定内部分频选择：24.576MHz 与 22.5792MHz 对应不同的 INTSEL 编码
    if (!is_24m576) {
        sysclk |= CS43131_SYSCLK_INTSEL_22M5792;
    } else {
        sysclk |= CS43131_SYSCLK_INTSEL_24M576;
    }
    if (i2c_write_reg24(devAddr7, CS43131_REG_SYSCLK_CTRL1, sysclk) != 0) return -1;

    // 3) 至少等待 150us 让数字域时钟稳定
    Delay_Us(200);

    // 4) 可选：重新使能 ASP 时钟（若之前关闭），这里不改变 PDN_ASP 状态
    return 0;
}

// 第36步：使能 ASP 时钟（Pad 接口配置与 PDN_ASP 控制）
int cs43131_enable_asp_clocks(uint8_t devAddr7)
{
    // 使能 ASP/XSP pad 输出三态控制为默认，使能 ASP 时钟（在从模式下，置位 ASP_3ST=1 即可）
    uint8_t pad = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PAD_IF_CFG, &pad) != 0) return -1;
    pad |= CS43131_PAD_ASP_3ST; // ASP_3ST=1：主模式下时钟驱动高阻（Hi-Z）；从模式无效
    if (i2c_write_reg24(devAddr7, CS43131_REG_PAD_IF_CFG, pad) != 0) return -1;
    // 清除 PDN_ASP 以开启 ASP 时钟域
    if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_ASP)) != 0) return -1;
    return 0;
}

// 配置 PD9 为 EXTI9 下降沿中断，并打开 NVIC
void cs43131_int_pd9_exti_init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOD, GPIO_PinSource9);

    EXTI_InitTypeDef EXTI_InitStructure = {0};
    EXTI_InitStructure.EXTI_Line = EXTI_Line9;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);
    EXTI_ClearITPendingBit(EXTI_Line9);

    NVIC_InitTypeDef NVIC_InitStructure = {0};
    NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
}

// 由 EXTI9_5_IRQHandler 调用
void cs43131_handle_int_isr(void)
{
    s_cs43131_int_irq_seen = 1;
    s_pdn_done_isr_flag = 1;
}

// 使用INT事件替代轮询等待PDN_DONE：在指定超时内等待ISR置位
int cs43131_wait_pdn_done_via_int(uint32_t timeout_ms)
{
    s_pdn_done_isr_flag = 0;
    for (uint32_t t = 0; t < timeout_ms; ++t) {
        if (s_pdn_done_isr_flag) return 0;
        Delay_Ms(1);
    }
    return -1;
}

// 简易轮询：检测PD9上升沿则读取并打印中断信息（无NVIC/EXTI时也可用）
void cs43131_poll_pd9_and_dump(uint8_t devAddr7)
{
    uint8_t lvl = GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_9);
    if (!s_pd9_prev_level && lvl) {
        uint8_t s1 = 0, s2 = 0, s3 = 0;
        (void)i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS1, &s1);
        (void)i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS2, &s2);
        (void)i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS3, &s3);
        printf("[CS43131 INT(RISE)] STATUS1=0x%02X STATUS2=0x%02X STATUS3=0x%02X\r\n", s1, s2, s3);
        if (s1 & CS43131_INT_PDN_DONE) s_pdn_done_isr_flag = 1;
    }
    s_pd9_prev_level = lvl;
}

// 诊断：转储关键寄存器状态以排查无声问题
void cs43131_dump_status(uint8_t devAddr7)
{
    uint8_t v = 0;
    printf("\r\n[CS43131 0x%02X] Status dump:\r\n", devAddr7);
    if (i2c_read_reg24(devAddr7, CS43131_REG_SYSCLK_CTRL1, &v) == 0)
        printf("  SYSCLK_CTRL1        = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PAD_IF_CFG, &v) == 0)
        printf("  PAD_IF_CFG          = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PDN_CTRL, &v) == 0)
        printf("  PDN_CTRL            = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS1, &v) == 0)
        printf("  INT_STATUS1         = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS2, &v) == 0) {
        printf("  INT_STATUS2         = 0x%02X\r\n", v);
        // 解释 ASP/I2S 输入状态位：
        // bit7 OVFL, bit6 ERROR, bit5 LATE, bit4 EARLY, bit3 NOLRCK
        if (v) {
            printf("    ASP status bits: ");
            if (v & CS43131_ASP_NOLRCK_INT_MASK) printf("NOLRCK ");   // 未检测到LRCK
            if (v & CS43131_ASP_EARLY_INT_MASK)  printf("EARLY ");    // LRCK过早
            if (v & CS43131_ASP_LATE_INT_MASK)   printf("LATE ");     // LRCK过晚
            if (v & CS43131_ASP_ERROR_INT_MASK)  printf("ERROR ");    // 帧/格式错误
            if (v & CS43131_ASP_OVFL_INT_MASK)   printf("OVFL ");     // 接收溢出
            printf("\r\n");
            // 组合提示
            if ((v & (CS43131_ASP_EARLY_INT_MASK|CS43131_ASP_LATE_INT_MASK|CS43131_ASP_ERROR_INT_MASK)) 
                == (CS43131_ASP_EARLY_INT_MASK|CS43131_ASP_LATE_INT_MASK|CS43131_ASP_ERROR_INT_MASK)) {
                printf("    Hint: EARLY+LATE+ERROR all set: usually I2S timing/polarity or data alignment mismatch; check I2S(Philips) mode, 1-bit delay, LRCK/BCLK polarity, sample bit-width alignment.\r\n");
            } else if ((v & CS43131_ASP_NOLRCK_INT_MASK) && !(v & CS43131_ASP_EARLY_INT_MASK) && !(v & CS43131_ASP_LATE_INT_MASK)) {
                printf("    Hint: NOLRCK set: upstream may not output LRCK, or master/slave config error.\r\n");
            }
        }
    }
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS3, &v) == 0)
        printf("  INT_STATUS3         = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_CLK_CFG, &v) == 0)
        printf("  ASP_CLK_CFG (0x40018)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_FRAME_CFG, &v) == 0)
        printf("  ASP_FRAME_CFG(0x40019)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_DATA_FMT, &v) == 0)
        printf("  ASP_DATA_FMT (0x4001D)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_SAMPLE_BIT_SIZE, &v) == 0)
        printf("  SAMPLE_BIT_SIZE(0x1000C)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_SIZE_EN, &v) == 0)
        printf("  ASP_RX_CH1_SIZE_EN  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_SIZE_EN, &v) == 0)
        printf("  ASP_RX_CH2_SIZE_EN  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_LOC, &v) == 0)
        printf("  ASP_RX_CH1_LOC      = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_LOC, &v) == 0)
        printf("  ASP_RX_CH2_LOC      = 0x%02X\r\n", v);
    // Also dump XSP path to verify external host selection
    if (i2c_read_reg24(devAddr7, CS43131_REG_XSP_RX_CH1_SIZE_EN, &v) == 0)
        printf("  XSP_RX_CH1_SIZE_EN  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_XSP_RX_CH2_SIZE_EN, &v) == 0)
        printf("  XSP_RX_CH2_SIZE_EN  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_XSP_RX_CH1_LOC, &v) == 0)
        printf("  XSP_RX_CH1_LOC      = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_XSP_RX_CH2_LOC, &v) == 0)
        printf("  XSP_RX_CH2_LOC      = 0x%02X\r\n", v);

    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_MUTE, &v) == 0)
        printf("  PCM_MUTE (0x90003)  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_SIGCTL2, &v) == 0)
        printf("  PCM_SIGCTL2(0x90004)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_VOLUME_A, &v) == 0)
        printf("  PCM_VOLUME_A(0x90002)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_VOLUME_B, &v) == 0)
        printf("  PCM_VOLUME_B(0x90001)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_HP_CTRL1, &v) == 0)
        printf("  HP_CTRL1 (0x80000)  = 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_HP_CTRL2, &v) == 0)
        printf("  HP_CTRL2 (0x80001)  = 0x%02X\r\n", v);
    //新增：打印串口采样率与滤波选项
    if (i2c_read_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, &v) == 0)
        printf("  SAMPLE_RATE (0x1000B)= 0x%02X\r\n", v);
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, &v) == 0)
        printf("  PCM_FILTER_OPT(0x90000)= 0x%02X\r\n", v);
}

// 外部 VCPFILT 供电：上电流程（Figure 4-7）
int cs43131_ext_vcpfilt_power_up(uint8_t devAddr7)
{
    // 1) 打开外部 VCPFILT 与 HV_EN
    if (cs43131_reg_or(devAddr7, CS43131_REG_CLASSH_CTRL,
                        (uint8_t)(CS43131_CLASSH_EXT_VCPFILT | CS43131_CLASSH_HV_EN)) != 0) return -1;
    // 2) I2C ACK 后等待 8ms
    Delay_Ms(8);
    // 3) 释放并启动外部 VCPFILT± 电源上升（用 PC0 控制外部供电）
    GPIO_SetBits(GPIOC, GPIO_Pin_0);
    // 4) 等待外部电源达到稳态（典型 20~30ms，此处给出 25ms）
    Delay_Ms(25);
    // 5) 清除 PDN_HP 以使能耳放
    if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_HP)) != 0) return -1;
    return 0;
}

// 内部电荷泵供电：上电流程（Example 5-5 PCM Power-Up Sequence）
// 使用 Adapt-to-Signal 模式 (ADPT_PWR=111, HV_EN=1, EXT_VCPFILT=0)
int cs43131_int_vcp_power_up(uint8_t devAddr7)
{
    // 1) Pop-free 上电设置
    if (i2c_write_reg24(devAddr7, CS43131_REG_DIGPOP_CTRL1, 0x99) != 0) return -1;  // 0x10010 <- 0x99
    if (i2c_write_reg24(devAddr7, 0x80032, 0x20) != 0) return -1;                    // HP pop control

    // 2) 上电 ASP 接口（清除 PDN_ASP）
    if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_ASP)) != 0) return -1;

    // 3) 上电耳放（清除 PDN_HP）
    if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_HP)) != 0) return -1;

    // 4) 等待 12ms 让耳放稳定
    Delay_Ms(12);

    // 5) 恢复默认 Pop 设置
    if (i2c_write_reg24(devAddr7, 0x80032, 0x00) != 0) return -1;
    if (i2c_write_reg24(devAddr7, CS43131_REG_DIGPOP_CTRL1, 0x00) != 0) return -1;  // 0x10010 <- 0x00

    return 0;
}

// 统一上电接口：根据编译宏自动选择外部/内部供电模式
int cs43131_hp_power_up(uint8_t devAddr7)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return cs43131_ext_vcpfilt_power_up(devAddr7);
#else
    return cs43131_int_vcp_power_up(devAddr7);
#endif
}

// 外部 VCPFILT 供电：下电流程（Figure 4-8），不含 PCM 静默处理
int cs43131_ext_vcpfilt_power_down(uint8_t devAddr7)
{
    // 1) 置位 PDN_HP（关闭耳放）
    if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -1;
    // 2) I2C ACK 后等待 8ms
    Delay_Ms(8);
    // 3) 关闭外部 VCPFILT± 供电（PC0 拉低）
    GPIO_ResetBits(GPIOC, GPIO_Pin_0);
    // 4) 等待外部供电退至 Hi-Z（给出 20ms 退电时间窗）
    Delay_Ms(20);
    // 5) 清除 EXT_VCPFILT 与 HV_EN
    if (cs43131_reg_and(devAddr7, CS43131_REG_CLASSH_CTRL,
                         (uint8_t)(~(CS43131_CLASSH_EXT_VCPFILT | CS43131_CLASSH_HV_EN))) != 0) return -1;
    return 0;
}

// 辅助：等待 PDN_DONE 中断出现（最多 timeout_ms 毫秒）
static int cs43131_wait_pdn_done(uint8_t devAddr7, uint32_t timeout_ms)
{
    for (uint32_t t = 0; t < timeout_ms; ++t) {
        uint8_t s = 0; if (i2c_read_reg24(devAddr7, CS43131_REG_INT_STATUS1, &s) != 0) return -1;
        if (s & CS43131_INT_PDN_DONE) return 0;
        Delay_Ms(1);
    }
    return -1;
}

// 内部电荷泵供电：下电流程（Example 5-3 PCM Power-Down Sequence）
int cs43131_int_vcp_power_down(uint8_t devAddr7)
{
    // 按 datasheet 要求，等待 PDN_DONE 前需要确保其中断未被屏蔽。
    cs43131_enable_int_pdn_done(devAddr7);
    // 1) 置位 PDN_HP（关闭耳放）
    if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -1;
    // 2) 等待 PDN_DONE 中断（可选，确保耳放完全关闭）
    (void)cs43131_wait_pdn_done(devAddr7, 100);
    // 3) 关闭 ASP 接口
    if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_ASP) != 0) return -1;
    return 0;
}

// 统一下电接口：根据编译宏自动选择外部/内部供电模式
int cs43131_hp_power_down(uint8_t devAddr7)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    // 外部 VCPFILT 模式下优先使用带静音与等待窗口的 pop-free 下电流程。
    return cs43131_pcm_pop_free_power_down_external(devAddr7);
#else
    return cs43131_int_vcp_power_down(devAddr7);
#endif
}

int cs43131_enable_mono_mode_pcm(uint8_t devAddr7)
{
    typedef struct { uint32_t reg; uint8_t val; } wr_t;
    const wr_t seq[] = {
        {0x180009u, 0x2Fu}, {0x18000Au, 0xB4u}, {0x18000Bu, 0x25u}, {0x18000Cu, 0x80u},
        {0x18000Fu, 0x55u}, {0x180010u, 0xFAu},
        {0x180019u, 0x2Fu}, {0x18001Au, 0xB4u}, {0x18001Bu, 0x25u}, {0x18001Cu, 0x80u},
        {0x18001Fu, 0x4Eu}, {0x180020u, 0xFDu},
        {0x180029u, 0x2Fu}, {0x18002Au, 0xB4u}, {0x18002Bu, 0x25u}, {0x18002Cu, 0x80u},
        {0x18002Fu, 0x7Cu}, {0x180030u, 0xFDu},
        {0x180039u, 0x2Fu}, {0x18003Au, 0xB4u}, {0x18003Bu, 0x25u}, {0x18003Cu, 0x80u},
        {0x18003Fu, 0x52u}, {0x180040u, 0xFEu},
    };
    for (unsigned i = 0; i < sizeof(seq)/sizeof(seq[0]); ++i) {
        if (i2c_write_reg24(devAddr7, seq[i].reg, seq[i].val) != 0) {
            printf("[CS43131 0x%02X] mono enable write failed at 0x%06lX <- 0x%02X\r\n", devAddr7, (unsigned long)seq[i].reg, seq[i].val);
            return -1;
        }
        // printf("[CS43131 0x%02X] write 0x%06lX <- 0x%02X\r\n", devAddr7, (unsigned long)seq[i].reg, seq[i].val);
    }
    return 0;
}

int cs43131_disable_mono_mode_pcm(uint8_t devAddr7)
{
    typedef struct { uint32_t reg; uint8_t val; } wr_t;
    const wr_t seq[] = {
        {0x180009u, 0xD1u}, {0x18000Au, 0x4Bu}, {0x18000Bu, 0xDAu}, {0x18000Cu, 0x7Fu},
        {0x18000Fu, 0xABu}, {0x180010u, 0x05u},
        {0x180019u, 0xD1u}, {0x18001Au, 0x4Bu}, {0x18001Bu, 0xDAu}, {0x18001Cu, 0x7Fu},
        {0x18001Fu, 0xB2u}, {0x180020u, 0x02u},
        {0x180029u, 0xD1u}, {0x18002Au, 0x4Bu}, {0x18002Bu, 0xDAu}, {0x18002Cu, 0x7Fu},
        {0x18002Fu, 0x84u}, {0x180030u, 0x02u},
        {0x180039u, 0xD1u}, {0x18003Au, 0x4Bu}, {0x18003Bu, 0xDAu}, {0x18003Cu, 0x7Fu},
        {0x18003Fu, 0xAEu}, {0x180040u, 0x01u},
    };
    for (unsigned i = 0; i < sizeof(seq)/sizeof(seq[0]); ++i) {
        if (i2c_write_reg24(devAddr7, seq[i].reg, seq[i].val) != 0) {
            printf("[CS43131 0x%02X] mono disable write failed at 0x%06lX <- 0x%02X\r\n", devAddr7, (unsigned long)seq[i].reg, seq[i].val);
            return -1;
        }
        // printf("[CS43131 0x%02X] write 0x%06lX <- 0x%02X\r\n", devAddr7, (unsigned long)seq[i].reg, seq[i].val);
    }
    return 0;
}

static int cs43131_apply_pcm_swap_calibration(uint8_t devAddr7, bool enable_swap)
{
    typedef struct { uint32_t reg; uint8_t val; } wr_t;
    static const wr_t seq_enable[] = {
        {0x180005u, 0x8Cu}, {0x180007u, 0xABu}, {0x180015u, 0x31u}, {0x180017u, 0xB2u},
        {0x180025u, 0x30u}, {0x180027u, 0x84u}, {0x180035u, 0x9Cu}, {0x180037u, 0xAEu},
        {0x18000Du, 0x24u}, {0x18000Fu, 0xA3u}, {0x18001Du, 0x05u}, {0x18001Fu, 0xD4u},
        {0x18002Du, 0x0Bu}, {0x18002Fu, 0xC7u}, {0x18003Du, 0x71u}, {0x18003Fu, 0xE7u},
    };
    static const wr_t seq_disable[] = {
        {0x180005u, 0x24u}, {0x180007u, 0xA3u}, {0x180015u, 0x05u}, {0x180017u, 0xD4u},
        {0x180025u, 0x0Bu}, {0x180027u, 0xC7u}, {0x180035u, 0x71u}, {0x180037u, 0xE7u},
        {0x18000Du, 0x8Cu}, {0x18000Fu, 0xABu}, {0x18001Du, 0x31u}, {0x18001Fu, 0xB2u},
        {0x18002Du, 0x30u}, {0x18002Fu, 0x84u}, {0x18003Du, 0x9Cu}, {0x18003Fu, 0xAFu},
    };
    const wr_t *seq = enable_swap ? seq_enable : seq_disable;
    unsigned n = enable_swap ? (unsigned)(sizeof(seq_enable) / sizeof(seq_enable[0])) : (unsigned)(sizeof(seq_disable) / sizeof(seq_disable[0]));
    for (unsigned i = 0; i < n; ++i) {
        if (i2c_write_reg24(devAddr7, seq[i].reg, seq[i].val) != 0) return -1;
    }
    return 0;
}

static int cs43131_write_pcm_sigctl2_with_swap_seq(uint8_t devAddr7, bool inv_a, bool inv_b, bool swap_chan, bool copy_chan)
{
    uint8_t sig2_old = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_SIGCTL2, &sig2_old) != 0) return -1;

    uint8_t sig2_new = sig2_old;
    sig2_new &= (uint8_t)~(CS43131_PCM_INV_A | CS43131_PCM_INV_B | CS43131_PCM_SWAP_CHAN | CS43131_PCM_COPY_CHAN);
    if (inv_a) sig2_new |= CS43131_PCM_INV_A;
    if (inv_b) sig2_new |= CS43131_PCM_INV_B;
    if (swap_chan) sig2_new |= CS43131_PCM_SWAP_CHAN;
    if (copy_chan) sig2_new |= CS43131_PCM_COPY_CHAN;

    bool old_swap = ((sig2_old & CS43131_PCM_SWAP_CHAN) != 0);
    bool new_swap = ((sig2_new & CS43131_PCM_SWAP_CHAN) != 0);
    if (old_swap != new_swap) {
        if (cs43131_apply_pcm_swap_calibration(devAddr7, new_swap) != 0) return -2;
    }

    if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_SIGCTL2, sig2_new) != 0) return -3;
    return 0;
}

int cs43131_apply_jack_mode(cs43131_jack_mode_t mode)
{
    bool swap_right = (mode == CS43131_JACK_MODE_35MM);
    bool mono_enable = (mode == CS43131_JACK_MODE_44MM);

    if (cs43131_write_pcm_sigctl2_with_swap_seq(0x30, false, false, swap_right, false) != 0) return -1;
    if (cs43131_write_pcm_sigctl2_with_swap_seq(0x31, false, false, false, false) != 0) return -2;

    if (mono_enable) {
        if (cs43131_enable_mono_mode_pcm(0x30) != 0) return -3;
        if (cs43131_enable_mono_mode_pcm(0x31) != 0) return -4;
    } else {
        if (cs43131_disable_mono_mode_pcm(0x30) != 0) return -5;
        if (cs43131_disable_mono_mode_pcm(0x31) != 0) return -6;
    }
    return 0;
}

// 详细参数版：按 cfg 配置 ASP 为 I2S 从机
int cs43131_configure_asp_i2s_slave_ex(uint8_t devAddr7, const cs43131_asp_i2s_cfg_t *cfg, uint8_t ch1_size_en, uint8_t ch2_size_en)
{
    if (!cfg) return -1;
    // 1) 映射位宽到寄存器编码
    uint8_t asp_res = 0, asp_spsize = 0;
    switch (cfg->sample_bits) {
    case 8:  asp_res = CS43131_ASP_RX_CH_RES_8;  asp_spsize = CS43131_SPSIZE_ASP_8;  break;
    case 16: asp_res = CS43131_ASP_RX_CH_RES_16; asp_spsize = CS43131_SPSIZE_ASP_16; break;
    case 24: asp_res = CS43131_ASP_RX_CH_RES_24; asp_spsize = CS43131_SPSIZE_ASP_24; break;
    case 32: asp_res = CS43131_ASP_RX_CH_RES_32; asp_spsize = CS43131_SPSIZE_ASP_32; break;
    default: return -1; // 不支持的位宽
    }

    // 2) 取消 ASP 掉电
    if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_ASP)) != 0) return -1;

    // 3) 配置采样率（只更新低 4 位 ASP_SPRATE）
    uint8_t r = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, &r) != 0) return -1;
    r = (uint8_t)((r & 0xF0u) | (cfg->sprate_code & 0x0Fu));
    if (i2c_write_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, r) != 0) return -1;

    // 4) 配置采样位宽（ASP_SPSIZE bits1:0）
    uint8_t sps = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SAMPLE_BIT_SIZE, &sps) != 0) return -1;
    sps = (uint8_t)((sps & (uint8_t)~CS43131_SPSIZE_ASP_MASK) | asp_spsize);
    if (i2c_write_reg24(devAddr7, CS43131_REG_SAMPLE_BIT_SIZE, sps) != 0) return -1;

    // 5) ASP 时钟配置为从机 + 输入极性
    uint8_t clk = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_CLK_CFG, &clk) != 0) return -1;
    clk &= (uint8_t)~(CS43131_ASP_M_SB | CS43131_ASP_SCPOL_OUT | CS43131_ASP_SCPOL_IN | CS43131_ASP_LCPOL_OUT | CS43131_ASP_LCPOL_IN);
    if (cfg->lrck_invert) clk |= CS43131_ASP_LCPOL_IN;
    if (cfg->sclk_invert) clk |= CS43131_ASP_SCPOL_IN;
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_CLK_CFG, clk) != 0) return -1;

    // 6) 帧参数（I2S/LJ）
    uint8_t frm = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_FRAME_CFG, &frm) != 0) return -1;
    frm &= (uint8_t)~(CS43131_ASP_STP | CS43131_ASP_5050 | CS43131_ASP_FSD_MASK);
    if (cfg->stp_1bit_delay) frm |= CS43131_ASP_STP;
    if (cfg->duty50) frm |= CS43131_ASP_5050;
    frm |= (uint8_t)(cfg->fsd & CS43131_ASP_FSD_MASK);
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_FRAME_CFG, frm) != 0) return -1;

    // 7) 通道位置（slot 起始）
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_LOC, cfg->ch1_loc) != 0) return -1;
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_LOC, cfg->ch2_loc) != 0) return -1;

    // 8) 通道尺寸/使能：支持显式 size_en 覆盖，否则按 cfg 计算默认值
    if (ch1_size_en != 0) {
        if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_SIZE_EN, ch1_size_en) != 0) return -1;
    } else {
        uint8_t ch1 = (uint8_t)((cfg->ch_ap ? CS43131_ASP_RX_CH_AP : 0) | (cfg->ch1_en ? CS43131_ASP_RX_CH_EN : 0) | asp_res);
        if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_SIZE_EN, ch1) != 0) return -1;
    }
    if (ch2_size_en != 0) {
        if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_SIZE_EN, ch2_size_en) != 0) return -1;
    } else {
        uint8_t ch2 = (uint8_t)((cfg->ch_ap ? CS43131_ASP_RX_CH_AP : 0) | (cfg->ch2_en ? CS43131_ASP_RX_CH_EN : 0) | asp_res);
        if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_SIZE_EN, ch2) != 0) return -1;
    }

    return 0;
}

// 运行时调整 ASP 采样率与采样位深（建议在静音或无音时调用）
// rate_hz 支持：32000/44100/48000/88200/96000/176400/192000/352800/384000
// bits 支持：8/16/24/32
int cs43131_adjust_asp_runtime(uint8_t devAddr7, uint32_t rate_hz, uint8_t bits)
{
    // 1) 映射采样率到编码
    uint8_t sprate_code = 0;
    switch (rate_hz) {
    case 32000:   sprate_code = CS43131_ASP_SPRATE_32000;   break;
    case 44100:   sprate_code = CS43131_ASP_SPRATE_44100;   break;
    case 48000:   sprate_code = CS43131_ASP_SPRATE_48000;   break;
    case 88200:   sprate_code = CS43131_ASP_SPRATE_88200;   break;
    case 96000:   sprate_code = CS43131_ASP_SPRATE_96000;   break;
    case 176400:  sprate_code = CS43131_ASP_SPRATE_176400;  break;
    case 192000:  sprate_code = CS43131_ASP_SPRATE_192000;  break;
    case 352800:  sprate_code = CS43131_ASP_SPRATE_352800;  break;
    case 384000:  sprate_code = CS43131_ASP_SPRATE_384000;  break;
    default:
        return -1; // 不支持的采样率
    }

    // 2) 映射位深到编码
    uint8_t spsize_code;
    uint8_t ch_res_code;
    switch (bits) {
    case 8:  spsize_code = CS43131_SPSIZE_ASP_8;  ch_res_code = CS43131_ASP_RX_CH_RES_8;  break;
    case 16: spsize_code = CS43131_SPSIZE_ASP_16; ch_res_code = CS43131_ASP_RX_CH_RES_16; break;
    case 24: spsize_code = CS43131_SPSIZE_ASP_24; ch_res_code = CS43131_ASP_RX_CH_RES_24; break;
    case 32: spsize_code = CS43131_SPSIZE_ASP_32; ch_res_code = CS43131_ASP_RX_CH_RES_32; break;
    default:
        return -2; // 不支持的位深
    }

    // 3) 更新串口采样率寄存器（保留高4位）
    uint8_t sr = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, &sr) != 0) return -3;
    sr = (uint8_t)((sr & 0xF0u) | (sprate_code & 0x0Fu));
    if (i2c_write_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, sr) != 0) return -4;

    // 4) 更新全局采样位宽（仅改 ASP 的 1:0 位）
    uint8_t sps = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_SAMPLE_BIT_SIZE, &sps) != 0) return -5;
    sps = (uint8_t)((sps & (uint8_t)~CS43131_SPSIZE_ASP_MASK) | (spsize_code & CS43131_SPSIZE_ASP_MASK));
    if (i2c_write_reg24(devAddr7, CS43131_REG_SAMPLE_BIT_SIZE, sps) != 0) return -6;

    // 5) 更新通道分辨率（保持 AP/EN 位不变）
    uint8_t ch1 = 0, ch2 = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_SIZE_EN, &ch1) != 0) return -7;
    ch1 = (uint8_t)((ch1 & (uint8_t)~CS43131_ASP_RX_CH_RES_MASK) | (ch_res_code & CS43131_ASP_RX_CH_RES_MASK));
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH1_SIZE_EN, ch1) != 0) return -8;

    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_SIZE_EN, &ch2) != 0) return -9;
    ch2 = (uint8_t)((ch2 & (uint8_t)~CS43131_ASP_RX_CH_RES_MASK) | (ch_res_code & CS43131_ASP_RX_CH_RES_MASK));
    if (i2c_write_reg24(devAddr7, CS43131_REG_ASP_RX_CH2_SIZE_EN, ch2) != 0) return -10;

    // 5.1) 运行时确保 I2S 帧参数与 MCU 侧一致：STP=1、FSD 取当前 DAC 配置、LRCK 50/50。
    // 若之前切到 LJ 或占空非 50/50，会导致位对齐问题，特别是 32bit 下表现为失真。
    uint8_t frm = 0;
    uint8_t fsd_cfg = (devAddr7 == 0x31u) ? g_cs43131_fsd_dac_31 : g_cs43131_fsd_dac_30;
    if (i2c_read_reg24(devAddr7, CS43131_REG_ASP_FRAME_CFG, &frm) == 0) {
        frm &= (uint8_t)~(CS43131_ASP_STP | CS43131_ASP_5050 | CS43131_ASP_FSD_MASK);
        frm |= CS43131_ASP_STP;     // 1-bit 延时（I2S）
        frm |= CS43131_ASP_5050;    // LRCK 50/50 占空
        frm |= (uint8_t)(fsd_cfg & CS43131_ASP_FSD_MASK); // FSD 使用该 DAC 的配置值
        i2c_write_reg24(devAddr7, CS43131_REG_ASP_FRAME_CFG, frm);
    }

    // 6) 依据采样率自动切换 WBF：仅在 192kHz 下使能，其他采样率关闭
    // 修改 PCM_WBF_EN 必须在 PDN_HP=1（耳放关闭）时进行
    uint8_t filt = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, &filt) == 0) {
        bool wbf_should_enable = (sprate_code == CS43131_ASP_SPRATE_192000);
        uint8_t desired_filt = filt;
        if (wbf_should_enable) {
            desired_filt |= CS43131_PCM_WBF_EN;
        } else {
            desired_filt &= (uint8_t)~CS43131_PCM_WBF_EN;
        }

        if (desired_filt != filt) {
            // 置位 PDN_HP，等待完成，再写新滤波选项，然后清除 PDN_HP
            if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -11;
            cs43131_wait_pdn_done(devAddr7, 200);
            if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, desired_filt) != 0) return -12;
            if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_HP)) != 0) return -13;
            cs43131_wait_pdn_done(devAddr7, 200);
        }
    }

    // printf("sprate_code: %d, spsize_code: %d, ch_res_code: %d\n", sprate_code, spsize_code, ch_res_code);
    g_current_rate_hz = rate_hz;
    g_current_bits = bits;
    return 0; 
}


int cs43131_configure_pcm_interface(
    uint8_t devAddr7,
    bool enable_hpf,
    bool enable_deemph,
    bool enable_nos,
    bool enable_wbf,
    uint8_t szc_mode,
    bool enable_auto_mute,
    bool inv_a,
    bool inv_b,
    bool swap_chan,
    bool copy_chan)
{
    // 1) 配置 PCM Filter Option (0x90000)
    // 注意：PCM_WBF_EN 仅在 192kHz 下使用，且必须在 PDN_HP=1 时更改。
    // 因此根据当前采样率条件应用 WBF，并在检测到 WBF 位变更时执行安全的 PDN_HP 切换。
    uint8_t sr = 0;
    (void)i2c_read_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, &sr);
    bool wbf_allowed = ((sr & 0x0Fu) == CS43131_ASP_SPRATE_192000);

    uint8_t orig_filt = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, &orig_filt) != 0) return -1;

    uint8_t new_filt = 0x00;
    if (enable_hpf)    new_filt |= CS43131_HIGH_PASS;
    if (enable_deemph) new_filt |= CS43131_DEEMP_ON;
    if (enable_nos)    new_filt |= CS43131_NOS;
    if (wbf_allowed && enable_wbf) new_filt |= CS43131_PCM_WBF_EN; // 非192kHz时强制不置位

    // 若 WBF 位发生变化，则在 PDN_HP=1 状态下改位以满足手册约束
    if (((orig_filt ^ new_filt) & CS43131_PCM_WBF_EN) != 0) {
        // 置位 PDN_HP（关闭耳放）并等待 PDN_DONE
        if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -1;
        (void)cs43131_wait_pdn_done(devAddr7, 200);
        if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, new_filt) != 0) return -1;
        // 清除 PDN_HP（重新打开耳放）并等待 PDN_DONE
        if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_HP)) != 0) return -1;
        (void)cs43131_wait_pdn_done(devAddr7, 200);
    } else {
        // 无 WBF 变更，直接写其他滤波位
        if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, new_filt) != 0) return -1;
    }

    cs43131_set_pcm_volume(devAddr7, 0x8D, 0x8D, true);
    // 2) 配置 PCM Path Signal Control 1 (0x90003)
    // 保留当前的通道静音状态位，仅更新 RAMP_DOWN、SZC 与自动静音相关位
    uint8_t sig1 = 0x00;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_MUTE, &sig1) != 0) return -1;
    sig1 &= (uint8_t)~(CS43131_PCM_RAMP_DOWN | CS43131_PCM_SZC_MASK | CS43131_PCM_AMUTE | CS43131_PCM_AMUTEBEQA);
    sig1 |= CS43131_PCM_RAMP_DOWN;
    switch (szc_mode & CS43131_PCM_SZC_MASK) {
    case CS43131_PCM_SZC_OFF:  sig1 |= CS43131_PCM_SZC_OFF;  break;
    case CS43131_PCM_SZC_VOL:  sig1 |= CS43131_PCM_SZC_VOL;  break;
    case CS43131_PCM_SZC_MUTE: sig1 |= CS43131_PCM_SZC_MUTE; break;
    case CS43131_PCM_SZC_BOTH: sig1 |= CS43131_PCM_SZC_BOTH; break;
    default: sig1 |= CS43131_PCM_SZC_OFF; break;
    }
    if (enable_auto_mute) {
        sig1 |= CS43131_PCM_AMUTE;
        sig1 |= CS43131_PCM_AMUTEBEQA;
    }
    if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_MUTE, sig1) != 0) return -1;

    // 3) 配置 PCM Path Signal Control 2 (0x90004)
    if (cs43131_write_pcm_sigctl2_with_swap_seq(devAddr7, inv_a, inv_b, swap_chan, copy_chan) != 0) return -1;

    return 0;
}


int cs43131_set_pcm_volume(uint8_t devAddr7, uint8_t vol_a, uint8_t vol_b, bool link_b_eq_a)
{
    // 独立的音量设置函数
    // 若 link_b_eq_a=true，则先将 VOL_BEQA 置位；否则清除该位。
    uint8_t v = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_MUTE, &v) != 0) return -1;
    if (link_b_eq_a) {
        v |= CS43131_PCM_VOL_BEQA;
    } else {
        v &= (uint8_t)~CS43131_PCM_VOL_BEQA;
    }
    // 可选：设置软变化控制为 VOL 或 BOTH，避免突变噪声
    // 这里如果当前 SZC 为 OFF，则改为 VOL（仅音量变化）
    if ((v & CS43131_PCM_SZC_MASK) == CS43131_PCM_SZC_OFF) {
        v = (uint8_t)((v & (uint8_t)~CS43131_PCM_SZC_MASK) | CS43131_PCM_SZC_VOL);
    }
    if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_MUTE, v) != 0) return -1;

    // 写入 A 通道音量
    if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_VOLUME_A, vol_a) != 0) return -1;
    // 写入 B 通道音量（若联动为真，可忽略 vol_b，直接跟随 A）
    if (!link_b_eq_a) {
        if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_VOLUME_B, vol_b) != 0) return -1;
    } else {
        // 若开启联动，硬件会使用 A 的设置驱动 B，无需单独写 B，但为了保险可以写一致值。
        (void)i2c_write_reg24(devAddr7, CS43131_REG_PCM_VOLUME_B, vol_a);
    }

    return 0;
}

// === 左右 DAC 音量平衡 ===
// 平衡值：0=居中；>0 偏左（左 DAC 0x31 加音量）；<0 偏右（右 DAC 0x30 加音量）。
// “加音量”= 在基准音量上减小该侧衰减寄存器值，另一侧保持基准不变；
// 若已到 0x00（0dB 满幅）则钳位不再增加。
static int8_t g_balance = 0;

int8_t cs43131_get_balance(void)
{
    return g_balance;
}

void cs43131_set_balance(int8_t balance)
{
    if (balance > CS43131_BALANCE_MAX_STEPS) balance = CS43131_BALANCE_MAX_STEPS;
    if (balance < -(int8_t)CS43131_BALANCE_MAX_STEPS) balance = -(int8_t)CS43131_BALANCE_MAX_STEPS;
    g_balance = balance;
}

int cs43131_apply_volume_balance(uint8_t base_vol, int8_t balance)
{
    cs43131_set_balance(balance);

    int left = (int)base_vol;
    int right = (int)base_vol;
    if (g_balance > 0) left -= g_balance;         // 偏左：左 DAC 减小衰减
    else if (g_balance < 0) right += g_balance;   // 偏右：右 DAC 减小衰减
    if (left < 0x00) left = 0x00;
    if (left > 0xFE) left = 0xFE;
    if (right < 0x00) right = 0x00;
    if (right > 0xFE) right = 0xFE;

    if (cs43131_set_pcm_volume(0x30, (uint8_t)right, (uint8_t)right, true) != 0) return -1;
    if (cs43131_set_pcm_volume(0x31, (uint8_t)left, (uint8_t)left, true) != 0) return -1;
    return 0;
}

// 新增：显式取消通道静音（清除 PCM_MUTE_A/B）
int cs43131_unmute_both_channels(uint8_t devAddr7)
{
    uint8_t v = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_MUTE, &v) != 0) return -1;
    v &= (uint8_t)~(CS43131_PCM_MUTE_A | CS43131_PCM_MUTE_B);
    if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_MUTE, v) != 0) return -1;
    return 0;
}

int cs43131_mute_both_channels(uint8_t devAddr7)
{
    uint8_t v = 0;
    int rc = i2c_read_reg24(devAddr7, CS43131_REG_PCM_MUTE, &v);
    if (rc != 0) return -1;
    v |= (uint8_t)(CS43131_PCM_MUTE_A | CS43131_PCM_MUTE_B);
    return i2c_write_reg24(devAddr7, CS43131_REG_PCM_MUTE, v);
}

// HP 配置：无耳机检测，根据编译宏选择外部/内部供电模式
// 外部模式：ADPT_PWR=010, EXT_VCPFILT=1, HV_EN=1
// 内部模式：ADPT_PWR=111 (Adapt-to-Signal), EXT_VCPFILT=0, HV_EN=1
int cs43131_configure_hp_no_detect(uint8_t devAddr7)
{
    // 根据当前编译模式与菜单选择，统一下发耳放工作模式和满量程配置。
    if (cs43131_apply_hp_user_config(devAddr7) != 0) {
        return -1;
    }

    // 3) 禁用耳机检测功能
    uint8_t hpdet = 0;
    hpdet &= (uint8_t)(~CS43131_HPDETECT_CTRL_MASK);
    hpdet |= CS43131_HPDETECT_CTRL_DISABLE;
    hpdet &= (uint8_t)(~CS43131_HPDETECT_INV);
    hpdet &= (uint8_t)(~CS43131_HPDETECT_RISE_DBC_MASK);
    hpdet &= (uint8_t)(~CS43131_HPDETECT_FALL_DBC_MASK);
    hpdet |= CS43131_HPDETECT_FALL_DBC_500MS;
    if (i2c_write_reg24(devAddr7, CS43131_REG_HP_DETECT, hpdet) != 0)
        return -1;

    // 4) 屏蔽与耳机检测相关的中断源
    uint8_t mask1 = 0xFFu;
    if (i2c_read_reg24(devAddr7, CS43131_REG_INT_MASK1, &mask1) != 0)
        return -1;
    mask1 |= (uint8_t)(CS43131_INT_MASK_HPDETECT_PLUG | CS43131_INT_MASK_HPDETECT_UNPLUG);
    if (i2c_write_reg24(devAddr7, CS43131_REG_INT_MASK1, mask1) != 0)
        return -1;

    return 0;
}

// 兼容旧接口：外部 VCPFILT 供电且无耳机检测
int cs43131_configure_hp_external_no_detect(uint8_t devAddr7)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return cs43131_configure_hp_no_detect(devAddr7);
#else
    // 如果编译为内部模式，此函数不适用
    return -1;
#endif
}

int cs43131_get_hp_amp_mode(cs43131_hp_amp_mode_t *out_mode)
{
    if (!out_mode) return -1;
#if CS43131_USE_EXTERNAL_VCPFILT
    *out_mode = CS43131_HP_AMP_MODE_CLASS_AB;
#else
    *out_mode = s_hp_amp_mode;
#endif
    return 0;
}

int cs43131_get_hp_full_scale(cs43131_hp_full_scale_t *out_scale)
{
    if (!out_scale) return -1;
#if CS43131_USE_EXTERNAL_VCPFILT
    *out_scale = CS43131_HP_FS_1P732VRMS;
#else
    *out_scale = s_hp_full_scale;
#endif
    return 0;
}

int cs43131_cycle_hp_amp_mode_both(void)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return -1;
#else
    s_hp_amp_mode = (s_hp_amp_mode == CS43131_HP_AMP_MODE_CLASS_H)
        ? CS43131_HP_AMP_MODE_CLASS_AB
        : CS43131_HP_AMP_MODE_CLASS_H;
    return cs43131_apply_hp_runtime_both();
#endif
}

int cs43131_cycle_hp_full_scale_both(void)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return -1;
#else
    s_hp_full_scale = (cs43131_hp_full_scale_t)((s_hp_full_scale + 1) % (sizeof(s_hp_profiles) / sizeof(s_hp_profiles[0])));
    return cs43131_apply_hp_runtime_both();
#endif
}

// 直接设置耳放模式和满幅输出（用于从 Flash 恢复设置）
int cs43131_set_hp_config_both(cs43131_hp_amp_mode_t amp_mode, cs43131_hp_full_scale_t full_scale)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    (void)amp_mode; (void)full_scale;
    return -1;
#else
    if ((unsigned)full_scale >= (sizeof(s_hp_profiles) / sizeof(s_hp_profiles[0]))) {
        return -1;
    }
    s_hp_amp_mode = amp_mode;
    s_hp_full_scale = full_scale;
    return cs43131_apply_hp_runtime_both();
#endif
}

// 打包步骤37+38：启用单声道并上电HP（根据编译宏自动选择供电模式）
int cs43131_enable_mono_and_powerup_hp(uint8_t devAddr7)
{
    // Step 37: 启用单声道模式（按文档 5.12.1 的程序序列）
    if (cs43131_enable_mono_mode_pcm(devAddr7) != 0)
        return -1;

    // Step 38: 先完成 HP 相关配置，再执行上电流程
    // 这样可以保证在清除 PDN_HP 前，Class H 与 HP 输出相关寄存器已经配置完成
    if (cs43131_configure_hp_no_detect(devAddr7) != 0)
        return -1;
    if (cs43131_hp_power_up(devAddr7) != 0)
        return -1;

    return 0;
}

// 兼容旧接口：启用单声道并上电HP（外部VCPFILT供电）
int cs43131_enable_mono_and_powerup_hp_external(uint8_t devAddr7)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return cs43131_enable_mono_and_powerup_hp(devAddr7);
#else
    // 如果编译为内部模式，此函数不适用
    return -1;
#endif
}

// 外部 VCPFILT 模式下的 PCM 无爆音下电流程（Table 5.8.1）
int cs43131_pcm_pop_free_power_down_external(uint8_t devAddr7)
{
    // 1) Pop-free 设置
    if (i2c_write_reg24(devAddr7, CS43131_REG_DIGPOP_CTRL1, 0x99) != 0) return -1; // 0x10010 <- 0x99
    if (i2c_write_reg24(devAddr7, CS43131_REG_HP_POP_CTRL, 0x21) != 0) return -1;  // 0x80046 <- 0x21

    // 2) 静音两个通道
    if (cs43131_reg_or(devAddr7, CS43131_REG_PCM_MUTE, (uint8_t)(CS43131_PCM_MUTE_A | CS43131_PCM_MUTE_B)) != 0) return -1;

    // 3) 等待 150ms 使静音生效
    Delay_Ms(150);

    // 4) 使能 PDN_DONE 中断（清除掩码位）
    if (cs43131_reg_and(devAddr7, CS43131_REG_INT_MASK1, (uint8_t)(~CS43131_INT_MASK_PDN_DONE)) != 0) return -1;

    // 5) 关闭耳放（PDN_HP=1）
    if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -1;

    // 6) 等待 PDN_DONE 中断到来
    if (cs43131_wait_pdn_done(devAddr7, 200) != 0) return -1;

    // 7) 关闭 ASP（PDN_ASP=1）
    if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_ASP) != 0) return -1;

    // 8) 取消静音（恢复）
    if (cs43131_reg_and(devAddr7, CS43131_REG_PCM_MUTE, CS43131_PCM_UNMUTE_MASK) != 0) return -1;

    // 9) 恢复默认 Pop 设置
    if (i2c_write_reg24(devAddr7, CS43131_REG_HP_POP_CTRL, 0x20) != 0) return -1;  // 0x80046 <- 0x20
    if (i2c_write_reg24(devAddr7, CS43131_REG_DIGPOP_CTRL1, 0x00) != 0) return -1; // 0x10010 <- 0x00

    return 0;
}

int cs43131_startup_dual_dac(void)
{
    // 启动阶段直接读取 USB 当前采样率，保证 DAC 初始 ASP_SPRATE 与 USB 侧保持一致。
    uint32_t startup_rate_hz = USB_Audio_GetCurrentFreqHz();
    uint8_t startup_sprate_code = 0;
    switch (startup_rate_hz) {
    case 32000:   startup_sprate_code = CS43131_ASP_SPRATE_32000;   break;
    case 44100:   startup_sprate_code = CS43131_ASP_SPRATE_44100;   break;
    case 48000:   startup_sprate_code = CS43131_ASP_SPRATE_48000;   break;
    case 88200:   startup_sprate_code = CS43131_ASP_SPRATE_88200;   break;
    case 96000:   startup_sprate_code = CS43131_ASP_SPRATE_96000;   break;
    case 176400:  startup_sprate_code = CS43131_ASP_SPRATE_176400;  break;
    case 192000:  startup_sprate_code = CS43131_ASP_SPRATE_192000;  break;
    case 352800:  startup_sprate_code = CS43131_ASP_SPRATE_352800;  break;
    case 384000:  startup_sprate_code = CS43131_ASP_SPRATE_384000;  break;
    default:
        return -10;
    }

    // 1) 配置 ASP I2S 从机：基础配置复用，左/右仅 ch_ap 与 SIZE_EN 不同 (不要修改这里的数值，默认它符合标准)
    cs43131_asp_i2s_cfg_t asp_cfg = {
        .sample_bits = 32,
        .sprate_code = startup_sprate_code,
        .lrck_invert = false,
        .sclk_invert = true,
        .fsd = (uint8_t)(g_cs43131_fsd_dac_30 & CS43131_ASP_FSD_MASK),
        .stp_1bit_delay = true,
        .duty50 = true,
        .ch1_loc = 0,
        .ch2_loc = 0,
        .ch_ap = false,
        .ch1_en = true,
        .ch2_en = true
    };
    if (cs43131_configure_asp_i2s_slave_ex(0x30, &asp_cfg, 0x0F, 0x0F) != 0) return -1; // 右
    asp_cfg.fsd = (uint8_t)(g_cs43131_fsd_dac_31 & CS43131_ASP_FSD_MASK);
    asp_cfg.ch_ap = true;
    if (cs43131_configure_asp_i2s_slave_ex(0x31, &asp_cfg, 0x07, 0x07) != 0) return -2; // 左

    g_current_rate_hz = startup_rate_hz;
    g_current_bits = asp_cfg.sample_bits;

    // 2) 依据耳机插入初始化 swap 右声道（PA1 高=4.4mm 插入；PA2 低=3.5mm 插入）
    BitAction pa1_init = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1);
    BitAction pa2_init = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_2);
    bool hp44_inserted_init = (pa1_init == Bit_SET);
    bool hp35_inserted_init = (pa2_init == Bit_RESET);
    cs43131_jack_mode_t startup_mode = CS43131_JACK_MODE_NONE;
    if (hp44_inserted_init) {
        startup_mode = CS43131_JACK_MODE_44MM;
    } else if (hp35_inserted_init) {
        startup_mode = CS43131_JACK_MODE_35MM;
    }

    // 3) PCM 接口统一配置（两路相同，除 swap_chan 差异）
    uint8_t devs_pcm[2] = {0x30, 0x31};
    bool swaps_pcm[2] = {false, false};
    for (int i = 0; i < 2; ++i) {
        if (cs43131_configure_pcm_interface(
                devs_pcm[i],
                false,  // enable_hpf（保持与原代码一致）
                false,  // enable_deemph
                false,  // enable_nos
                false,  // enable_wbf
                CS43131_PCM_SZC_MUTE,
                true,   // enable_auto_mute
                false,  // inv_a
                false,  // inv_bwo
                swaps_pcm[i],
                false   // copy_chan
            ) != 0) return -3;
    }

    if (cs43131_apply_jack_mode(startup_mode) != 0) return -6;
    if (cs43131_configure_hp_no_detect(0x30) != 0) return -7;
    if (cs43131_configure_hp_no_detect(0x31) != 0) return -8;
    if (startup_mode != CS43131_JACK_MODE_NONE) {
        if (cs43131_hp_power_up(0x30) != 0) return -9;
        if (cs43131_hp_power_up(0x31) != 0) return -10;
    }

    {
        uint8_t filt = 0;
        if (cs43131_get_pcm_filter_opt(0x30, &filt) == 0) {
            if ((filt & CS43131_FILTER_SLOW_FASTB) == 0) {
                (void)cs43131_toggle_filter_bit_both(CS43131_FILTER_SLOW_FASTB);
            }
        }
    }

    if (startup_mode != CS43131_JACK_MODE_NONE) {
        if (cs43131_unmute_both_channels(0x30) != 0) return -11;
        if (cs43131_unmute_both_channels(0x31) != 0) return -12;
    }

    return 0;
}
int cs43131_get_pcm_filter_opt(uint8_t devAddr7, uint8_t *out_val)
{
    if (!out_val) return -1;
    uint8_t v = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, &v) != 0) return -1;
    *out_val = v;
    return 0;
}

static int cs43131_toggle_wbf_safe(uint8_t devAddr7, uint8_t orig)
{
    uint8_t sr = 0; (void)i2c_read_reg24(devAddr7, CS43131_REG_SERIAL_PORT_SAMPLE_RATE, &sr);
    bool wbf_allowed = ((sr & 0x0Fu) == CS43131_ASP_SPRATE_192000);
    uint8_t newv = (uint8_t)(orig ^ CS43131_PCM_WBF_EN);
    if (!wbf_allowed) newv &= (uint8_t)(~CS43131_PCM_WBF_EN);
    if (((orig ^ newv) & CS43131_PCM_WBF_EN) != 0) {
        if (cs43131_reg_or(devAddr7, CS43131_REG_PDN_CTRL, CS43131_PDN_HP) != 0) return -1;
        (void)cs43131_wait_pdn_done(devAddr7, 200);
        if (i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, newv) != 0) return -1;
        if (cs43131_reg_and(devAddr7, CS43131_REG_PDN_CTRL, (uint8_t)(~CS43131_PDN_HP)) != 0) return -1;
        (void)cs43131_wait_pdn_done(devAddr7, 200);
        return 0;
    }
    return i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, newv);
}

int cs43131_toggle_filter_bit(uint8_t devAddr7, uint8_t bit)
{
    uint8_t v = 0;
    if (i2c_read_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, &v) != 0) return -1;
    if (bit == CS43131_PCM_WBF_EN) {
        return cs43131_toggle_wbf_safe(devAddr7, v);
    }
    v ^= bit;
    return i2c_write_reg24(devAddr7, CS43131_REG_PCM_FILTER_OPT, v);
}

int cs43131_toggle_filter_bit_both(uint8_t bit)
{
    if (cs43131_toggle_filter_bit(0x30, bit) != 0) return -1;
    if (cs43131_toggle_filter_bit(0x31, bit) != 0) return -1;
    return 0;
}

// 直接设置两片 DAC 的 PCM Filter Option 寄存器（用于从 Flash 恢复设置）
int cs43131_set_pcm_filter_opt_both(uint8_t value)
{
    if (i2c_write_reg24(0x30, CS43131_REG_PCM_FILTER_OPT, value) != 0) return -1;
    if (i2c_write_reg24(0x31, CS43131_REG_PCM_FILTER_OPT, value) != 0) return -1;
    return 0;
}
