#include "ch32v30x_i2s_device.h"
#include "ch32v30x_tim.h"
#include "string.h"
#include "cs43131.h"
#include "ch32v30x_gpio.h"
#include "ch32v30x_exti.h"
#include "volume_storage.h"

volatile uint32_t feedback = 48 << 16;
static volatile uint32_t feedback_center = 48 << 16;
volatile audio_bits_t audio_bits = AUDIO_BITS_32;
static uint32_t audio_frame_bytes = 8; // 32-bit stereo: 8 bytes per frame
#define AUDIO_BUFFER_SIZE 2048
#define FEEDBACK_STEP_16P16 1U
#define FEEDBACK_MAX_DELTA_16P16 1024U
__attribute__((aligned(4))) uint8_t audio_buffer[AUDIO_BUFFER_SIZE];
// uint32_t buffer_addr = 0;
// uint32_t buffer_num = 0;
volatile uint16_t Full_F = 0;
volatile uint16_t Empty_F = 0;

// Volume change flag and pending value (saved on silence)
volatile uint8_t g_volume_modified_flag = 0; // 1 if volume changed and pending save
volatile uint8_t g_volume_pending = 0;       // last changed volume value

// Pause flag to gate FIFO reaction during silence
static volatile uint8_t g_fifo_paused = 0;

void Audio_SilenceGPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    // PA8 as input (pull-down), driven high by CPLD when silence detected
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void Audio_SilenceEXTI_Init(void)
{
    EXTI_InitTypeDef EXTI_InitStructure = {0};
    NVIC_InitTypeDef NVIC_InitStructure = {0};

    // Map PA8 to EXTI Line8
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource8);

    // Enable both rising and falling edge interrupts on Line8
    EXTI_InitStructure.EXTI_Line = EXTI_Line8;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);

    // NVIC config for EXTI9_5
    NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    // Clear any pending EXTI
    EXTI_ClearITPendingBit(EXTI_Line8);
}


BitAction Audio_IsSilent(void)
{
    return GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_8);
}

void Audio_SetFifoPaused(BitAction pause)
{
    if (pause == Bit_SET) {
        g_fifo_paused = 1;
        TIM_Cmd(TIM1, DISABLE);
        TIM_Cmd(TIM8, DISABLE);
        TIM_ClearITPendingBit(TIM1, TIM_IT_Update);
        TIM_ClearITPendingBit(TIM8, TIM_IT_Update);
    } else {
        TIM_Cmd(TIM1, ENABLE);
        TIM_Cmd(TIM8, ENABLE);
        g_fifo_paused = 0;
    }
}

volatile uint32_t Audio_GetFeedback()
{
    return feedback;
}

uint16_t Audio_CountFull()
{ // A12
    static uint16_t last;
    uint16_t curr = TIM_GetCounter(TIM1);
    uint16_t diff = curr - last;
    last = curr;
    return diff;
}

uint16_t Audio_CountEmpty()
{ // A0
    static uint16_t last;
    uint16_t curr = TIM_GetCounter(TIM8);
    uint16_t diff = curr - last;
    last = curr;
    return diff;
}

void Audio_ResetFeedback(uint32_t freq)
{
    uint32_t base_feedback;
    // Only enable timers if NOT paused. 
    // If paused, they will be enabled later by Audio_SetFifoPaused(0) when silence clears.
    if (!g_fifo_paused) {
        TIM_Cmd(TIM1, ENABLE);
        TIM_Cmd(TIM8, ENABLE);
    }
    
    #ifdef FIFO_LOG
    // Guard printf to prevent blocking high-priority USB ISR
    // printf("freq = %d\r",freq);
    // GetFIFOStatus(1);
    #endif
    switch (freq)
    {
    case 384000U:
        base_feedback = 48 << 16;
        break;
    case 192000U:
        base_feedback = 24 << 16;
        break;
    case 96000U:
        base_feedback = 12 << 16;
        break;
    case 48000U:
        base_feedback = 6 << 16;
        break;
    case 176400U:
        base_feedback = 0x160CCD; // 1445068.8
        break;
    case 88200U:
        base_feedback = 0xB0666; // 722534.4
        break;
    case 44100U:
        base_feedback = 0x58333; // 361267.2
        break;
    default:
        base_feedback = 48 << 16;
    }
    feedback_center = base_feedback;
    feedback = base_feedback;
}

void Audio_UpdateFeedbackControl(void)
{
    // 在 USB SOF 节拍下统一更新反馈，避免双中断并发抖动
    if (g_fifo_paused) {
        return;
    }

    uint16_t full = Audio_CountFull();
    uint16_t empty = Audio_CountEmpty();
    uint32_t upper = feedback_center + FEEDBACK_MAX_DELTA_16P16;
    uint32_t lower = feedback_center - FEEDBACK_MAX_DELTA_16P16;

    // FIFO 偏空时提高反馈，提示主机增加发送速率
    if (full < empty) {
        if (feedback < upper) {
            feedback += FEEDBACK_STEP_16P16;
        }
        #ifdef FIFO_LOG
        Empty_F = empty - full;
        #endif
    }
    // FIFO 偏满时降低反馈，提示主机降低发送速率
    else if (full > empty) {
        if (feedback > lower) {
            feedback -= FEEDBACK_STEP_16P16;
        }
        #ifdef FIFO_LOG
        Full_F = full - empty;
        #endif
    }
}

