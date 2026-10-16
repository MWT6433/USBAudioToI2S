#include "debug.h"
#include "ch32v30x_usbhs_device.h"
#include "ch32v30x_i2s_device.h"
#include "ch32v30x_spi_device.h"
#include "ch32v30x_led_device.h"
#include "encoder.h"
#include "./DAP/hid_transfer.h"
#include "./DAP/Include/DAP.h"
#include "OLED.h"
#include "u8g2.h"
#include "u8x8.h"
#include "app_config.h"
#if BOARD_HAS_SI5351
#include "si5351a_revb_reg_config.h"
#endif
#include "ch32v30x_i2c.h"
#include "Dec_IIC.h"
#include "settings_storage.h"
#include <stdbool.h>
#include "ch32v30x_gpio.h"


#define PROGRAM_VERSION 1
#define UI_REFRESH_INTERVAL_MS 20U

void SysTick_Config (uint32_t ticks);
void SetDapMode (int mode);
void I2C_ScanBus(void);

bool g_has_oled = false; // 标记是否检测到 OLED 屏幕

void hang (const char *str) {
    printf ("Error: %s\r\n", str);

    LED_Set (0);
    Delay_Ms (1000);
    LED_Set (1);
    Delay_Ms (1000);
    LED_Set (0);
    Delay_Ms (1000);
    LED_Set (1);
    Delay_Ms (1000);
    LED_Set (0);
    Delay_Ms (1000);
    LED_Set (1);
    Delay_Ms (1000);
    LED_Set (0);

    while (1) {
        Delay_Us(10);
    }
}

// 返回 CPLD 是否初始化成功；失败时自动进入 DAP 模式供外部烧写 CPLD
bool Audioinit() {
    printf ("LLT USB Audio To I2S\r\n");
    printf ("Firmware version: %d, Datetime: %s-%s\r\n", PROGRAM_VERSION, __DATE__, __TIME__);
    printf ("System clk:%d\r\n", SystemCoreClock);
    printf ("Chip ID:%08x\r\n", DBGMCU_GetCHIPID());

    // Init SPI
    SPI_Device_Init();

    // Init CPLD（带重试机制，提高上电时序容错）
    uint8_t cpld_version;
    int cpld_retry = 3;
    bool cpld_ok = false;
    while (cpld_retry-- > 0) {
        if (CPLD_GetStatus(&cpld_version)) {
            cpld_ok = true;
            break;
        }
        Delay_Ms(50);
    }
    if (!cpld_ok) {
        printf("CPLD initialization failed!\r\n");
        LED_Set(1);
        // 初次上电 CPLD 未烧写固件：自动进入 DAP 模式，通过 USB 以 CMSIS-DAP
        // 协议向外部调试器提供 SWD（PB1/PC5/PA3）烧写 CPLD。烧写完成后断电/复位即可。
        printf("Auto entering DAP mode for CPLD programming...\r\n");
        SetDapMode(1);
        return false;
    }
    SetDapMode(0);
    printf("CPLD firmware version:%d\r\n", cpld_version);
    printf("==================READY==================\r\n");

    // Init I2S
    I2S_Device_Init();
    
    //  Blink
    LED_Set (0);
    Delay_Ms (100);
    LED_Set (1);
    Delay_Ms (100);
    LED_Set (0);
    Delay_Ms (100);
    LED_Set (1);
    Delay_Ms (100);
    LED_Set (0);

    Encoder_Init();
    return true;
}

//该项目的用户界面由一个oled屏幕与旋转编码器组成，用于调整音频参数和显示当前设置，当系统初始化时，会自动扫描i2c总线上的设备，如果没有检测到oled屏幕，则会不初始化oled屏幕，直接进入音频播放模式，以防止i2c总线阻塞。
#include "cs43131.h"

// 按当前供电模式执行耳机拔出下电，避免内部电荷泵与外部 VCPFILT 路径混用。
static void CS43131_HandleUnplug(void)
{
    cs43131_mute_both_channels(0x30);
    cs43131_mute_both_channels(0x31);
    cs43131_hp_power_down(0x30);
    cs43131_hp_power_down(0x31);
}

