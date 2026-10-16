#include "encoder.h"

// 按键状态定义
#define KEY_IDLE        0
#define KEY_DOWN        1
#define KEY_DEBOUNCE    2
#define KEY_PRESSED     3
#define KEY_RELEASED    4
#define KEY_LONG_PRESS  5
#define KEY_DOUBLE_WAIT 6

// 事件宏（EVENT_NONE/CLICK/DOUBLE/LONG）已移至 encoder.h

// 时间阈值定义 (单位:ms)
#define DEBOUNCE_TIME   3
#define LONG_PRESS_TIME 150
#define DOUBLE_CLICK_INTERVAL 20

// 按键数据结构
typedef struct {
    uint8_t state;          // 当前状态
    uint8_t last_state;     // 上一次状态
    uint32_t press_time;    // 按下时间
    uint32_t release_time;  // 释放时间
    uint8_t event;          // 检测到的事件
    uint8_t click_count;    // 点击计数
} Key_Data;

volatile Key_Data button = {0}; // 按键状态数据
volatile uint32_t system_tick = 0; // 系统滴答计数

// TIM7初始化 (10ms中断)
void TIM7_Init(void)
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure = {0};
    NVIC_InitTypeDef NVIC_InitStructure = {0};
    
    // 1. 使能TIM7时钟
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
    
    // 2. 配置TIM7 (144MHz系统时钟)
    // 预分频值 = 1440-1 → 144MHz/1440 = 100kHz
    // 自动重装载值 = 1000-1 → 100kHz/1000 = 100Hz (10ms)
    TIM_TimeBaseInitStructure.TIM_Period = 1000 - 1;        // 自动重装载值
    TIM_TimeBaseInitStructure.TIM_Prescaler = 1440 - 1;     // 预分频值
    TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM7, &TIM_TimeBaseInitStructure);
    
    // 3. 使能更新中断
    TIM_ITConfig(TIM7, TIM_IT_Update, ENABLE);
    
    // 4. 配置NVIC
    NVIC_InitStructure.NVIC_IRQChannel = TIM7_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3; // 抢占优先级
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    
    // 5. 启动定时器
    TIM_Cmd(TIM7, ENABLE);
}

// 按键初始化
void KEY_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    
    // 使能GPIOC时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_AFIO, ENABLE);
    
    // 配置PC13为输入上拉模式
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; // 输入上拉
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
}

// 读取按键状态 (0:按下, 1:释放)
static uint8_t KEY_Read(void)
{
    return GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_13);
}

// TIM7中断服务程序
__attribute__((interrupt("WCH-Interrupt-fast")))
void TIM7_IRQHandler(void)
{
    if (TIM_GetITStatus(TIM7, TIM_IT_Update) != RESET)
    {
        TIM_ClearITPendingBit(TIM7, TIM_IT_Update);
        
        // 系统滴答计数 (每10ms增加1)
        system_tick++;
        
        // 按键状态机
        uint8_t key_state = KEY_Read();
        
        switch(button.state)
        {
            case KEY_IDLE:
                if(key_state == 0) { // 检测到按下
                    button.state = KEY_DEBOUNCE;
                    button.press_time = system_tick;
                }
                break;
                
            case KEY_DEBOUNCE:
                if(system_tick - button.press_time >= DEBOUNCE_TIME) {
                    if(key_state == 0) { // 确认按下
                        button.state = KEY_DOWN;
                    } else { // 误触发，重新开始
                        button.state = KEY_IDLE;
                    }
                }
                break;
                
            case KEY_DOWN:
                if(key_state == 1) { // 按键释放
                    button.state = KEY_RELEASED;
                    button.release_time = system_tick;
                } 
                else if(system_tick - button.press_time >= LONG_PRESS_TIME) {
                    button.state = KEY_LONG_PRESS;
                    button.event = EVENT_LONG;
                }
                break;
                
            case KEY_RELEASED:
                if(system_tick - button.release_time >= DEBOUNCE_TIME) {
                    if(key_state == 1) { // 确认释放
                        if(button.click_count == 2) {
                            // 第二次释放 → 双击事件
                            button.state = KEY_IDLE;
                            button.event = EVENT_DOUBLE;
                            button.click_count = 0;
                        } else {
                            // 第一次释放 → 进入双击等待窗口
                            button.state = KEY_DOUBLE_WAIT;
                            button.click_count = 1;
                            // release_time 已在进入 KEY_RELEASED 时记录
                        }
                    } else { // 释放未稳 → 回到按下
                        button.state = KEY_DOWN;
                    }
                }
                break;
                
            case KEY_DOUBLE_WAIT:
                // 在双击间隔内等待第二次按下
                if(key_state == 0) {
                    // 第二次按下，走去抖流程
                    button.state = KEY_DEBOUNCE;
                    button.press_time = system_tick;
                    button.click_count = 2;
                } else if(system_tick - button.release_time >= DOUBLE_CLICK_INTERVAL) {
                    // 超时未发生第二次按下 → 单击事件
                    button.state = KEY_IDLE;
                    button.event = EVENT_CLICK;
                    button.click_count = 0;
                }
                break;
                
            case KEY_LONG_PRESS:
                if(key_state == 1) { // 长按键释放
                    button.state = KEY_IDLE;
                }
                break;
        }
    }
}

