#ifndef __CH32V30X_SPI_DEVICE_H__
#define __CH32V30X_SPI_DEVICE_H__

#include "debug.h"

void SPI_Device_Init();

#define CPLD_GET_READY(x) ((x >> 7) & 1)
#define CPLD_GET_VERSION(x) ((x) & 0x7F)

// CPLD 固件协议版本（GET_STATUS 响应低 7 位）：
// v3 = GET_LEVEL 字节布局 {near_full, level[8:2]}（1+7 位，v2 曾是错位的 9 位拼接）
// v4 = 新增 SET_MCLK_DIV2 命令，GET_FORMAT 响应 bit3 回读 div2 状态
// v5 = 新增 GET_SILENCE 命令（静音上报，替代已删除的 zc_gpio 引脚）
// v6 = 新增统计块命令（0001xxxx）：窗口平均水位×16 / 窗口极值 / 真实丢样重样计数
#define CPLD_PROTOCOL_VERSION_MIN  0x03  // 反馈环 GET_LEVEL 所需最低版本
#define CPLD_PROTOCOL_VERSION_DIV2 0x04  // MCLK 二分频开关所需最低版本
#define CPLD_PROTOCOL_VERSION_SILENCE 0x05  // 静音状态上报所需最低版本
#define CPLD_PROTOCOL_VERSION_STATS 0x06  // 统计块（CPLD_GetStats）所需最低版本

// Inst
#define CPLD_INST_GET_STATUS 0x20
#define CPLD_INST_SET_FORMAT 0x40
#define CPLD_INST_GET_FORMAT 0x60
#define CPLD_INST_GET_LEVEL  0x80
#define CPLD_INST_GET_EVENTS 0xA0
#define CPLD_INST_SET_MCLK_DIV2 0xC0  // 参数 bit0：1=÷2(标称)，0=晶振直出
#define CPLD_INST_GET_SILENCE 0xE0  // 静音状态实时电平（v5）
// v6 统计块读：param[4]=1 才能与 MCU 的 0x00 读占位字节区分，param[3:0]=字节索引（0..11）
#define CPLD_INST_STATS 0x10
// 统计块字节索引（小端）。index 0 在读出的同时锁存快照并清零事件计数，
// 因此随后逐字节读到的都是同一份快照，无撕裂。
#define CPLD_STATS_IDX_FLAGS  0   // bit7=Ready bit6=窗口有效 bit5:0=协议版本
#define CPLD_STATS_IDX_MEAN16 1   // 2 字节：窗口平均水位 ×16（1/16 帧分辨率）
#define CPLD_STATS_IDX_MIN    3   // 2 字节：窗口内最低水位（帧）
#define CPLD_STATS_IDX_MAX    5   // 2 字节：窗口内最高水位（帧）
#define CPLD_STATS_IDX_OVR    7   // 2 字节：真实丢样次数（读清、饱和）
#define CPLD_STATS_IDX_UND    9   // 2 字节：真实重样次数（读清、饱和）
#define CPLD_STATS_IDX_WIN    11  // 统计窗口长度指数（2^N 个 pll_main_clk）
#define CPLD_STATS_BYTES      12

#define CPLD_STATS_WIN_VALID(x)  ((x) & 0x40)
#define CPLD_MEAN16_TO_FRAMES(x) ((uint16_t)((x) >> 4))

// GET_LEVEL 响应：bit7=near_full bit6:0=水位>>2（解出 0..508，分辨率 4 样本）
// 近空判定由 MCU 用解出的水位直接比较（FIFO 深 512）
#define CPLD_LEVEL_OF(x)    ((uint16_t)((((x) & 0x7F) << 2)))
#define CPLD_NEAR_FULL(x)   ((x) & 0x80)

// GET_EVENTS 响应（读清）：bit7=溢出 sticky bit6=下溢 sticky
#define CPLD_EVT_OVR(x) ((x) & 0x80)
#define CPLD_EVT_UND(x) ((x) & 0x40)

// GET_SILENCE 响应（实时电平，非 sticky）：bit7=ready bit6=静音
#define CPLD_SILENT(x) ((x) & 0x40)

#define CPLD_FORMAT_2 0x01
#define CPLD_FORMAT_1 0x02
#define CPLD_FORMAT_D2 0x03
#define CPLD_FORMAT_D4 0x04
#define CPLD_FORMAT_SUB_1 0x05
#define CPLD_FORMAT_SUB_D2 0x06
#define CPLD_FORMAT_SUB_D4 0x07

uint8_t CPLD_GetStatus(uint8_t *version);
uint8_t CPLD_SetFormat(uint8_t format);
uint8_t CPLD_GetFormat(uint8_t *format);
uint8_t CPLD_GetLevel(void);
uint8_t CPLD_GetEvents(void);
uint8_t CPLD_GetSilence(uint8_t *silent); // 0=成功；*silent：1=输出静音
void CPLD_FormatRec();

// v6 统计块快照（CPLD 固件 v6+）。相比单字节 GET_LEVEL：
//   - mean16 是 8.53ms 窗口的平均水位，1/16 帧分辨率（GET_LEVEL 是 4 帧量化的瞬时采样）；
//   - min/max 给出窗口内水位极值，即抖动实际幅度；
//   - ovr/und 是真实丢样/重样次数（GET_EVENTS 只有 sticky 位，拿不到次数）。
typedef struct {
    uint8_t  flags;       // bit7=Ready bit6=窗口有效 bit5:0=协议版本
    uint16_t mean16;      // 窗口平均水位 ×16（0..8176）
    uint16_t min_level;   // 窗口内最低水位（帧）
    uint16_t max_level;   // 窗口内最高水位（帧）
    uint16_t ovr_cnt;     // 自上次读取以来真实丢样次数
    uint16_t und_cnt;     // 自上次读取以来真实重样次数
    uint8_t  window_log2; // 统计窗口长度指数（2^N 个 pll_main_clk）
} cpld_stats_t;

// 一次读出统计块（12 字节 = 24 个 SPI 事务，约 50µs）。
// 返回 1=读到 v6 位流的有效响应；旧位流对 0001xxxx 回 0 → 返回 0，调用方应回退到 CPLD_GetLevel()。
uint8_t CPLD_GetStats(cpld_stats_t *out);

// MCLK 二分频运行时开关（CPLD v4+）：0=晶振直出(49.152/45.1584，默认)，
// 1=÷2(24.576/22.5792 标称)。g_cpld_mck_div2 为当前状态（菜单显示/持久化回读用），
// g_cpld_version 由 CPLD_GetStatus 成功时自动记录（开机握手即捕获）。
extern volatile uint8_t g_cpld_mck_div2;
extern volatile uint8_t g_cpld_version;
void CPLD_SetMclkDiv2(uint8_t on);      // 裸切换（仅 SPI，~5µs）
void CPLD_SetMclkDiv2Muted(uint8_t on); // 静音包裹版（菜单/开机应用用，防切换毛刺可闻）

uint8_t CPLD_ChangeFormat();
uint8_t CPLD_RequestFormat(uint32_t freq);

#endif
