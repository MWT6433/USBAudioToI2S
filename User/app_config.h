// Project-wide build-time feature toggles
#pragma once

// Enable following host's USB mixer for Volume/Mute (UAC2 Feature Unit)
// Set to 0 to disable build-time; device will ignore host volume/mute requests
#ifndef ENABLE_USB_VOLUME_FOLLOW
#define ENABLE_USB_VOLUME_FOLLOW 0
#endif

// Board clock source: set to 1 if the board populates Si5351 PLL
// Set to 0 on boards where DACs receive clock directly from CPLD
#ifndef BOARD_HAS_SI5351
#define BOARD_HAS_SI5351 0
#endif

// 音量调节日志开关：1=打开串口日志，0=关闭串口日志
#ifndef VOLUME_ADJUST_LOG_ENABLE
#define VOLUME_ADJUST_LOG_ENABLE 0
#endif

// 反馈环周期诊断日志：1=每 10s 经串口打印一条（9600bps 约 70ms 主循环阻塞）
// 内容：当前采样率 / 已学到的晶振偏置(ppm) / FIFO 窗口平均水位 / 窗口纹波 / 真实丢样·重样次数
#ifndef FEEDBACK_LOG_ENABLE
#define FEEDBACK_LOG_ENABLE 1
#endif
