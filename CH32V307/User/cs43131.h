#pragma once
#ifndef __CS43131_H__
#define __CS43131_H__

#include <stdint.h>
#include <stdbool.h>

//=============================================================================
// CS43131 供电模式配置（编译时选择）
// 推荐直接修改 CS43131_POWER_SUPPLY_MODE：
//   CS43131_POWER_MODE_INTERNAL_VCP      -> 使用内部电荷泵供电
//   CS43131_POWER_MODE_EXTERNAL_VCPFILT  -> 使用外部 VCPFILT 供电
//=============================================================================
#define CS43131_POWER_MODE_INTERNAL_VCP      1
#define CS43131_POWER_MODE_EXTERNAL_VCPFILT  0

#ifndef CS43131_POWER_SUPPLY_MODE
#define CS43131_POWER_SUPPLY_MODE CS43131_POWER_MODE_INTERNAL_VCP
#endif

// 兼容旧代码：保留 CS43131_USE_EXTERNAL_VCPFILT 作为派生宏，供 #if 判断使用
#if (CS43131_POWER_SUPPLY_MODE == CS43131_POWER_MODE_EXTERNAL_VCPFILT)
#define CS43131_USE_EXTERNAL_VCPFILT    1
#else
#define CS43131_USE_EXTERNAL_VCPFILT    0
#endif

extern uint32_t g_current_rate_hz;
extern uint8_t g_current_bits;
// 左右 DAC 的 FSD 全局配置值：0x30 右 DAC，0x31 左 DAC，建议取值 0..7
extern uint8_t g_cs43131_fsd_dac_30;
extern uint8_t g_cs43131_fsd_dac_31;