void Encoder_Init(void) {
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure = {0};
    TIM_ICInitTypeDef TIM_ICInitStructure = {0};

    // 1. 使能时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

    // 2. 配置PB4/PB5为输入引脚（编码器A/B相）
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(GPIOB, &GPIO_InitStructure);

    // 3. 配置TIM3编码器引脚映射（PB4=CH1, PB5=CH2）
    GPIO_PinRemapConfig(GPIO_PartialRemap_TIM3, ENABLE);

    // 4. 初始化TIM3时基单元
    TIM_TimeBaseStructure.TIM_Period = 0xFFFF;          // 16位最大计数值
    TIM_TimeBaseStructure.TIM_Prescaler = 0;            // 不预分频，144MHz计数（PCLK1=SYSCLK）
    TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);

    // 5. 设置编码器模式：双边沿采样，方向自动识别
     TIM_EncoderInterfaceConfig(TIM3, TIM_EncoderMode_TI1, TIM_ICPolarity_Falling, TIM_ICPolarity_Rising);
    // 6. 配置输入通道滤波器（降噪）
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStructure.TIM_ICFilter = 0x08;             // 设置滤波值：16个时钟周期
    TIM_ICInit(TIM3, &TIM_ICInitStructure);

    TIM_ICInitStructure.TIM_Channel = TIM_Channel_2;
    TIM_ICInit(TIM3, &TIM_ICInitStructure);

    // 7. 启动定时器
    TIM_Cmd(TIM3, ENABLE);

    // 初始化按键扫描定时器和按键
    KEY_Init();
    TIM7_Init();
   
}

int GetEncoder(){
    // 直接返回当前编码器计数值（倍频模式）
    return (int16_t)TIM_GetCounter(TIM3)/2;
}

// 获取按键事件 (使用后自动清除)
uint8_t KEY_GetEvent(void)
{
    uint8_t event = button.event;
    if(event != EVENT_NONE) {
        button.event = EVENT_NONE; // 清除事件标志
    }
    return event;
}

// 查询“已确认按下”的稳定状态：去抖后保持按下
uint8_t KEY_IsPressed(void)
{
    return (button.state == KEY_DOWN || button.state == KEY_LONG_PRESS) ? 1 : 0;
}

//编码器部分通过TIM3的编码器模式实现，用于检测编码器的旋转方向和速度。通过GetEncoder函数获取当前编码器计数值，即可判断编码器的相对旋转方向和步进。编码器按键通过KEY_GetEvent函数获取按键事件，用于判断是否按下了编码器按键。可通过KEY_GetEvent函数获取按键事件，判断是否按下了编码器按键。