void I2S_Device_Init()
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    I2S_InitTypeDef I2S_InitStructure = {0};
    DMA_InitTypeDef DMA_InitStructure = {0};

    RCC_I2S2CLKConfig(RCC_I2S2CLKSource_SYSCLK); // 144MHz
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC, ENABLE);

    SPI_I2S_DeInit(SPI2);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_15; // WS CK SD
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);


    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_12; // TIM8 TIM1
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    // Initialize PA8 for silence detection (GPIO + EXTI)
    Audio_SilenceGPIO_Init();
    Audio_SilenceEXTI_Init();
    // Apply initial pause state according to PA8 level
    Audio_SetFifoPaused(Audio_IsSilent());

    I2S_InitStructure.I2S_Mode = I2S_Mode_MasterTx;
    I2S_InitStructure.I2S_Standard = I2S_Standard_Phillips;
    I2S_InitStructure.I2S_DataFormat = I2S_DataFormat_32b;
    I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Disable;
    I2S_InitStructure.I2S_AudioFreq = 430000; 
    I2S_InitStructure.I2S_CPOL = I2S_CPOL_Low;
    I2S_Init(SPI2, &I2S_InitStructure);
    I2S_Cmd(SPI2, ENABLE);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1 | RCC_APB2Periph_TIM8, ENABLE);

    TIM_CounterModeConfig(TIM1, TIM_CounterMode_Up);
    TIM_ARRPreloadConfig(TIM1, DISABLE);
    TIM_SetAutoreload(TIM1, 0xFFFF);
    TIM_ETRClockMode2Config(TIM1, TIM_ExtTRGPSC_OFF, TIM_ExtTRGPolarity_NonInverted, 0x0);

    TIM_CounterModeConfig(TIM8, TIM_CounterMode_Up);
    TIM_ARRPreloadConfig(TIM8, DISABLE);
    TIM_SetAutoreload(TIM8, 0xFFFF);
    TIM_ETRClockMode2Config(TIM8, TIM_ExtTRGPSC_OFF, TIM_ExtTRGPolarity_NonInverted, 0x0);

    // 反馈调节改为 SOF 单点更新，这里关闭 TIM Update 中断以减少开销
    TIM_ClearITPendingBit( TIM1, TIM_IT_Update );
    TIM_ClearITPendingBit( TIM8, TIM_IT_Update );
    TIM_ITConfig(TIM1, TIM_IT_Update, DISABLE);
    TIM_ITConfig(TIM8, TIM_IT_Update, DISABLE);


    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);
    DMA_DeInit(DMA1_Channel5);

    DMA_InitStructure.DMA_PeripheralBaseAddr = (u32)&SPI2->DATAR;
    DMA_InitStructure.DMA_MemoryBaseAddr = 0;
    DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralDST;
    DMA_InitStructure.DMA_BufferSize = 0;
    DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
    DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
    DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
    DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
    DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
    DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;
    DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
    DMA_Init(DMA1_Channel5, &DMA_InitStructure);

    DMA_Cmd(DMA1_Channel5, ENABLE);
    SPI_I2S_DMACmd(SPI2, SPI_I2S_DMAReq_Tx, ENABLE);

    // 使用 DAC 取消静音
    Audio_SetUnmute(Bit_SET);
}

void TIM8_UP_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM8_UP_IRQHandler(void) {
    if(TIM_GetITStatus(TIM8, TIM_IT_Update)==SET)
    {
        TIM_ClearITPendingBit( TIM8, TIM_IT_Update );
    }
}

void TIM1_UP_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM1_UP_IRQHandler(void) {
    if(TIM_GetITStatus(TIM1, TIM_IT_Update)==SET)
    {
        TIM_ClearITPendingBit( TIM1, TIM_IT_Update );
    }
}

#ifdef FIFO_LOG
void GetFIFOStatus(uint8_t clean){
    static uint16_t LastF = 0;
    static uint16_t LastE = 0;
    if(clean == 1){
        LastF   = 0;
        LastE   = 0;
        Empty_F = 0;
        Full_F  = 0;
        printf("Reset FIFO Count!\r\n");
    }else{
        if(LastE != Empty_F){
            uint32_t num = Empty_F - LastE;
            printf("Empty times = %d",num);
            LastE = Empty_F;
            printf("<<< Feedback = %d \r\n",feedback);
        }
        if(LastF != Full_F){
            uint32_t num = Full_F - LastF;
            printf("Full times = %d",num);
            LastF = Full_F;
            printf("<<< Feedback = %d \r\n",feedback);
        }
        
    }
}
#endif