#ifdef __cplusplus
extern "C" {
#endif

// CS43131 24-bit register map (partial) and bit fields
// Global/System
#define CS43131_REG_SYSCLK_CTRL1      0x10006u
#define CS43131_REG_PAD_IF_CFG        0x1000Du
#define CS43131_REG_DIGPOP_CTRL1      0x10010u
// 新增：串口采样率控制（Serial Port Sample Rate）
#define CS43131_REG_SERIAL_PORT_SAMPLE_RATE 0x1000Bu
// 新增：采样率枚举码（ASP_SPRATE，位3:0）
#define CS43131_ASP_SPRATE_32000      0x00u
#define CS43131_ASP_SPRATE_44100      0x01u
#define CS43131_ASP_SPRATE_48000      0x02u
#define CS43131_ASP_SPRATE_88200      0x03u
#define CS43131_ASP_SPRATE_96000      0x04u
#define CS43131_ASP_SPRATE_176400     0x05u
#define CS43131_ASP_SPRATE_192000     0x06u
#define CS43131_ASP_SPRATE_352800     0x07u
#define CS43131_ASP_SPRATE_384000     0x08u

// 新增：全局串口采样位宽控制（ASP/XSP SPSIZE）
#define CS43131_REG_SAMPLE_BIT_SIZE   0x1000Cu
#define CS43131_SPSIZE_ASP_MASK       0x03u
#define CS43131_SPSIZE_ASP_32         0x00u
#define CS43131_SPSIZE_ASP_24         0x01u
#define CS43131_SPSIZE_ASP_16         0x02u
#define CS43131_SPSIZE_ASP_8          0x03u
#define CS43131_SPSIZE_XSP_MASK       0x0Cu
#define CS43131_SPSIZE_XSP_32         0x00u
#define CS43131_SPSIZE_XSP_24         0x04u
#define CS43131_REG_ASP_SCLK_PERIOD1  0x40018u
#define CS43131_REG_ASP_SCLK_PERIOD2  0x40019u
#define CS43131_REG_ASP_DATA_FMT      0x4001Du
// Add explicit names per updated register doc
#define CS43131_REG_ASP_CLK_CFG       0x40018u
#define CS43131_REG_ASP_FRAME_CFG     0x40019u

// ASP_CLK_CFG (0x40018) bit fields
#define CS43131_ASP_M_SB              0x10u  // Master/Slave select bit
#define CS43131_ASP_SCPOL_OUT         0x08u  // SCLK polarity (output)
#define CS43131_ASP_SCPOL_IN          0x04u  // SCLK polarity (input sample edge)
#define CS43131_ASP_LCPOL_OUT         0x02u  // LRCK polarity (output)
#define CS43131_ASP_LCPOL_IN          0x01u  // LRCK polarity (input)

// ASP_FRAME_CFG (0x40019) bit fields
#define CS43131_ASP_STP               0x10u  // Frame start phase (1-bit delay when set)
#define CS43131_ASP_5050              0x08u  // LRCK 50/50 duty control
#define CS43131_ASP_FSD_MASK          0x07u  // Frame start delay field
#define CS43131_ASP_FSD_0             0x00u
#define CS43131_ASP_FSD_1             0x01u
#define CS43131_ASP_FSD_2             0x02u
#define CS43131_ASP_FSD_3             0x03u
#define CS43131_ASP_FSD_4             0x04u
#define CS43131_ASP_FSD_5             0x05u
#define CS43131_ASP_FSD_6             0x06u
#define CS43131_ASP_FSD_7             0x07u

// Power-down control and interrupts
#define CS43131_REG_PDN_CTRL          0x20000u
#define CS43131_REG_INT_STATUS1       0xF0000u
#define CS43131_REG_INT_STATUS2       0xF0001u
#define CS43131_REG_INT_STATUS3       0xF0002u
#define CS43131_REG_INT_MASK1         0xF0010u
// PDN control (0x20000) bits
#define CS43131_PDN_XSP               0x80u
#define CS43131_PDN_ASP               0x40u
#define CS43131_PDN_DSDIF             0x20u
#define CS43131_PDN_HP                0x10u
#define CS43131_PDN_XTAL              0x08u
#define CS43131_PDN_PLL               0x04u
#define CS43131_PDN_CLKOUT            0x02u
// Interrupt Status 1 (0xF0000) bits
#define CS43131_INT_DAC_OVFL          0x80u
#define CS43131_INT_HPDETECT_PLUG     0x40u
#define CS43131_INT_HPDETECT_UNPLUG   0x20u
#define CS43131_INT_XTAL_READY        0x10u
#define CS43131_INT_XTAL_ERROR        0x08u
#define CS43131_INT_PLL_READY         0x04u
#define CS43131_INT_PLL_ERROR         0x02u
#define CS43131_INT_PDN_DONE          0x01u

// Headphone/Output control
#define CS43131_REG_HP_POP_CTRL       0x80046u
// Headphone control registers
#define CS43131_REG_HP_CTRL1          0x80000u
#define CS43131_REG_HP_CTRL2          0x80001u
// HP_CTRL1 (0x80000) bits
#define CS43131_HP_CLAMPA             0x80u
#define CS43131_HP_CLAMPB             0x40u
#define CS43131_HP_OUT_FS_MASK        0x30u
#define CS43131_HP_OUT_FS_2V          0x00u
#define CS43131_HP_OUT_FS_2P8V        0x10u
#define CS43131_HP_OUT_FS_4V          0x20u
#define CS43131_HP_OUT_FS_5P7V        0x30u
#define CS43131_HP_IN_EN              0x08u
#define CS43131_HP_IN_LP              0x04u
#define CS43131_HP_PLUS1DB_EN         0x01u
// HP_CTRL2 (0x80001) bits
#define CS43131_HP_MODE_SEL           0x01u
// Class H Control (0xB0000)
#define CS43131_REG_CLASSH_CTRL       0xB0000u
#define CS43131_CLASSH_ADPT_PWR_MASK  0x1Cu
#define CS43131_CLASSH_ADPT_PWR_SHIFT 2
#define CS43131_CLASSH_HV_EN          0x02u
#define CS43131_CLASSH_EXT_VCPFILT    0x01u

// 新增：HP Detect 寄存器与位定义
#define CS43131_REG_HP_DETECT         0xD0000u
#define CS43131_REG_HP_STATUS         0xD0001u
#define CS43131_HPDETECT_CTRL_MASK    0xC0u
#define CS43131_HPDETECT_CTRL_DISABLE 0x00u
#define CS43131_HPDETECT_INV          0x20u
#define CS43131_HPDETECT_RISE_DBC_MASK 0x18u
#define CS43131_HPDETECT_FALL_DBC_MASK 0x06u
#define CS43131_HPDETECT_FALL_DBC_500MS 0x04u

// 新增：INT MASK1 中与 HP Detect 相关的掩码位（用于屏蔽中断）
#define CS43131_INT_MASK_HPDETECT_PLUG    0x40u
#define CS43131_INT_MASK_HPDETECT_UNPLUG  0x20u
// ASP RX routing registers
#define CS43131_REG_ASP_RX_CH1_LOC     0x50000u
#define CS43131_REG_ASP_RX_CH2_LOC     0x50001u
#define CS43131_REG_ASP_RX_CH1_SIZE_EN 0x5000Au
#define CS43131_REG_ASP_RX_CH2_SIZE_EN 0x5000Bu
// ASP RX size/enable bits (0x5000A/0x5000B)
#define CS43131_ASP_RX_CH_AP           0x08u
#define CS43131_ASP_RX_CH_EN           0x04u
#define CS43131_ASP_RX_CH_RES_MASK     0x03u
// 文档编码：00=8bit，01=16bit，10=24bit，11=32bit
#define CS43131_ASP_RX_CH_RES_8        0x00u
#define CS43131_ASP_RX_CH_RES_16       0x01u
#define CS43131_ASP_RX_CH_RES_24       0x02u
#define CS43131_ASP_RX_CH_RES_32       0x03u

// XSP RX routing registers
#define CS43131_REG_XSP_RX_CH1_LOC      0x60000u
#define CS43131_REG_XSP_RX_CH2_LOC      0x60001u
#define CS43131_REG_XSP_RX_CH1_SIZE_EN  0x6000Au
#define CS43131_REG_XSP_RX_CH2_SIZE_EN  0x6000Bu
// XSP RX size/enable bits (0x6000A/0x6000B)
#define CS43131_XSP_RX_CH_AP            0x08u
#define CS43131_XSP_RX_CH_EN            0x04u
#define CS43131_XSP_RX_CH_RES_MASK      0x03u
// 文档编码：00=8bit，01=16bit，10=24bit，11=32bit
#define CS43131_XSP_RX_CH_RES_8         0x00u
#define CS43131_XSP_RX_CH_RES_16        0x01u
#define CS43131_XSP_RX_CH_RES_24        0x02u
#define CS43131_XSP_RX_CH_RES_32        0x03u

// PCM control (Path Signal Control 1)
#define CS43131_REG_PCM_MUTE          0x90003u
// CS43131_REG_PCM_MUTE (0x90003) bit fields
#define CS43131_PCM_RAMP_DOWN         0x80u
#define CS43131_PCM_VOL_BEQA          0x40u
#define CS43131_PCM_SZC_MASK          0x30u
#define CS43131_PCM_SZC_OFF           0x00u
#define CS43131_PCM_SZC_VOL           0x10u
#define CS43131_PCM_SZC_MUTE          0x20u
#define CS43131_PCM_SZC_BOTH          0x30u
#define CS43131_PCM_AMUTE             0x08u
#define CS43131_PCM_AMUTEBEQA         0x04u
#define CS43131_PCM_MUTE_A            0x02u
#define CS43131_PCM_MUTE_B            0x01u
#define CS43131_PCM_UNMUTE_MASK       0xFCu
// PCM Path Signal Control 2 (0x90004)
#define CS43131_REG_PCM_SIGCTL2       0x90004u
#define CS43131_PCM_INV_A             0x08u
#define CS43131_PCM_INV_B             0x04u
#define CS43131_PCM_SWAP_CHAN         0x02u
#define CS43131_PCM_COPY_CHAN         0x01u
// 新增：PCM Filter Option（0x90000）与音量寄存器
#define CS43131_REG_PCM_FILTER_OPT    0x90000u
#define CS43131_REG_PCM_VOLUME_B      0x90001u
#define CS43131_REG_PCM_VOLUME_A      0x90002u
// PCM Filter Option bit fields
#define CS43131_FILTER_SLOW_FASTB     0x80u
#define CS43131_PHCOMP_LOWLATB        0x40u
#define CS43131_NOS                   0x20u
#define CS43131_PCM_WBF_EN            0x04u
#define CS43131_HIGH_PASS             0x02u
#define CS43131_DEEMP_ON              0x01u
// Bit fields for key registers
// SYSCLK control (0x10006)
#define CS43131_SYSCLK_SRC_DIRECT         0x00u
#define CS43131_SYSCLK_SRC_RCO            0x02u
#define CS43131_SYSCLK_INTSEL_24M576      0x00u
#define CS43131_SYSCLK_INTSEL_22M5792     0x04u

// PAD interface config (0x1000D)
#define CS43131_PAD_ASP_3ST            0x01u
#define CS43131_PAD_XSP_3ST            0x02u

// Interrupts
#define CS43131_INT_PDN_DONE           0x01u
#define CS43131_INT_MASK_PDN_DONE      0x01u

void CS43131_GPIO_Init(void);

typedef enum {
    CS43131_JACK_MODE_NONE = 0,
    CS43131_JACK_MODE_35MM = 1,
    CS43131_JACK_MODE_44MM = 2,
} cs43131_jack_mode_t;

bool Headphone_IsInserted(void);
cs43131_jack_mode_t Headphone_GetJackMode(void);

void cs43131_init(uint8_t devAddr7);

//=============================================================================
// 供电模式相关接口
//=============================================================================
// 外部 VCPFILT 供电时序接口
int cs43131_ext_vcpfilt_power_up(uint8_t devAddr7);
int cs43131_ext_vcpfilt_power_down(uint8_t devAddr7);

// 内部电荷泵供电时序接口
int cs43131_int_vcp_power_up(uint8_t devAddr7);
int cs43131_int_vcp_power_down(uint8_t devAddr7);

// 统一上电/下电接口（根据 CS43131_USE_EXTERNAL_VCPFILT 宏自动选择）
int cs43131_hp_power_up(uint8_t devAddr7);
int cs43131_hp_power_down(uint8_t devAddr7);

// HP 配置（无耳机检测，根据编译宏自动选择供电模式）
int cs43131_configure_hp_no_detect(uint8_t devAddr7);

// 打包步骤37+38：启用单声道并上电HP（根据编译宏自动选择供电模式）
int cs43131_enable_mono_and_powerup_hp(uint8_t devAddr7);

// 兼容旧接口：外部VCPFILT供电
int cs43131_enable_mono_and_powerup_hp_external(uint8_t devAddr7);
int cs43131_configure_hp_external_no_detect(uint8_t devAddr7);

int cs43131_mute_both_channels(uint8_t devAddr7);
int cs43131_unmute_both_channels(uint8_t devAddr7);

int cs43131_get_pcm_filter_opt(uint8_t devAddr7, uint8_t *out_val);
int cs43131_toggle_filter_bit(uint8_t devAddr7, uint8_t bit);
int cs43131_toggle_filter_bit_both(uint8_t bit);
int cs43131_pcm_pop_free_power_down_external(uint8_t devAddr7);
// Diagnostic status dump
void cs43131_dump_status(uint8_t devAddr7);
// 新增：读取并输出mono模式相关寄存器状态
void cs43131_dump_mono_registers(uint8_t devAddr7);

// --- INT(PB3) 中断支持与轮询接口 ---
// 配置 PB3 为 EXTI3 上升沿中断，并打开 NVIC
void cs43131_int_pb3_exti_init(void);
// 取消屏蔽 PDN_DONE 中断源（保留其他掩码位不变）
void cs43131_enable_int_pdn_done(uint8_t devAddr7);
// 由 EXTI3_IRQHandler 调用的中断处理：读取并打印 INT_STATUS
void cs43131_handle_int_isr(void);
// 使用INT事件替代轮询等待PDN_DONE：在指定超时内等待ISR置位
int cs43131_wait_pdn_done_via_int(uint32_t timeout_ms);
// 轮询PB3电平的简易函数：检测到上升沿时，读取并打印中断信息
void cs43131_poll_pb3_and_dump(uint8_t devAddr7);
int cs43131_enable_mono_mode_pcm(uint8_t devAddr7);
int cs43131_disable_mono_mode_pcm(uint8_t devAddr7);
int cs43131_apply_jack_mode(cs43131_jack_mode_t mode);

// 外部有源 MCLK 频率切换（在 24.576 与 22.5792 MHz 间）
int cs43131_switch_mclk_external(uint8_t devAddr7, bool is_24m576);

// === 新增：ASP I2S 从机配置 ===
typedef struct {
    uint8_t sample_bits;       // 8/16/24/32
    uint8_t sprate_code;       // 取值见 CS43131_ASP_SPRATE_xxx
    bool    lrck_invert;       // LRCK 输入极性
    bool    sclk_invert;       // SCLK 输入采样沿极性
    uint8_t fsd;               // 帧起始延迟 0..7
    bool    stp_1bit_delay;    // 置位表示 1-bit 延迟（常用于 I2S）
    bool    duty50;            // LRCK 50/50 占空
    uint8_t ch1_loc;           // CH1 起始位（SCLK index）
    uint8_t ch2_loc;           // CH2 起始位（SCLK index）
    bool    ch_ap;             // 两通道 Active Phase 位
    bool    ch1_en;            // 使能 CH1
    bool    ch2_en;            // 使能 CH2
} cs43131_asp_i2s_cfg_t;

// 详细参数版：按 cfg 配置 ASP 为 I2S 从机
// 新增参数 ch1_size_en/ch2_size_en：若为非零，则直接写入 0x5000A/0x5000B 的值（例如 0x07=Left, 0x0F=Right，均为32-bit且使能）；若为0，则按 cfg 中的分辨率与使能/AP位自动计算
int cs43131_configure_asp_i2s_slave_ex(uint8_t devAddr7, const cs43131_asp_i2s_cfg_t *cfg, uint8_t ch1_size_en, uint8_t ch2_size_en);
// 简版：使用典型 I2S 从机（STP=1, FSD=2, 50/50，占空），用于自动调谐的初始设置
void cs43131_configure_asp_i2s_slave(uint8_t devAddr7);
// 简版：典型 Left-Justified 从机（STP=0，其余同上）
void cs43131_configure_asp_lj_slave(uint8_t devAddr7);
// 辅助：修改极性 & 帧参数（供自动调谐调用）
void cs43131_set_asp_polarities(uint8_t devAddr7, bool lrck_invert, bool sclk_invert);
void cs43131_set_frame_params(uint8_t devAddr7, bool stp_1bit_delay, uint8_t fsd, bool duty50);
// 运行时调整 ASP 采样率与采样位深（保持通道使能/AP不变）
// rate_hz 支持：32000/44100/48000/88200/96000/176400/192000/352800/384000
// bits 支持：8/16/24/32
int cs43131_adjust_asp_runtime(uint8_t devAddr7, uint32_t rate_hz, uint8_t bits);

// === 新增：PCM 配置与音量控制 ===
// 配置 PCM 滤波与路径信号控制，强制不启用宽带平坦模式（WBF）
// 参数 szc_mode 取值应为 CS43131_PCM_SZC_OFF/CS43131_PCM_SZC_VOL/CS43131_PCM_SZC_MUTE/CS43131_PCM_SZC_BOTH
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
    bool copy_chan);
