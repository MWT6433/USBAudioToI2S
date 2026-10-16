/********************************** (C) COPYRIGHT *******************************
 * File Name          : ch32v30x_it.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2024/03/06
 * Description        : Main Interrupt Service Routines.
 *********************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * Attention: This software (modified or not) and binary are used for
 * microcontroller manufactured by Nanjing Qinheng Microelectronics.
 *******************************************************************************/
#include "ch32v30x_it.h"
#include "cs43131.h"

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void SysTick_Handler (void) __attribute__ ((interrupt ("WCH-Interrupt-fast")));
void EXTI9_5_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

uint32_t SysTick_ms = 0;
/*********************************************************************
 * @fn      NMI_Handler
 *
 * @brief   This function handles NMI exception.
 *
 * @return  none
 */
void NMI_Handler(void)
{
    while (1)
    {
    }
}

/*********************************************************************
 * @fn      HardFault_Handler
 *
 * @brief   This function handles Hard Fault exception.
 *
 * @return  none
 */
void HardFault_Handler(void)
{
    NVIC_SystemReset();
    while (1)
    {
    }
}

void SYSTICK_Init_Config (u_int64_t ticks) {
    SysTick->SR &= ~(1 << 0);//clear State flag
    SysTick->CMP = ticks;
    SysTick->CNT = 0;
    SysTick->CTLR = 0xF;

    // SysTick 中断（SysTick_ms++）：优先级与 TIM7/EXTI9_5/DMA 对齐（3），
    // 避免未来接线后抢占 USBHS（0）同组中断。
    // 注意：此函数当前无调用方（SysTick 中断未启动），改动为防御性设置。
    NVIC_SetPriority(SysTicK_IRQn, 3);
    NVIC_EnableIRQ(SysTicK_IRQn);
}

void SysTick_Handler (void) {
    if(SysTick->SR == 1)
    {
        SysTick->SR = 0;//clear State flag
        SysTick_ms++;
        //printf("sysTick = %d\r\n",SysTick_ms);
    }
}

// CS43131 INT (PD9 -> EXTI9_5)
void EXTI9_5_IRQHandler(void)
{
    if (EXTI_GetITStatus(EXTI_Line9) != RESET)
    {
        cs43131_handle_int_isr();
        EXTI_ClearITPendingBit(EXTI_Line9);
    }
}