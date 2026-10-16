#ifndef __CH32V30X_I2S_DEVICE_H__
#define __CH32V30X_I2S_DEVICE_H__

#include "debug.h"
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    AUDIO_BITS_16 = 16,
    AUDIO_BITS_24 = 24,
    AUDIO_BITS_32 = 32,
} audio_bits_t;

extern volatile audio_bits_t audio_bits;

void I2S_Device_Init();

void Audio_FillBuffer(uint8_t *src, uint32_t num);

void Audio_SetBits(audio_bits_t bits);
void Audio_ResetFeedback(uint32_t freq);
volatile uint32_t Audio_GetFeedback();

// 反馈控制任务：主循环每圈调用，内部按 system_tick(10ms) 节流。
// 通过 SPI 读取 CPLD FIFO 水位做带死区的比例控制（详见 .c 注释）。
void Audio_FeedbackTask(void);
// USB EP1 OUT ISR 调用：码流活跃时间戳（反馈环的活跃度门控依据）
void Audio_NotifyStreamActive(void);

// 反馈环诊断量
extern volatile uint16_t g_cpld_fifo_level; // 最近一次统计窗口的平均水位（帧）
extern volatile uint16_t g_cpld_ripple;     // 窗口内水位极值差（帧）＝抖动实际幅度
extern volatile uint32_t g_ovr_events;      // FIFO 真实丢样次数累计（v6 统计块，读清累加）
extern volatile uint32_t g_und_events;      // FIFO 真实重样次数累计（v6 统计块，读清累加）

// 已学到的板载晶振相对偏置（ppm）：环收敛时更新，换采样率时由 Audio_ResetFeedback 预载
int32_t Audio_GetTrimPpm(void);

void Audio_SetUnmute(BitAction unmute);

// DAC 静音状态跟踪（1=已静音）："输出无声"判定的组成条件之一
extern volatile uint8_t g_dac_muted;

// Deferred 请求：USB ISR / EXTI 中断只写标志，由主循环 AudioMgr_ProcessDeferred() 统一处理。
// 目的：把 I2C/SPI/Flash 等慢操作全部移出中断上下文，避免中断抢占主循环 I2C 造成死锁。
extern volatile uint32_t g_pending_rate_hz;    // 待切换采样率（0=无请求）
extern volatile uint8_t  g_pending_bits;       // 待配置位深（16/24/32）
extern volatile uint8_t  g_pending_bits_valid; // 1=有待配置位深
extern volatile uint8_t  g_pending_mute;       // 0=无 1=静音 2=取消静音
extern volatile uint8_t  g_settings_save_pending; // 1=待保存设置到 Flash
void AudioMgr_ProcessDeferred(void);

// Silence detection via CPLD SPI (GET_SILENCE)
extern volatile uint8_t g_volume_modified_flag; // 1=volume changed pending save
extern volatile uint8_t g_volume_pending;       // last modified volume value
extern volatile uint8_t g_menu_settings_modified_flag; // 1=menu settings changed pending save

// Silence control helpers
BitAction Audio_IsSilent(void);

#endif
