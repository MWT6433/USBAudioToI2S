#include "ch32v30x_i2s_device.h"
#include "string.h"
#include "cs43131.h"
#include "ch32v30x_gpio.h"
#include "ch32v30x_exti.h"
#include "settings_storage.h"
#include "ch32v30x_spi_device.h"
#include "encoder.h"

// 供 deferred 采样率切换使用（定义于 ch32v30x_usbhs_device.c）
extern uint8_t SampleFreq[];
extern uint32_t USB_Audio_GetCurrentFreqHz(void);

volatile uint32_t feedback = 48 << 16;
static volatile uint32_t feedback_center = 48 << 16;
volatile audio_bits_t audio_bits = AUDIO_BITS_32;
static uint32_t audio_frame_bytes = 8; // 32-bit stereo: 8 bytes per frame
#define AUDIO_BUFFER_SIZE 2048

// ---- 反馈控制（FIFO 水位比例控制，Audio_FeedbackTask）----
// feedback 单位：样本/微帧 的 Q16.16（USB HS 每微帧 125µs）。
//   1 LSB ≈ 0.122 样本/s；±FEEDBACK_MAX_DELTA_16P16 ≈ ±125 样本/s（48k 下 ±2604ppm）。
// 控制对象：CPLD 内 512 深 FIFO 的 WrUsedw 水位（CPLD 侧唯一的弹性缓冲）。
// 环路时间常数约 0.33s（dF = e/FB_K_DIV、每 FB_TICK_MS 一拍），
// 相对 USB 主机数十 ms 的反馈反应延迟有充足相位裕量。
#define FEEDBACK_MAX_DELTA_16P16 1024U
#define FB_TARGET_LEVEL       256 // FIFO 目标水位（512 深的中点）
#define FB_DEADBAND           24 // 死区（样本）：覆盖 384k 档 I2S 突发注入的 ±8 样本纹波
#define FB_K_DIV              4  // 比例步长：dF = |水位偏差|/4 LSB/tick
#define FB_STEP_MAX           8  // 单拍步长钳位（LSB）
#define FB_HARD_STEP          32 // 近满/近空硬步长（LSB/tick），越界快速回收（不受步长钳位）
#define FB_NEAR_FULL_TH      480 // 近满阈值（与 CPLD fifo_status 一致）
#define FB_NEAR_EMPTY_TH      32 // 近空阈值（MCU 侧由水位判定）
#define FB_START_GUARD_TICKS  20 // 码流（重）启动后 200ms 内只测不动
#define FB_STREAM_TIMEOUT_TCK 5  // 50ms（×10ms tick）无 EP1 OUT 包视为码流停止
#define FB_TICK_MS            10 // system_tick（TIM7）节拍周期

__attribute__((aligned(4))) uint8_t audio_buffer[AUDIO_BUFFER_SIZE];

// 乒乓发送缓冲：Audio_FillBuffer 写入空闲块（s_fill_idx），DMA TC 中断负责启动
// 已填好的下一块，USB ISR 内不再等待 DMA 完成（消除忙等与 printf）。
// s_fill_idx 恒指向"非 ACTIVE"缓冲，保证写入与 DMA 读取不冲突。
__attribute__((aligned(4))) uint8_t audio_tx_buf[2][AUDIO_BUFFER_SIZE];
static volatile uint8_t s_dma_active = 0;    // DMA 正在发送某块
static volatile uint8_t s_pending = 0;       // 有一块已填好待发
static volatile uint16_t s_pending_len = 0;  // 待发块长度（半字数）
static uint8_t s_fill_idx = 0;               // USB 当前写入的缓冲索引

