#include "ch32v30x_led_device.h"

void LED_Set(_Bool status)
{
    if(status == 1){
        GPIO_WriteBit(GPIOA, GPIO_Pin_15, Bit_SET);
    }else{
        GPIO_WriteBit(GPIOA, GPIO_Pin_15, Bit_RESET);
    }
}

void LED_Device_Init()
{
    // GPIO_InitTypeDef GPIO_InitStructure = {0};
    // TIM_OCInitTypeDef TIM_OCInitStructure = {0};
    // TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure = {0};

    // RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO, ENABLE);
    // RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);

    // GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15; // LED
    // GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    // GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    // GPIO_Init(GPIOA, &GPIO_InitStructure);

    // GPIO_PinRemapConfig(GPIO_PartialRemap1_TIM2, ENABLE); // CH1 -> Pin15

    // TIM_TimeBaseInitStructure.TIM_Period = 100 - 1;
    // TIM_TimeBaseInitStructure.TIM_Prescaler = 1200 - 1;
    // TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    // TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    // TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStructure);

    // TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;
    // TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;
    // TIM_OCInitStructure.TIM_Pulse = 0;
    // TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;
    // TIM_OC1Init(TIM2, &TIM_OCInitStructure);

    // TIM_CtrlPWMOutputs(TIM2, ENABLE);
    // TIM_OC1PreloadConfig(TIM2, TIM_OCPreload_Disable);
    // TIM_ARRPreloadConfig(TIM2, ENABLE);
    // TIM_Cmd(TIM2, ENABLE);


    GPIO_InitTypeDef GPIO_InitStructure = {0};
    
    // 使能GPIOA时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    
    // 配置PA15为推挽输出
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;  // 推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
    
    // 初始状态：LED熄灭
    GPIO_WriteBit(GPIOA, GPIO_Pin_15, Bit_RESET);

}

void GPIO_off(){
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_11; 
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_14 | GPIO_Pin_3; 
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOB, &GPIO_InitStructure);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_14 | GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9; 
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_8 | GPIO_Pin_9; 
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}
