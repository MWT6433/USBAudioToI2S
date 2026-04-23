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
#include "volume_storage.h"
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

void Audioinit() {
    printf ("LLT USB Audio To I2S\r\n");
    printf ("Firmware version: %d, Datetime: %s-%s\r\n", PROGRAM_VERSION, __DATE__, __TIME__);
    printf ("System clk:%d\r\n", SystemCoreClock);
    printf ("Chip ID:%08x\r\n", DBGMCU_GetCHIPID());

    // Init SPI
    SPI_Device_Init();

    // Init CPLD
    uint8_t cpld_version;
    if (!CPLD_GetStatus (&cpld_version)) {
        SetDapMode(1);
        printf ("CPLD initialization failed!");
        SetDapMode(1);
        LED_Set(1);
        // hang ("CPLD initialization failed!");
    }else SetDapMode(0);
    printf ("CPLD firmware version:%d\r\n", cpld_version);
    printf ("==================READY==================\r\n");

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
}


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

    Audioinit();

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

    // 初始化音量存储模块
    volume_storage_init();


    // // Scan I2C bus to discover connected device addresses (7-bit)
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

    
    // 音量控制变量
    // CS43131 音量范围：0x00=0dB, 0xFF=-127.5dB (每步0.5dB)
    // 从 Flash 读取保存的音量值，如果无效则使用默认值 -120dB (0xF0)
    uint8_t current_volume = volume_storage_load();
    int encoderNum = 0;
    int newEncoder = 0;
    uint32_t last_ui_refresh_ms = 0;
    uint8_t last_key_event = 0xFF;
    uint8_t last_key_pressed = 0xFF;
    uint8_t last_menu_active = 0xFF;
    int last_encoder_for_ui = 0x7FFFFFFF;
    
    // 设置初始音量
    cs43131_set_pcm_volume(0x30, current_volume, current_volume, true);
    cs43131_set_pcm_volume(0x31, current_volume, current_volume, true);
    
    // cs43131_dump_status(0x30);
    // cs43131_dump_status(0x31);
    // 根据当前耳机插入状态初始化耳放供电与静音
    Headphone_Update();
    
    while (1) {
        Headphone_Update();
        uint8_t key_event = KEY_GetEvent();
        // if (key_event == 2) { // EVENT_DOUBLE = 2
        //     if(DAPmode == 1){
        //         SetDapMode(0);
        //         LED_Set (0);
        //     }else{
        //         SetDapMode(1);
        //         LED_Set(1);
        //     }

        // }
        
        newEncoder = GetEncoder();
        uint8_t key_pressed = KEY_IsPressed();
        uint8_t ui_active = Menu_IsActive();
        uint32_t now_ms = SysTick_ms;
        uint8_t need_ui_refresh = 0;

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
        }

        if (ui_active==0 && key_pressed==0 && key_event==0 && encoderNum != newEncoder) {
            int volume_change = newEncoder - encoderNum;
            encoderNum = newEncoder;

            int new_volume = (int)current_volume + volume_change;
            if (new_volume < 0x00) new_volume = 0x00;
            if (new_volume > 0xFE) new_volume = 0xFE;
            current_volume = (uint8_t)new_volume;

            cs43131_set_pcm_volume(0x30, current_volume, current_volume, true);
            cs43131_set_pcm_volume(0x31, current_volume, current_volume, true);

            g_volume_pending = current_volume;
            g_volume_modified_flag = 1;

            float volume_db = -(float)current_volume * 0.5f;
            printf("Volume = %.1f dB (0x%02X) [Pending save]\r\n", volume_db, current_volume);

            char vol_str[20];
            sprintf(vol_str, "%.1f dB", volume_db);
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
        // If device ACKs, transmitter mode selected
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