// 反馈环运行状态（诊断/联动）
volatile uint16_t g_cpld_fifo_level = 0;     // 最近一次读取的 CPLD FIFO 水位（帧）
volatile uint16_t g_cpld_ripple = 0;         // 统计窗口内水位极值差（帧）＝抖动实际幅度
volatile uint32_t g_ovr_events = 0;          // CPLD FIFO 真实丢样次数累计（读清）
volatile uint32_t g_und_events = 0;          // CPLD FIFO 真实重样次数累计（读清）
volatile uint32_t g_stream_last_tick = 0;    // 最近一次 EP1 OUT 包的 system_tick
static uint8_t s_fb_guard = 0;               // 码流启动保护期剩余 tick 数
static int32_t s_trim_ppm = 0;               // 已学到的板载晶振相对偏置（ppm，环收敛时更新）

// Volume change flag and pending value (saved on silence)
volatile uint8_t g_volume_modified_flag = 0; // 1 if volume changed and pending save
volatile uint8_t g_volume_pending = 0;       // last changed volume value

// 菜单设置修改标记（F/S, Lat/Ph, Class, HP FS 修改后置位，静音时一并保存）
volatile uint8_t g_menu_settings_modified_flag = 0;

// Deferred 请求状态：USB ISR 只写这些标志，主循环 AudioMgr_ProcessDeferred() 处理
volatile uint32_t g_pending_rate_hz = 0;    // 待切换采样率（0=无）
volatile uint8_t  g_pending_bits = 0;       // 待配置位深
volatile uint8_t  g_pending_bits_valid = 0; // 1=有待配置位深
volatile uint8_t  g_pending_mute = 0;       // 0=无 1=静音 2=取消静音
volatile uint8_t  g_settings_save_pending = 0; // 1=待保存设置到 Flash
volatile uint8_t  g_dac_muted = 0; // 1=DAC 当前处于静音（Audio_SetUnmute 维护；保存条件用）

// 主循环 deferred 处理器：执行中断里登记的慢操作（CPLD SPI 切频、DAC I2C 配置、Flash 保存）。
// 必须在主循环上下文（而非任何中断）调用，否则仍会抢占主循环 I2C 导致死锁。
void AudioMgr_ProcessDeferred(void)
{
    // 1) 采样率切换：CPLD SPI + DAC I2C（延迟执行，USB ISR 已 ACK）
    uint32_t rate = g_pending_rate_hz;
    if (rate != 0) {
        g_pending_rate_hz = 0;
        if (CPLD_RequestFormat(rate) && CPLD_ChangeFormat()) {
            Audio_ResetFeedback(rate);
            cs43131_adjust_asp_runtime(0x30, rate, audio_bits);
            cs43131_adjust_asp_runtime(0x31, rate, audio_bits);
            // 同步 USB 描述符中的当前采样率（GET CUR 读取）
            SampleFreq[0] = (uint8_t)(rate & 0xFF);
            SampleFreq[1] = (uint8_t)((rate >> 8) & 0xFF);
            SampleFreq[2] = (uint8_t)((rate >> 16) & 0xFF);
            SampleFreq[3] = (uint8_t)((rate >> 24) & 0xFF);
        }
        // 切换失败：保持旧采样率与 SampleFreq（GET CUR 返回旧值，主机可感知）
    }

    // 2) 位深配置：DAC ASP 位宽（USB ISR 已立即更新 audio_bits，数据面先行）
    if (g_pending_bits_valid) {
        uint8_t bits = g_pending_bits;
        g_pending_bits_valid = 0;
        uint32_t freq = USB_Audio_GetCurrentFreqHz();
        cs43131_adjust_asp_runtime(0x30, freq, bits);
        cs43131_adjust_asp_runtime(0x31, freq, bits);
    }

    // 3) 静音 / 取消静音（I2C 写入 DAC）
    if (g_pending_mute != 0) {
        uint8_t m = g_pending_mute;
        g_pending_mute = 0;
        Audio_SetUnmute((m == 2) ? Bit_SET : Bit_RESET);
    }

    // 4) 设置保存：静音后（音频已暂停）执行 Flash 擦写，避免中断内擦写
    if (g_settings_save_pending) {
        g_settings_save_pending = 0;
        if (g_volume_modified_flag || g_menu_settings_modified_flag) {
            if (settings_storage_save_current() == true) {
                g_volume_modified_flag = 0;
                g_menu_settings_modified_flag = 0;
            }
            // 保存失败保留标志，下次静音再试
        }
    }
}

