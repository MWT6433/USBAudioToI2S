#include "debug.h"

// 按键事件定义（供外部模块使用，如主界面单击触发保存）
#define EVENT_NONE      0
#define EVENT_CLICK     1
#define EVENT_DOUBLE    2
#define EVENT_LONG      3

void Encoder_Init(void);
int GetEncoder(void);
uint8_t KEY_GetEvent(void);
uint8_t KEY_IsPressed(void);

// 系统滴答计数：TIM7 更新中断每 10ms 自增（encoder.c 定义）
extern volatile uint32_t system_tick;