void EXTI9_5_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI9_5_IRQHandler(void)
{
    if (EXTI_GetITStatus(EXTI_Line8) != RESET)
    {
        EXTI_ClearITPendingBit(EXTI_Line8);
        BitAction zc = GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_8); // 1 = silence
        if (zc == Bit_SET)
        {
            // Persist pending volume on silence
            if (g_volume_modified_flag) {
                volume_storage_save(g_volume_pending);
                g_volume_modified_flag = 0;
            }
            Audio_SetFifoPaused(Bit_SET);
            #ifdef FIFO_LOG
            // printf("[PA8 INT] Silence detected: pause FIFO\r\n");
            #endif
        }
        else
        {
            Audio_SetFifoPaused(Bit_RESET);
            #ifdef FIFO_LOG
            // printf("[PA8 INT] Silence cleared: resume FIFO\r\n");
            #endif
        }
    }
}

void Audio_FillBuffer(uint8_t *restrict src, uint32_t num)
{
    uint32_t samples = num / audio_frame_bytes;

    // Safety check: Prevent buffer overflow
    if ((samples * 8) > AUDIO_BUFFER_SIZE) {
        samples = AUDIO_BUFFER_SIZE / 8;
    }

    if (audio_bits == AUDIO_BITS_32)
    {
        // 32-bit input: Direct copy
        memcpy(audio_buffer, src, samples * 8);
    }
    else if (audio_bits == AUDIO_BITS_24)
    {
        // 24-bit input: 3 bytes per sample -> 4 bytes output (padded)
        // Optimization: Process 2 samples (12 bytes) at a time using 32-bit reads
        const uint32_t *s32 = (const uint32_t *)src;
        uint32_t *d32 = (uint32_t *)audio_buffer;
        uint32_t i = 0;

        for (; i + 1 < samples; i += 2)
        {
            uint32_t s0 = s32[0];
            uint32_t s1 = s32[1];
            uint32_t s2 = s32[2];

            // Sample 0 Left: s0[23:0] -> 0xXXLLMMHH (LE) -> 0xHHMMLL00
            d32[0] = s0 << 8;
            // Sample 0 Right: s0[31:24] | s1[15:0] -> 0xHHMMLL00
            d32[1] = ((s0 >> 24) << 8) | ((s1 & 0xFFFF) << 16);
            // Sample 1 Left: s1[31:16] | s2[7:0] -> 0xHHMMLL00
            d32[2] = ((s1 >> 16) << 8) | (s2 << 24);
            // Sample 1 Right: s2[31:8] -> 0xHHMMLL00
            d32[3] = s2 & 0xFFFFFF00;

            s32 += 3;
            d32 += 4;
        }

        // Handle remaining sample if any
        if (i < samples) {
             const uint8_t *s = (const uint8_t*)s32;
             uint32_t l = ((uint32_t)s[2] << 24) | ((uint32_t)s[1] << 16) | ((uint32_t)s[0] << 8);
             uint32_t r = ((uint32_t)s[5] << 24) | ((uint32_t)s[4] << 16) | ((uint32_t)s[3] << 8);
             d32[0] = l;
             d32[1] = r;
        }
    }
    else if (audio_bits == AUDIO_BITS_16)
    {
        // 16-bit input: 2 bytes per sample -> 4 bytes output (padded)
        // Optimization: Read 32-bit word (contains L and R samples)
        const uint32_t *s32 = (const uint32_t *)src;
        uint32_t *d32 = (uint32_t *)audio_buffer;
        
        for (uint32_t i = 0; i < samples; i++)
        {
            uint32_t s0 = *s32++;
            // L: s0[15:0] -> 0xHHLL0000
            d32[0] = (s0 & 0xFFFF) << 16;
            // R: s0[31:16] -> 0xHHLL0000
            d32[1] = s0 & 0xFFFF0000;
            d32 += 2;
        }
    }

    DMA_Cmd(DMA1_Channel5, DISABLE);
    DMA1_Channel5->CNTR = samples << 2; // samples * 4 halfwords
    DMA1_Channel5->MADDR = (uint32_t)audio_buffer;
    DMA_Cmd(DMA1_Channel5, ENABLE);
}

void GetUpTime(){
    volatile static uint32_t LastTime2 = 0;
    if(LastTime2 != SysTick_ms){
        LastTime2 = SysTick_ms;
        printf("sysTick = %d\r\n",LastTime2);
    }
}

void Audio_SetBits(audio_bits_t bits)
{
    audio_bits = bits;
    // 预计算每帧（左右声道各一采样）的字节数，用于快速计算 samples
    // 16-bit: 4 bytes (2 bytes * 2 ch), 24-bit: 6 bytes, 32-bit: 8 bytes
    switch (bits) {
        case AUDIO_BITS_16: audio_frame_bytes = 4; break;
        case AUDIO_BITS_24: audio_frame_bytes = 6; break;
        case AUDIO_BITS_32: default: audio_frame_bytes = 8; break;
    }
}

void Audio_SetUnmute(BitAction unmute)
{
    // 使用 DAC 的 PCM 静音控制替代 PA2 引脚
    // Bit_SET 表示取消静音；Bit_RESET 表示静音
    if (unmute == Bit_SET) {
        cs43131_unmute_both_channels(0x30);
        cs43131_unmute_both_channels(0x31);
    } else {
        cs43131_mute_both_channels(0x30);
        cs43131_mute_both_channels(0x31);
    }
}