BitAction Audio_IsSilent(void)
{
    uint8_t silent = 0;
    if (CPLD_GetSilence(&silent) != 0) return Bit_RESET;
    return silent ? Bit_SET : Bit_RESET;
}

volatile uint32_t Audio_GetFeedback()
{
    return feedback;
}

// USB EP1 OUT ISR 调用：记录码流活跃时间戳（主循环反馈环据此判断主机是否在送流）
void Audio_NotifyStreamActive(void)
{
    g_stream_last_tick = system_tick;
}

// 学习"相对偏置"：feedback 与标称中心之差，换算成 ppm。
// 物理含义是板载晶振相对标称频率的固有偏差，与采样率无关，因此可跨采样率复用：
// Audio_ResetFeedback() 预载它，换采样率时直接落在正确速率上，不必再花几百 ms
// 从标称值重新收敛（那是切歌/切率时水位来回摆的主因之一）。
// 仅在环收敛（本轮未施加修正）时更新，因此也天然跟踪温度漂移。
static void Audio_LearnTrim(void)
{
    if (feedback_center == 0) {
        return;
    }
    int32_t trim = (int32_t)feedback - (int32_t)feedback_center;
    int32_t ppm = (int32_t)(((int64_t)trim * 1000000) / (int32_t)feedback_center);
    // 合理性钳位：晶振偏差不可能超过 ±200ppm，越界说明尚未收敛或读数异常，不学习
    if (ppm > 200 || ppm < -200) {
        return;
    }
    s_trim_ppm = ppm;
}

int32_t Audio_GetTrimPpm(void)
{
    return s_trim_ppm;
}

void Audio_ResetFeedback(uint32_t freq)
{
    uint32_t base_feedback;
    // 切率后 FIFO 水位语义变化（读速率跳变），重新进入启动保护期
    s_fb_guard = FB_START_GUARD_TICKS;

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

    // 预载已学到的相对偏置（跨采样率通用），使起始值就落在正确的速率上
    if (s_trim_ppm != 0) {
        int32_t pre = (int32_t)(((int64_t)s_trim_ppm * (int32_t)base_feedback) / 1000000);
        if (pre > (int32_t)FEEDBACK_MAX_DELTA_16P16) {
            pre = (int32_t)FEEDBACK_MAX_DELTA_16P16;
        }
        if (pre < -(int32_t)FEEDBACK_MAX_DELTA_16P16) {
            pre = -(int32_t)FEEDBACK_MAX_DELTA_16P16;
        }
        feedback = (uint32_t)((int32_t)base_feedback + pre);
    } else {
        feedback = base_feedback;
    }
}