static void CS43131_HandlePlug(cs43131_jack_mode_t mode)
{
    Delay_Ms(40);
    cs43131_apply_jack_mode(mode);
    cs43131_configure_hp_no_detect(0x30);
    cs43131_configure_hp_no_detect(0x31);
    cs43131_hp_power_up(0x30);
    cs43131_hp_power_up(0x31);
    cs43131_unmute_both_channels(0x30);
    cs43131_unmute_both_channels(0x31);
}

static void Headphone_Update(void)
{
    static bool s_initialized = false;
    static cs43131_jack_mode_t s_last_mode = CS43131_JACK_MODE_NONE;
    cs43131_jack_mode_t mode = Headphone_GetJackMode();

    if (!s_initialized) {
        s_last_mode = mode;
        s_initialized = true;
        if (mode == CS43131_JACK_MODE_NONE) {
            CS43131_HandleUnplug();
        }
        return;
    }

    if (mode != s_last_mode) {
        if (mode == CS43131_JACK_MODE_NONE) {
            CS43131_HandleUnplug();
        } else {
            cs43131_mute_both_channels(0x30);
            cs43131_mute_both_channels(0x31);
            cs43131_hp_power_down(0x30);
            cs43131_hp_power_down(0x31);
            CS43131_HandlePlug(mode);
        }
        s_last_mode = mode;
    }
}
int main (void) {
    NVIC_PriorityGroupConfig (NVIC_PriorityGroup_2);
    SystemCoreClockUpdate();
    Delay_Init();
    USART_Printf_Init (9600);
    LED_Device_Init();

    IIC_Init(400000,0x78); 
    
    // 选择暂时测试的采样率：可改为 44100 或 48000
    const uint32_t test_audio_rate_hz = 192000; // TODO: 按需切换为 44100

    // 根据采样率选择外部 MCLK：48k 家族 -> 24.576MHz；44.1k 家族 -> 22.5792MHz
    #if BOARD_HAS_SI5351
    if (test_audio_rate_hz % 16000 == 0) {
        // 48k 家族
        si5351_configure_24_576mhz();
    } else {
        // 44.1k 家族
        si5351_configure_22_5792mhz();
    }
    #endif

    CS43131_GPIO_Init();

    if (!Audioinit()) {
        // CPLD 未初始化（如首次上电未烧写 CPLD 固件）：已自动进入 DAP 模式，
        // 驻留于此处理 CMSIS-DAP 请求，跳过音频初始化等待外部调试器烧写 CPLD。
        printf("DAP mode active. Program the CPLD, then power-cycle to resume audio.\r\n");
        while (1) {
            usbd_hid_process();
        }
    }

    cs43131_init(0x30);
    cs43131_init(0x31);

    // 无 Si5351 的板卡：在 DAC 初始化后按采样率家族选择 INTSEL（两片一致）
    #if !BOARD_HAS_SI5351
    {
        bool is_48k_family = (test_audio_rate_hz % 16000 == 0);
        cs43131_switch_mclk_external(0x30, is_48k_family);
        cs43131_switch_mclk_external(0x31, is_48k_family);
    }
    #endif

    // 初始化设置存储模块（Flash 读写）
    settings_storage_init();
    // 扫描总线上的i2c设备地址
    I2C_ScanBus();
    if (cs43131_startup_dual_dac() != 0) {
        hang("CS43131 startup failed");
    }

    u8g2_t u8g2;
    if (g_has_oled) {
        u8g2_Setup_ssd1306_i2c_128x64_noname_f(&u8g2, U8G2_R2, u8x8_byte_hw_i2c,u8x8_gpio_and_delay);
        u8g2_InitDisplay(&u8g2);                                                                       
        u8g2_SetPowerSave(&u8g2, 0);                                                                   
        u8g2_ClearBuffer(&u8g2);
        u8g2_SetFont(&u8g2,u8g2_font_6x12_mr);
        u8g2_DrawStr(&u8g2,10,10,"CH32V307 u8g2 Test");
        u8g2_SendBuffer(&u8g2);
        OLED_BrightnessInit(&u8g2);
        OLED_MarkUpdated();
        Menu_Init(&u8g2);
    } else {
        printf("OLED screen not detected, skipping initialization.\r\n");
    }

    
    // 从 Flash 加载保存的设置（音量 + 菜单设置）
    // CS43131 音量范围：0x00=0dB, 0xFF=-127.5dB (每步0.5dB)
    settings_storage_t settings;
    bool settings_valid = settings_storage_load(&settings);
    uint8_t current_volume = settings.volume_value;
    int encoderNum = 0;
    int newEncoder = 0;
    uint32_t last_ui_refresh_ms = 0;
    uint8_t last_key_event = 0xFF;
    uint8_t last_key_pressed = 0xFF;
    uint8_t last_menu_active = 0xFF;
    int last_encoder_for_ui = 0x7FFFFFFF;
    uint8_t last_pending = 0;   // PEND（未保存）状态快照，变化时触发 UI 刷新
    
    // 应用保存的音量（叠加保存的左右平衡；无效数据时 load 已填默认 balance=0）
    cs43131_apply_volume_balance(current_volume, settings.balance);
    
    // 初始化待保存音量值为当前加载值（确保仅修改菜单设置时也能正确保存音量）
    g_volume_pending = current_volume;

    // 应用保存的菜单设置（覆盖 DAC 启动默认值）
    if (settings_valid) {
        // 恢复 PCM Filter Option 寄存器（F/S, Lat/Ph 等）
        cs43131_set_pcm_filter_opt_both(settings.filter_opt);

        // 恢复耳放模式与满幅输出（Class, HP FS）
        cs43131_set_hp_config_both(
            (cs43131_hp_amp_mode_t)settings.hp_amp_mode,
            (cs43131_hp_full_scale_t)settings.hp_full_scale
        );

        // 恢复 MCLK 二分频偏好（CPLD v4+ 才支持；此时 DAC 已上电，走静音包裹版）
        if (settings.mck_div2 && g_cpld_version >= CPLD_PROTOCOL_VERSION_DIV2) {
            CPLD_SetMclkDiv2Muted(1);
        }
    }
    
    // cs43131_dump_status(0x30);
    // cs43131_dump_status(0x31);
    // 根据当前耳机插入状态初始化耳放供电与静音
    Headphone_Update();

    // 同步编码器硬件初值，避免首次进入循环时产生虚假差值导致音量跳变
    encoderNum = GetEncoder();
    
    while (1) {
        // 处理中断登记的后台任务（采样率切换 / DAC 位深配置 / 静音 / Flash 设置保存）
        AudioMgr_ProcessDeferred();

        // FIFO 水位反馈控制（内部按 system_tick 10ms 节流，SPI 读 CPLD 水位）
        Audio_FeedbackTask();

        Headphone_Update();
        uint8_t key_event = KEY_GetEvent();
        
        newEncoder = GetEncoder();
        uint8_t key_pressed = KEY_IsPressed();
        uint8_t ui_active = Menu_IsActive();
        uint32_t now_ms = SysTick_ms;
        uint8_t need_ui_refresh = 0;

        // 手动保存：非菜单 + 单击 + "输出无声" + 有未保存修改 → 置保存请求。
        // "输出无声" = FPGA 码流静音(GET_SILENCE) 或 DAC 已静音 或 音量在最大衰减档：
        // 保存的 Flash 擦写会冻结中断数 ms，只要输出侧无声，毛刺就听不见。
        // Flash 保存由 AudioMgr_ProcessDeferred() 在主循环执行。
        if (key_event == EVENT_CLICK && ui_active == 0) {
            uint8_t output_silent = ((Audio_IsSilent() == Bit_SET) || g_dac_muted ||
                                     (current_volume >= 0xFE)) ? 1 : 0;
            if (output_silent && (g_volume_modified_flag || g_menu_settings_modified_flag)) {
                g_settings_save_pending = 1;
            } else {
                // 诊断：单击未触发保存时打印原因（各判定分量 / CPLD 协议版本）
                printf("[SAVE] click skipped: stream_silent=%d dac_muted=%d vol=0x%02X mod=%d/%d cpld_v=%d\r\n",
                       (Audio_IsSilent() == Bit_SET) ? 1 : 0, g_dac_muted, current_volume,
                       g_volume_modified_flag, g_menu_settings_modified_flag, g_cpld_version);
            }
        }

        // PEND（未保存）状态快照：变化时触发 UI 刷新
        uint8_t cur_pending = (g_volume_modified_flag || g_menu_settings_modified_flag) ? 1 : 0;
        if (cur_pending != last_pending) {
            need_ui_refresh = 1;
        }

        if ((uint32_t)(now_ms - last_ui_refresh_ms) >= UI_REFRESH_INTERVAL_MS) {
            need_ui_refresh = 1;
        }
        if (key_event != 0 || key_pressed != last_key_pressed || ui_active != last_menu_active ||
            newEncoder != last_encoder_for_ui || key_event != last_key_event) {
            need_ui_refresh = 1;
        }

        if (need_ui_refresh) {
            if (g_has_oled) {
                u8g2_ClearBuffer(&u8g2);
                OLED_DrawMain(&u8g2);
                Menu_UpdateAndDraw(&u8g2, key_event, key_pressed, newEncoder);
                u8g2_SendBuffer(&u8g2);
                OLED_MarkUpdated();
            }
            last_ui_refresh_ms = now_ms;
            last_key_event = key_event;
            last_key_pressed = key_pressed;
            last_menu_active = ui_active;
            last_encoder_for_ui = newEncoder;
            last_pending = cur_pending;
        }

        if (ui_active==0 && key_pressed==0 && key_event==0 && encoderNum != newEncoder) {
            int volume_change = newEncoder - encoderNum;
            encoderNum = newEncoder;

            int new_volume = (int)current_volume + volume_change;
            if (new_volume < 0x00) new_volume = 0x00;
            if (new_volume > 0xFE) new_volume = 0xFE;
            current_volume = (uint8_t)new_volume;

            cs43131_apply_volume_balance(current_volume, cs43131_get_balance());

            g_volume_pending = current_volume;
            g_volume_modified_flag = 1;

            // 使用整数运算避免浮点格式化依赖（newlib-nano 默认不支持 %f）
            int vol_neg_int = current_volume >> 1;          // 整数部分：current_volume / 2
            int vol_neg_frac = (current_volume & 1) * 5;    // 小数部分：余数 * 5 (0.5dB/step)
#if VOLUME_ADJUST_LOG_ENABLE
            printf("Volume = -%d.%d dB (0x%02X) [Pending save]\r\n",
                   vol_neg_int, vol_neg_frac, current_volume);
#endif

            char vol_str[20];
            sprintf(vol_str, "-%d.%d dB", vol_neg_int, vol_neg_frac);
            if (g_has_oled) {
                OLED_SetVolumeText(vol_str);
            }
        } else {
            encoderNum = newEncoder; // 菜单活动或按键事件期间，同步计数避免退出后音量突变
        }
        // if (!Headphone_IsInserted()) {
        //     cs43131_pcm_pop_free_power_down_external(0x30);
        //     cs43131_pcm_pop_free_power_down_external(0x31);
        // }
        if (DAPmode == 1) {
            usbd_hid_process();
        }

        /* 屏幕亮度任务：在主循环中推进对比度过渡 */
        if (g_has_oled) {
            OLED_BrightnessTask(&u8g2);
        }
    }
}

