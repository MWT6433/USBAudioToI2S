#include "ch32v30x_spi.h"
#include "ch32v30x_spi_device.h"
#include "app_config.h"
#if BOARD_HAS_SI5351
#include "si5351a_revb_reg_config.h"
#endif
#include "cs43131.h"


uint8_t pending_format = 0;
uint8_t format_now = 0;

// MCLK 二分频开关状态（0=晶振直出默认；菜单切换并持久化）
volatile uint8_t g_cpld_mck_div2 = 0;
// CPLD 固件版本号（CPLD_GetStatus 成功时记录，开机握手即捕获）
volatile uint8_t g_cpld_version = 0;

// 硬件 SPI1（PA4=CS 软件 GPIO、PA5=SCK、PA6=MISO、PA7=MOSI），Mode0 / MSB-first / 4.5MHz。
// 每次调用完成一个完整事务：CS 低 → 单字节全双工 → CS 高，
// 与 CPLD spi_slave 的"一次片选一个字节、响应返回上一事务结果"协议一致。
// 单事务约 2µs：水位轮询（两事务）约 10µs，可在 10ms 控制节拍内完成。
uint8_t SPI_SendData(uint8_t data)
{
    uint32_t timeout = 5000; // ~50µs @72MHz 总线时钟量级，防外设异常时卡死主循环

    GPIO_ResetBits(GPIOA, GPIO_Pin_4); // CS 低
    while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET) {
        if (--timeout == 0) { GPIO_SetBits(GPIOA, GPIO_Pin_4); return 0; }
    }
    SPI_I2S_SendData(SPI1, data);
    while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE) == RESET) {
        if (--timeout == 0) { GPIO_SetBits(GPIOA, GPIO_Pin_4); return 0; }
    }
    uint8_t res = (uint8_t)SPI_I2S_ReceiveData(SPI1);
    while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_BSY) == SET) {}
    GPIO_SetBits(GPIOA, GPIO_Pin_4); // CS 高
    return res;
}

uint8_t CPLD_GetStatus(uint8_t *version)
{
    SPI_SendData(CPLD_INST_GET_STATUS);
    uint8_t data = SPI_SendData(0);
    *version = data & 0x7F;
    g_cpld_version = *version;  // 记录版本，供菜单可见性等特性门控
    return CPLD_GET_READY(data);
}

uint8_t CPLD_SetFormat(uint8_t format)
{
    // 判定 48k 族与 44.1k 族，调用原始的固定频率配置函数
    uint8_t online = 0;
    int rc = 0;
    #if BOARD_HAS_SI5351
    switch (format) {
        case CPLD_FORMAT_2:   // 384k -> 24.576 MHz 家族
        case CPLD_FORMAT_1:   // 192k
        case CPLD_FORMAT_D2:  // 96k
        case CPLD_FORMAT_D4:  // 48k
            rc = si5351_configure_24_576mhz();
            break;
        case CPLD_FORMAT_SUB_1:  // 176.4k -> 22.5792 MHz 家族
        case CPLD_FORMAT_SUB_D2: // 88.2k
        case CPLD_FORMAT_SUB_D4: // 44.1k
            rc = si5351_configure_22_5792mhz();
            break;
        default:
            rc = -1;
            break;
    }
    #else
    // 无 Si5351 的板卡：直接切换 DAC 的外部 MCLK INTSEL（两片一致）
    bool is_48k_family = (format == CPLD_FORMAT_2 || format == CPLD_FORMAT_1 ||
                          format == CPLD_FORMAT_D2 || format == CPLD_FORMAT_D4);
    int rc1 = cs43131_switch_mclk_external(0x30, is_48k_family);
    int rc2 = cs43131_switch_mclk_external(0x31, is_48k_family);
    rc = (rc1 == 0 && rc2 == 0) ? 0 : -1;
    #endif
    SPI_SendData(CPLD_INST_SET_FORMAT | format);
    // 通过 CPLD_GetStatus() 确认 CPLD 上线（ready 位）
    uint8_t ver = 0;
    online = CPLD_GetStatus(&ver);

    // 与原语义对齐：返回 1 表示 ready，0 表示未就绪
    return (rc == 0) && online ? 1 : 0;
}
uint8_t CPLD_GetFormat(uint8_t *format)
{
    SPI_SendData(CPLD_INST_GET_FORMAT);
    // GET_FORMAT 的响应字节 = ready(bit7) | div2(bit3) | 格式(bit2:0)（v4 起含 bit3）
    uint8_t data = SPI_SendData(0);
    *format = data & 0x07;
    return CPLD_GET_READY(data);
}

// 运行时切换 MCLK 二分频：0=晶振直出(49.152/45.1584)，1=÷2(24.576/22.5792 标称)。
// 仅写 CPLD 的独立寄存器（SET_MCLK_DIV2），与 SET_FORMAT 互不干扰，切率不丢状态。
void CPLD_SetMclkDiv2(uint8_t on)
{
    g_cpld_mck_div2 = on ? 1 : 0;
    SPI_SendData(CPLD_INST_SET_MCLK_DIV2 | g_cpld_mck_div2);
}

// 静音包裹版：MCLK 经组合 mux 切换有毛刺，静音后切换、稳定 200µs 再恢复。
// 供菜单单击与开机应用保存偏好时调用（DAC 已上电运行的场合）。
void CPLD_SetMclkDiv2Muted(uint8_t on)
{
    if ((on ? 1u : 0u) == g_cpld_mck_div2) return;  // 状态未变：跳过，避免无谓 mute 打嗝
    cs43131_mute_both_channels(0x30);
    cs43131_mute_both_channels(0x31);
    CPLD_SetMclkDiv2(on);
    Delay_Us(200);  // 与 cs43131_switch_mclk_external 的数字域稳定时间一致
    cs43131_unmute_both_channels(0x30);
    cs43131_unmute_both_channels(0x31);
}