// 反馈控制任务：主循环每圈调用，内部按 system_tick(10ms) 节流。
//
// 测量（v6 起）：CPLD 统计块给出"8.53ms 窗口平均水位"（1/16 帧分辨率）+ 窗口极值
//       + 真实丢样/重样次数。窗口均值把 I2S 突发注入造成的 ±8 帧纹波在硬件里平均掉了，
//       因此死区只需覆盖真正的调节噪声，位置观测比旧的单点瞬时采样（4 帧量化）干净得多。
//       旧位流（v5 及以前）自动退回单字节 GET_LEVEL 瞬时水位。
// 控制律：水位偏差 e = level - 256（内部按 1/16 帧计算）；
//   - 死区 |e| <= FB_DEADBAND 不动作；
//   - 比例步长 dF = e/FB_K_DIV，钳 ±FB_STEP_MAX（LSB Q16.16 / tick）；
//   - 近满/近空（CPLD 阈值 480/32，用窗口极值判定）触发 ±FB_HARD_STEP 硬步长快速回收；
//   - 总量钳位 feedback_center ± FEEDBACK_MAX_DELTA_16P16（±125 样本/s）。
// 符号：水位高 = 主机偏快 → feedback 下调；水位低 = 主机偏慢 → 上调。
// 门控：仅当码流活跃（50ms 内有 EP1 OUT 包）且启动保护期已过；
//       zc 静音不参与门控——安静段主机仍在送流，晶振漂移仍需校正。
void Audio_FeedbackTask(void)
{
    static uint32_t last_tick = 0;
    static int8_t level_ok = -1; // -1=未探测；1=CPLD 固件满足最低版本；0=不支持
    static int8_t stats_ok = -1; // -1=未探测；1=v6 统计块可用；0=退回单字节瞬时水位
    static uint8_t evt_div = 0;

    uint32_t now = system_tick;
    if (now == last_tick) {
        return; // 10ms 节流
    }
    last_tick = now;

    // 码流停止（暂停/切 alt 0）：冻结控制，重新武装启动保护期
    if ((uint32_t)(now - g_stream_last_tick) > FB_STREAM_TIMEOUT_TCK) {
        s_fb_guard = FB_START_GUARD_TICKS;
        return;
    }

    // 探测 CPLD 协议版本。只有读成功才落定结论，失败保持"未探测"、下个节拍继续重试——
    // 旧实现一次失败就把反馈环永久关闭，此后晶振漂移不再校正且无恢复路径。
    if (level_ok < 0 || stats_ok < 0) {
        uint8_t ver = 0;
        if (CPLD_GetStatus(&ver)) {
            uint8_t v = CPLD_GET_VERSION(ver);
            level_ok = (v >= CPLD_PROTOCOL_VERSION_MIN) ? 1 : 0;
            stats_ok = (v >= CPLD_PROTOCOL_VERSION_STATS) ? 1 : 0;
        } else {
            return;
        }
    }
    if (!level_ok) {
        return;
    }

    if (s_fb_guard) {
        s_fb_guard--;
        return;
    }

    // 位置观测，统一换算成 1/16 帧单位
    int32_t level16;
    uint8_t near_full;
    uint8_t near_empty;

    cpld_stats_t st;
    if (stats_ok == 1 && CPLD_GetStats(&st)) {
        if (!CPLD_STATS_WIN_VALID(st.flags)) {
            return; // 统计窗口尚未完成（上电初期），本轮不动作
        }
        level16 = (int32_t)st.mean16;
        // 保护判定用窗口极值：窗口内只要触到过近满/近空区就硬回收，比单点采样更保守
        near_full = ((st.max_level >= FB_NEAR_FULL_TH) ||
                     (st.mean16 >= (int32_t)(FB_NEAR_FULL_TH * 16))) ? 1 : 0;
        near_empty = (st.min_level <= FB_NEAR_EMPTY_TH) ? 1 : 0;

        g_cpld_fifo_level = CPLD_MEAN16_TO_FRAMES(st.mean16);
        g_cpld_ripple = (uint16_t)(st.max_level - st.min_level);
        g_ovr_events += st.ovr_cnt; // 真实丢样/重样次数（CPLD 侧读清）
        g_und_events += st.und_cnt;
    } else {
        uint8_t b = CPLD_GetLevel();
        uint16_t lv = CPLD_LEVEL_OF(b);
        level16 = (int32_t)lv << 4;
        near_full = (CPLD_NEAR_FULL(b) || (lv >= FB_NEAR_FULL_TH)) ? 1 : 0;
        near_empty = (lv <= FB_NEAR_EMPTY_TH) ? 1 : 0;
        g_cpld_fifo_level = lv;
    }

    int32_t e16 = level16 - ((int32_t)FB_TARGET_LEVEL << 4);
    int32_t dF = 0;
    uint8_t hard = 0;

    if (near_full) {
        dF = -FB_HARD_STEP; // 越界快速回收，不受 FB_STEP_MAX 钳制
        hard = 1;
    } else if (near_empty) {
        dF = +FB_HARD_STEP;
        hard = 1;
    } else if (e16 > ((int32_t)FB_DEADBAND << 4)) {
        dF = -(e16 / ((int32_t)FB_K_DIV << 4));
    } else if (e16 < -((int32_t)FB_DEADBAND << 4)) {
        dF = (-e16) / ((int32_t)FB_K_DIV << 4);
    }

    if (!hard) {
        if (dF > FB_STEP_MAX) {
            dF = FB_STEP_MAX;
        }
        if (dF < -FB_STEP_MAX) {
            dF = -FB_STEP_MAX;
        }
    }

    if (dF != 0) {
        uint32_t upper = feedback_center + FEEDBACK_MAX_DELTA_16P16;
        uint32_t lower = feedback_center - FEEDBACK_MAX_DELTA_16P16;
        uint32_t f = feedback;
        if (dF > 0) {
            f = (f > upper - (uint32_t)dF) ? upper : (f + (uint32_t)dF);
        } else {
            uint32_t mag = (uint32_t)(-dF);
            f = (f < lower + mag) ? lower : (f - mag);
        }
        feedback = f; // 32bit 对齐，SOF ISR 读取无撕裂
    } else {
        // 本轮无需修正 ⇒ 环已收敛，记录相对偏置供切率时预载（见 Audio_LearnTrim）
        Audio_LearnTrim();
    }

    // v5 计次路径：1Hz 读清 sticky 事件。v6 起真实计数来自统计块，不再重复计数。
    if (stats_ok != 1 && ++evt_div >= (uint8_t)(1000 / FB_TICK_MS)) {
        evt_div = 0;
        uint8_t ev = CPLD_GetEvents();
        if (CPLD_EVT_OVR(ev)) {
            g_ovr_events++;
        }
        if (CPLD_EVT_UND(ev)) {
            g_und_events++;
        }
    }

#if FEEDBACK_LOG_ENABLE
    // 周期诊断：偏置/平均水位/纹波/真实丢样重样次数，用于定量评估反馈环与缓存余量
    {
        static uint16_t log_div = 0;
        if (++log_div >= (uint16_t)(10000 / FB_TICK_MS)) {
            log_div = 0;
            printf("[FB] %uk trim=%dppm lvl=%u rip=%u ovr=%u und=%u\r\n",
                   (unsigned)(USB_Audio_GetCurrentFreqHz() / 1000U), (int)Audio_GetTrimPpm(),
                   (unsigned)g_cpld_fifo_level, (unsigned)g_cpld_ripple,
                   (unsigned)g_ovr_events, (unsigned)g_und_events);
        }
    }
#endif
}

