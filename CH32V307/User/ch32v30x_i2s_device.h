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

void Audio_Sync(uint8_t frame);

void Audio_FillBuffer(uint8_t *src, uint32_t num);

void Audio_SetBits(audio_bits_t bits);
void Audio_ResetFeedback(uint32_t freq);
volatile uint32_t Audio_GetFeedback();
void Audio_UpdateFeedbackControl(void);
void GetFIFOStatus(uint8_t clean);
void GetUpTime();

void Audio_SetUnmute(BitAction unmute);

// Silence detection over PA8 (zc_gpio)
extern volatile uint8_t g_volume_modified_flag; // 1=volume changed pending save
extern volatile uint8_t g_volume_pending;       // last modified volume value
void Audio_SilenceGPIO_Init(void);

// Silence control helpers
BitAction Audio_IsSilent(void);
void Audio_SetFifoPaused(BitAction pause);

#endif