// 读取 FIFO 水位状态字节：bit7=near_full bit6=near_empty bit5:0=水位/4（0..508）
uint8_t CPLD_GetLevel(void)
{
    SPI_SendData(CPLD_INST_GET_LEVEL);
    return SPI_SendData(0);
}

// 读取并清除 over/underrun sticky 事件：bit7=溢出 bit6=下溢
uint8_t CPLD_GetEvents(void)
{
    SPI_SendData(CPLD_INST_GET_EVENTS);
    return SPI_SendData(0);
}

// ---- v6 统计块 ------------------------------------------------------------
// 单字节读：每次调用 = 命令事务 + 占位事务（响应在下一事务返回），约 4µs。
// 索引 0 会让 CPLD 锁存快照并清零事件计数，因此必须先读索引 0，再读其余字节，
// 之后读到的都是同一份快照（无撕裂）。旧位流（v5 及以前）对 0001xxxx 回 0。
static uint8_t CPLD_StatsByte(uint8_t idx)
{
    SPI_SendData((uint8_t)(CPLD_INST_STATS | (idx & 0x0F)));
    return SPI_SendData(0);
}

uint8_t CPLD_GetStats(cpld_stats_t *out)
{
    uint8_t b[CPLD_STATS_BYTES];

    b[CPLD_STATS_IDX_FLAGS] = CPLD_StatsByte(CPLD_STATS_IDX_FLAGS); // 锁存快照 + 清事件计数
    for (uint8_t i = 1; i < CPLD_STATS_BYTES; i++) {
        b[i] = CPLD_StatsByte((uint8_t)i);
    }

    out->flags       = b[CPLD_STATS_IDX_FLAGS];
    out->mean16      = (uint16_t)(b[CPLD_STATS_IDX_MEAN16] |
                                  ((uint16_t)(b[CPLD_STATS_IDX_MEAN16 + 1] & 0x1F) << 8));
    out->min_level   = (uint16_t)(b[CPLD_STATS_IDX_MIN] |
                                  ((uint16_t)(b[CPLD_STATS_IDX_MIN + 1] & 0x01) << 8));
    out->max_level   = (uint16_t)(b[CPLD_STATS_IDX_MAX] |
                                  ((uint16_t)(b[CPLD_STATS_IDX_MAX + 1] & 0x01) << 8));
    out->ovr_cnt     = (uint16_t)(b[CPLD_STATS_IDX_OVR] |
                                  ((uint16_t)b[CPLD_STATS_IDX_OVR + 1] << 8));
    out->und_cnt     = (uint16_t)(b[CPLD_STATS_IDX_UND] |
                                  ((uint16_t)b[CPLD_STATS_IDX_UND + 1] << 8));
    out->window_log2 = b[CPLD_STATS_IDX_WIN];

    return CPLD_GET_READY(b[CPLD_STATS_IDX_FLAGS]);
}

// 读取静音状态实时电平（v5，替代已删除的 zc_gpio 引脚）：
// 响应 bit7=ready bit6=静音（FIFO 空或持续静音，CPLD silence_detector 判定）
uint8_t CPLD_GetSilence(uint8_t *silent)
{
    SPI_SendData(CPLD_INST_GET_SILENCE);
    uint8_t data = SPI_SendData(0);
    *silent = (data & 0x40) ? 1 : 0;
    return CPLD_GET_READY(data);
}

uint8_t CPLD_RequestFormat(uint32_t freq)
{
    switch (freq)
    {
    case 384000U:
        pending_format = CPLD_FORMAT_2;
        break;
    case 192000U:
        pending_format = CPLD_FORMAT_1;
        break;
    case 96000U:
        pending_format = CPLD_FORMAT_D2;
        break;
    case 48000U:
        pending_format = CPLD_FORMAT_D4;
        break;
    case 176400U:
        pending_format = CPLD_FORMAT_SUB_1;
        break;
    case 88200U:
        pending_format = CPLD_FORMAT_SUB_D2;
        break;
    case 44100U:
        pending_format = CPLD_FORMAT_SUB_D4;
        break;
    default:
        pending_format = 0;
        return 0;
    }
    return 1;
}

uint8_t CPLD_ChangeFormat()
{
    if (pending_format)
    {
        if (CPLD_SetFormat(pending_format))
        {
            format_now = pending_format;
            pending_format = 0;
            return 1;
        }
    }
    return 0;
}

void CPLD_FormatRec(){
    CPLD_SetFormat(format_now);
}

void SPI_Device_Init()
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    SPI_InitTypeDef SPI_InitStructure = {0};

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_SPI1, ENABLE);

    // PA5=SCK、PA7=MOSI：复用推挽（SPI1 默认引脚）
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_7;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // PA6=MISO：下拉输入。CPLD 未上电/未烧写时该脚悬空，
    // 下拉保证读到稳定 0，避免握手读到随机值误判 CPLD 在线
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // PA4=CS：软件控制推挽输出（空闲高）
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
    GPIO_SetBits(GPIOA, GPIO_Pin_4);

    // CPLD spi_slave：Mode0（CPOL=0/CPHA=1Edge）、MSB 先行、SCK 上升沿采样 MOSI
    SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
    SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
    SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
    SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low;
    SPI_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;
    SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
    SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_32; // 144MHz/32 = 4.5MHz
    SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
    SPI_InitStructure.SPI_CRCPolynomial = 7;
    SPI_Init(SPI1, &SPI_InitStructure);
    SPI_NSSInternalSoftwareConfig(SPI1, SPI_NSSInternalSoft_Set);
    SPI_Cmd(SPI1, ENABLE);
}
