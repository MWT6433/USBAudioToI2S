#ifndef __OLED_H
#define __OLED_H

#include "Dec_IIC.h"
#include "u8g2.h"
#include "u8x8.h"

uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);

void OLED_Init (void);
void OLED_DrawSplash (u8g2_t *u8g2);
void OLED_ShowRate (u8g2_t *u8g2);
void OLED_ShowJackMode (u8g2_t *u8g2);
void OLED_BrightnessInit(u8g2_t *u8g2);
void OLED_MarkUpdated(void);
void OLED_BrightnessTask(u8g2_t *u8g2);

void OLED_SetVolumeText(const char* text);

void OLED_DrawMain(u8g2_t *u8g2);
void Menu_Init(u8g2_t *u8g2);
void Menu_UpdateAndDraw(u8g2_t *u8g2, uint8_t key_event, uint8_t key_pressed, int encoder_count);
uint8_t Menu_IsActive(void);

#endif