void I2S_Device_Init()
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    I2S_InitTypeDef I2S_InitStructure = {0};
    DMA_InitTypeDef DMA_InitStructure = {0};
    NVIC_InitTypeDef NVIC_InitStructure = {0};

    RCC_I2S2CLKConfig(RCC_I2S2CLKSource_SYSCLK); // 144MHz
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC, ENABLE);

    SPI_I2S_DeInit(SPI2);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_15; // WS CK SD
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);


    // （旧的 FB0/FB1 buffer_empty/buffer_full 引脚已从硬件删除，
    //  反馈环使用 SPI 水位读取 Audio_FeedbackTask，静音状态经 GET_SILENCE 上报。）

    I2S_InitStructure.I2S_Mode = I2S_Mode_MasterTx;
    I2S_InitStructure.I2S_Standard = I2S_Standard_Phillips;
    I2S_InitStructure.I2S_DataFormat = I2S_DataFormat_32b;
    I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Disable;
    // 伪频率：此值仅用于让 I2S_Init 算出 I2SDIV=2/ODD=1 → BCLK = 144MHz/5 = 28.8MHz。
    // 数据速率 3.6MB/s，覆盖 384kHz×8B=3.07MB/s 需求（余量 17%）。
    // 注意：勿改为 384000（会得 BCLK=24MHz=3.0MB/s，384k 欠载）。
    I2S_InitStructure.I2S_AudioFreq = 430000;
    I2S_InitStructure.I2S_CPOL = I2S_CPOL_Low;
    I2S_Init(SPI2, &I2S_InitStructure);
    I2S_Cmd(SPI2, ENABLE);

    // （旧的 TIM1/TIM8 ETR 空满脉冲计数已删除：pulse.v 输出的是饱和期方波，
    //  计数无法反映 FIFO 水位，反馈环改由 Audio_FeedbackTask 用 SPI 水位实现。）

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

    // 乒乓机制：DMA 传输完成（TC）中断自动启动下一块已填好的缓冲。
    // 优先级 3 低于 USBHS（0），DMA ISR 内只有 O(1) 的寄存器操作。
    DMA_ITConfig(DMA1_Channel5, DMA_IT_TC, ENABLE);
    NVIC_InitStructure.NVIC_IRQChannel = DMA1_Channel5_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    // 使用 DAC 取消静音
    Audio_SetUnmute(Bit_SET);
}