// 新增：显式取消通道静音（清除 PCM_MUTE_A/B）
int cs43131_unmute_both_channels(uint8_t devAddr7);
// 新增：显式静音两个通道（置位 PCM_MUTE_A/B）
int cs43131_mute_both_channels(uint8_t devAddr7);

// 新增：外部 VCPFILT 供电且无耳机检测的 HP 综合配置函数
int cs43131_configure_hp_external_no_detect(uint8_t devAddr7);

int cs43131_set_pcm_volume(uint8_t devAddr7, uint8_t vol_a, uint8_t vol_b, bool link_b_eq_a);
int cs43131_enable_asp_interrupts(uint8_t devAddr7);
int cs43131_enable_asp_clocks(uint8_t devAddr7);
int cs43131_startup_dual_dac(void);

typedef enum {
    CS43131_HP_AMP_MODE_CLASS_H = 0,
    CS43131_HP_AMP_MODE_CLASS_AB = 1
} cs43131_hp_amp_mode_t;

typedef enum {
    CS43131_HP_FS_0P5VRMS = 0,
    CS43131_HP_FS_1P0VRMS = 1,
    CS43131_HP_FS_1P4VRMS = 2,
    CS43131_HP_FS_1P732VRMS = 3,
    CS43131_HP_FS_2P0VRMS = 4
} cs43131_hp_full_scale_t;

int cs43131_get_hp_amp_mode(cs43131_hp_amp_mode_t *out_mode);
int cs43131_get_hp_full_scale(cs43131_hp_full_scale_t *out_scale);
int cs43131_cycle_hp_amp_mode_both(void);
int cs43131_cycle_hp_full_scale_both(void);


#endif // __CS43131_H__

#ifdef __cplusplus
}
#endif

// INT_STATUS2: ASP输入状态位
#define CS43131_REG_INT_MASK2         0xF0011u
#define CS43131_ASP_OVFL_INT_MASK     0x80u
#define CS43131_ASP_ERROR_INT_MASK    0x40u
#define CS43131_ASP_LATE_INT_MASK     0x20u
#define CS43131_ASP_EARLY_INT_MASK    0x10u
#define CS43131_ASP_NOLRCK_INT_MASK   0x08u
