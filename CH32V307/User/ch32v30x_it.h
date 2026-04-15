/********************************** (C) COPYRIGHT *******************************
 * File Name          : ch32v30x_it.h
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2021/06/06
 * Description        : This file contains the headers of the interrupt handlers.
 *********************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * Attention: This software (modified or not) and binary are used for
 * microcontroller manufactured by Nanjing Qinheng Microelectronics.
 *******************************************************************************/
#ifndef __CH32V30x_IT_H
#define __CH32V30x_IT_H

#include "debug.h"

extern void SYSTICK_Init_Config (u_int64_t ticks);
extern uint32_t SysTick_ms;
#endif /* __CH32V30x_IT_H */