// （旧 PA8 静音 EXTI9_5 handler 已删除：静音状态改由 Audio_IsSilent()
//  经 CPLD SPI GET_SILENCE 轮询；EXTI9_5 向量现由 CS43131 INT (PD9) 使用。）

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

    // 乒乓提交：转换结果搬入空闲块，然后尝试启动 DMA。
    // DMA 忙（ACTIVE 或 PENDING）时仅标记待发，由 TC 中断续发，USB ISR 永不阻塞。
    uint32_t out_bytes = samples * 8;
    memcpy(audio_tx_buf[s_fill_idx], audio_buffer, out_bytes);

    if (s_dma_active || s_pending) {
        s_pending = 1;
        s_pending_len = (uint16_t)(out_bytes >> 1); // 半字数
        return;
    }

    // DMA 空闲：立即启动当前块（首包与稳态路径）
    NVIC_DisableIRQ(USBHS_IRQn); // 与 TC 中断的启动点串行化（~1us，O(1)）
    DMA_Cmd(DMA1_Channel5, DISABLE);
    DMA_ClearFlag(DMA1_FLAG_TC5);
    DMA_ClearITPendingBit(DMA1_IT_TC5);
    DMA1_Channel5->MADDR = (uint32_t)audio_tx_buf[s_fill_idx];
    DMA1_Channel5->CNTR  = (uint16_t)(out_bytes >> 1); // 半字数
    DMA_Cmd(DMA1_Channel5, ENABLE);
    s_dma_active = 1;
    s_fill_idx ^= 1;
    NVIC_EnableIRQ(USBHS_IRQn);
}

// DMA1 CH5 传输完成中断：上一块发送完毕，若有已填好的缓冲则立即续发
void DMA1_Channel5_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void DMA1_Channel5_IRQHandler(void)
{
    if (DMA_GetITStatus(DMA1_IT_TC5) != RESET)
    {
        DMA_ClearITPendingBit(DMA1_IT_TC5);
        s_dma_active = 0; // ACTIVE -> FREE
        if (s_pending) {
            NVIC_DisableIRQ(USBHS_IRQn); // 与 USB ISR 的启动点串行化
            DMA_Cmd(DMA1_Channel5, DISABLE);
            DMA_ClearFlag(DMA1_FLAG_TC5);
            DMA1_Channel5->MADDR = (uint32_t)audio_tx_buf[s_fill_idx];
            DMA1_Channel5->CNTR  = s_pending_len;
            DMA_Cmd(DMA1_Channel5, ENABLE);
            s_dma_active = 1;
            s_fill_idx ^= 1;
            s_pending = 0;
            NVIC_EnableIRQ(USBHS_IRQn);
        }
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
    g_dac_muted = (unmute == Bit_SET) ? 0 : 1;
    if (unmute == Bit_SET) {
        cs43131_unmute_both_channels(0x30);
        cs43131_unmute_both_channels(0x31);
    } else {
        cs43131_mute_both_channels(0x30);
        cs43131_mute_both_channels(0x31);
    }
}