void SetDapMode (int mode) {
    DAPmode = mode;
    USBHS_Device_Init (DISABLE);
    if (mode == 0) {
        CPLD_FormatRec();
    } else {
        DAP_Setup();
    }
    USBHS_RCC_Init();
    USBHS_Device_Init (ENABLE);
}

void I2C_ScanBus(void)
{
    printf("Scanning I2C bus...\r\n");
    g_has_oled = false; // 初始化屏幕标记为未检测到
    for (uint8_t adr7 = 2; adr7 < 0x7F; ++adr7) {
        uint8_t devAddr8 = (uint8_t)(adr7 << 1);
        uint32_t timeout = 0;
        // Wait if bus busy
        while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET) {
            if (++timeout > 100000) { IIC_reset(); break; }
        }
        I2C_GenerateSTART(I2C1, ENABLE);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            if (++timeout > 100000) { IIC_reset(); goto next_addr; }
        }
        I2C_Send7bitAddress(I2C1, devAddr8, I2C_Direction_Transmitter);
        timeout = 0;
        // 如果设备应答，且选择了发送模式
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) {
            if (++timeout > 5000) { goto next_addr; }
        }
        printf("I2C device found at 7-bit 0x%02X (8-bit 0x%02X)\r\n", adr7, devAddr8);
        if (adr7 == 0x3C) {
            g_has_oled = true; // 记录检测到屏幕
        }
    next_addr:
        I2C_GenerateSTOP(I2C1, ENABLE);
        Delay_Us(200);
    }
    printf("I2C scan complete.\r\n");
}
