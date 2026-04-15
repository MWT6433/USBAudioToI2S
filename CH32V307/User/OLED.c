#include "OLED.h"
#include "u8g2.h"
#include "u8x8.h"
#include "cs43131.h"
#include <stdint.h>
#include <string.h>
extern volatile uint32_t system_tick;
extern volatile int DAPmode;
extern void SetDapMode(int mode);

#define SCREEN_IDLE_TIMEOUT_TICKS 500
#define BRIGHTNESS_ACTIVE         255
#define BRIGHTNESS_DIM            1
#define BRIGHTNESS_STEP_UP_PER_TICK   10
#define BRIGHTNESS_STEP_DOWN_PER_TICK 6
#define MENU_ANIMATION_ENABLE 0

static uint8_t  s_brightness_curr   = BRIGHTNESS_ACTIVE;
static uint8_t  s_brightness_target = BRIGHTNESS_ACTIVE;
static uint32_t s_last_update_tick  = 0;
static uint32_t s_last_step_tick    = 0;
static char s_vol_text[24] = {0};
static uint8_t s_ui_state = 0;
static uint32_t s_last_tick = 0;
static u8g2_uint_t s_w = 0;
static u8g2_uint_t s_h = 0;
static u8g2_uint_t s_rad = 0;
static u8g2_uint_t s_cy = 0;
static int32_t s_arc_cx = 0;
static int32_t s_menu_slide = 0;
static int32_t s_arc_speed = 6;
static int32_t s_menu_speed = 6;
static int s_selected = 0;
static int s_last_encoder = 0;
enum {
    MENU_ITEM_FILTER_FS = 0,
    MENU_ITEM_FILTER_LATPH,
    MENU_ITEM_FILTER_HPF,
    MENU_ITEM_FILTER_WBF,
    MENU_ITEM_FILTER_NOS,
#if !CS43131_USE_EXTERNAL_VCPFILT
    MENU_ITEM_HP_CLASS,
    MENU_ITEM_HP_FS,
#endif
    MENU_ITEM_DAP,
    MENU_ITEM_EXIT
};

#define MENU_ITEM_COUNT (MENU_ITEM_EXIT + 1)

static const char* s_items[MENU_ITEM_COUNT] = {
    "F/S",
    "Lat/Ph",
    "HPF",
    "WBF",
    "NOS",
#if !CS43131_USE_EXTERNAL_VCPFILT
    "Class",
    "HP FS",
#endif
    "DAP",
    "Exit"
};
static u8g2_uint_t s_sel_w_curr = 0;
static u8g2_uint_t s_sel_w_target = 0;
static u8g2_uint_t s_sel_y_curr = 0;
static u8g2_uint_t s_sel_y_target = 0;
static uint8_t s_page_state = 0;
static uint8_t s_page_phase = 0;
static u8g2_uint_t s_title_x_curr = 0;
static u8g2_uint_t s_title_x_target = 0;
static u8g2_uint_t s_title_y_curr = 0;
static u8g2_uint_t s_title_y_target = 0;
static u8g2_uint_t s_cont_x_curr = 0;
static u8g2_uint_t s_cont_y_curr = 0;
static u8g2_uint_t s_cont_w_curr = 0;
static u8g2_uint_t s_cont_h_curr = 0;
static u8g2_uint_t s_cont_x_target = 0;
static u8g2_uint_t s_cont_y_target = 0;
static u8g2_uint_t s_cont_w_target = 0;
static u8g2_uint_t s_cont_h_target = 0;

static const char* menu_get_hp_mode_status(void)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return "";
#else
    cs43131_hp_amp_mode_t mode = CS43131_HP_AMP_MODE_CLASS_H;
    if (cs43131_get_hp_amp_mode(&mode) != 0) return "--";
    return (mode == CS43131_HP_AMP_MODE_CLASS_AB) ? "AB" : "H";
#endif
}

static const char* menu_get_hp_fs_status(void)
{
#if CS43131_USE_EXTERNAL_VCPFILT
    return "";
#else
    cs43131_hp_full_scale_t fs = CS43131_HP_FS_1P732VRMS;
    if (cs43131_get_hp_full_scale(&fs) != 0) return "--";
    switch (fs) {
        case CS43131_HP_FS_0P5VRMS: return "0.5Vr";
        case CS43131_HP_FS_1P0VRMS: return "1.0Vr";
        case CS43131_HP_FS_1P4VRMS: return "1.4Vr";
        case CS43131_HP_FS_1P732VRMS: return "1.73V";
        case CS43131_HP_FS_2P0VRMS: return "2.0Vr";
        default: return "--";
    }
#endif
}

static void menu_fill_status_strings(const char **status_strs, uint8_t vstat)
{
    status_strs[MENU_ITEM_FILTER_FS] = (vstat & CS43131_FILTER_SLOW_FASTB) ? "Slow" : "Fast";
    status_strs[MENU_ITEM_FILTER_LATPH] = (vstat & CS43131_PHCOMP_LOWLATB) ? "Phase" : "Latency";
    status_strs[MENU_ITEM_FILTER_HPF] = (vstat & CS43131_HIGH_PASS) ? "Enable" : "Disable";
    status_strs[MENU_ITEM_FILTER_WBF] = (vstat & CS43131_PCM_WBF_EN) ? "On" : "Off";
    status_strs[MENU_ITEM_FILTER_NOS] = (vstat & CS43131_NOS) ? "On" : "Off";
#if !CS43131_USE_EXTERNAL_VCPFILT
    status_strs[MENU_ITEM_HP_CLASS] = menu_get_hp_mode_status();
    status_strs[MENU_ITEM_HP_FS] = menu_get_hp_fs_status();
#endif
    status_strs[MENU_ITEM_DAP] = (DAPmode != 0) ? "On" : "Off";
    status_strs[MENU_ITEM_EXIT] = "";
}

static void menu_apply_item(int item)
{
    if (item == MENU_ITEM_DAP) {
        /* 通过菜单项切换 USB 工作模式：0=Audio(CPLD), 1=DAP */
        SetDapMode((DAPmode == 0) ? 1 : 0);
        return;
    }

#if !CS43131_USE_EXTERNAL_VCPFILT
    if (item == MENU_ITEM_HP_CLASS) {
        (void)cs43131_cycle_hp_amp_mode_both();
        return;
    }
    if (item == MENU_ITEM_HP_FS) {
        (void)cs43131_cycle_hp_full_scale_both();
        return;
    }
#endif

    (void)cs43131_mute_both_channels(0x30);
    (void)cs43131_mute_both_channels(0x31);
    switch (item) {
        case MENU_ITEM_FILTER_FS: (void)cs43131_toggle_filter_bit_both(CS43131_FILTER_SLOW_FASTB); break;
        case MENU_ITEM_FILTER_LATPH: (void)cs43131_toggle_filter_bit_both(CS43131_PHCOMP_LOWLATB); break;
        case MENU_ITEM_FILTER_HPF: (void)cs43131_toggle_filter_bit_both(CS43131_HIGH_PASS); break;
        case MENU_ITEM_FILTER_WBF: (void)cs43131_toggle_filter_bit_both(CS43131_PCM_WBF_EN); break;
        case MENU_ITEM_FILTER_NOS: (void)cs43131_toggle_filter_bit_both(CS43131_NOS); break;
        default: break;
    }
    (void)cs43131_unmute_both_channels(0x30);
    (void)cs43131_unmute_both_channels(0x31);
}

void OLED_BrightnessInit(u8g2_t *u8g2)
{
    s_brightness_curr   = BRIGHTNESS_ACTIVE;
    s_brightness_target = BRIGHTNESS_ACTIVE;
    s_last_update_tick  = system_tick;
    s_last_step_tick    = system_tick;
    u8g2_SetContrast(u8g2, s_brightness_curr);
}

void OLED_MarkUpdated(void)
{
    s_last_update_tick  = system_tick;
    s_brightness_target = BRIGHTNESS_ACTIVE;
}

void OLED_BrightnessTask(u8g2_t *u8g2)
{
    uint32_t now = system_tick;
    if ((now - s_last_update_tick) >= SCREEN_IDLE_TIMEOUT_TICKS) {
        s_brightness_target = BRIGHTNESS_DIM;
    }
    uint32_t dt = now - s_last_step_tick;
    if (dt == 0) return;
    s_last_step_tick = now;
    int32_t diff = (int32_t)s_brightness_target - (int32_t)s_brightness_curr;
    if (diff == 0) return;
    int32_t step = (diff > 0)
        ? (int32_t)(BRIGHTNESS_STEP_UP_PER_TICK) * (int32_t)dt
        : -(int32_t)(BRIGHTNESS_STEP_DOWN_PER_TICK) * (int32_t)dt;
    int32_t newv = (int32_t)s_brightness_curr + step;
    if (diff > 0 && newv > (int32_t)s_brightness_target) newv = s_brightness_target;
    if (diff < 0 && newv < (int32_t)s_brightness_target) newv = s_brightness_target;
    s_brightness_curr = (uint8_t)newv;
    u8g2_SetContrast(u8g2, s_brightness_curr);
}

uint8_t u8x8_byte_hw_i2c (u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr) {
    /* u8g2/u8x8 will never send more than 32 bytes between START_TRANSFER and END_TRANSFER */
    uint8_t *data = (uint8_t *)arg_ptr;
    uint16_t timeoutI2c = 1000;
    switch (msg) {
    case U8X8_MSG_BYTE_INIT: {
        /* add your custom code to init i2c subsystem */
        // IIC_Init (100000, 0x78);  // I2C��ʼ��
    } break;

    case U8X8_MSG_BYTE_START_TRANSFER:
I2CSATAR:
        while (I2C_GetFlagStatus (I2C1, I2C_FLAG_BUSY) != RESET) {
            timeoutI2c--;
            if (timeoutI2c <= 0) {
                IIC_reset();
                timeoutI2c = 1000;
                goto I2CSATAR;
            }
        };
        I2C_GenerateSTART (I2C1, ENABLE);
        while (!I2C_CheckEvent (I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            timeoutI2c--;
            if (timeoutI2c <= 0) {
                IIC_reset();
                timeoutI2c = 1000;
                goto I2CSATAR;
            }
        };
        I2C_Send7bitAddress (I2C1, 0x78, I2C_Direction_Transmitter);
        while (!I2C_CheckEvent (I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) {
            timeoutI2c--;
            if (timeoutI2c <= 0) {
                IIC_reset();
                timeoutI2c = 1000;
                goto I2CSATAR;
            }
        };
        break;

    case U8X8_MSG_BYTE_SEND:
        while (arg_int-- > 0) {
            I2C_SendData (I2C1, *data++);
            while (!I2C_CheckEvent (I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));
        }
        break;

    case U8X8_MSG_BYTE_END_TRANSFER:
        I2C_GenerateSTOP (I2C1, ENABLE);
        break;

    case U8X8_MSG_BYTE_SET_DC:
        break;

    default:
        return 0;
    }

    return 1;
}

// �ṩ������ģ�� I2C �� GPIO �������ʱ��ʹ��֮ǰ��д�����ú���
uint8_t u8x8_gpio_and_delay (u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr) {
    // switch (msg)
    // {
    //     case U8X8_MSG_GPIO_AND_DELAY_INIT:    // called once during init phase of u8g2/u8x8
    //         Delay_Init();
    //         break;                            // can be used to setup pins

    //  case U8X8_MSG_DELAY_100NANO:          // delay arg_int * 100 nano seconds
    //      __NOP();
    //      break;

    //  case U8X8_MSG_DELAY_10MICRO:          // delay arg_int * 10 micro seconds
    //      for (uint16_t n = 0; n < 320; n++)
    //      {
    //          __NOP();
    //      }
    //      break;

    //  case U8X8_MSG_DELAY_MILLI:    // delay arg_int * 1 milli second
    //      Delay_Ms(1);
    //      break;

    //  case U8X8_MSG_DELAY_I2C:      // arg_int is the I2C speed in 100KHz, e.g. 4 = 400 KHz
    //      Delay_Us(1);
    //      break;                    // arg_int=1: delay by 5us, arg_int = 4: delay by 1.25us

    //  case U8X8_MSG_GPIO_I2C_CLOCK: // arg_int=0: Output low at I2C clock pin
    //      // arg_int ? GPIO_SetBits(GPIOE, GPIO_Pin_0) : GPIO_ResetBits(GPIOE, GPIO_Pin_0);
    //      break;                    // arg_int=1: Input dir with pullup high for I2C clock pin
    //  case U8X8_MSG_GPIO_I2C_DATA:  // arg_int=0: Output low at I2C data pin
    //      // arg_int ? GPIO_SetBits(GPIOB, GPIO_Pin_8) : GPIO_ResetBits(GPIOB, GPIO_Pin_8);
    //      break;                    // arg_int=1: Input dir with pullup high for I2C data pin
    //  case U8X8_MSG_GPIO_MENU_SELECT:
    //      u8x8_SetGPIOResult(u8x8, /* get menu select pin state */ 0);
    //      break;

    //  case U8X8_MSG_GPIO_MENU_NEXT:
    //      u8x8_SetGPIOResult(u8x8, /* get menu next pin state */ 0);
    //      break;

    //  case U8X8_MSG_GPIO_MENU_PREV:
    //      u8x8_SetGPIOResult(u8x8, /* get menu prev pin state */ 0);
    //      break;

    //  case U8X8_MSG_GPIO_MENU_HOME:
    //      u8x8_SetGPIOResult(u8x8, /* get menu home pin state */ 0);
    //      break;

    //  default:
    //      u8x8_SetGPIOResult(u8x8, 1); // default return value
    //      break;
    // }
    return 1;
}

void OLED_ShowRate (u8g2_t *u8g2) {
    char buf[20];
    u8g2_SetFont(u8g2, u8g2_font_5x8_mf);
    int ascent = u8g2_GetAscent(u8g2);
    int descent = u8g2_GetDescent(u8g2);
    int text_h = ascent - descent;
    uint8_t r = 2;
    uint8_t gap = 3;
    uint8_t y = 0;
    uint8_t h = 10;
    uint8_t x1 = 0;
    uint8_t w1 = 30;
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawRBox(u8g2, x1, y, w1, h, r);
    u8g2_SetDrawColor(u8g2, 0);
    sprintf(buf, "%dbit", g_current_bits);
    int tw_bits = u8g2_GetStrWidth(u8g2, buf);
    int tx_bits = x1 + (int)((w1 - tw_bits) / 2);
    int ty_base = y + (int)((h - text_h) / 2) + ascent+1;
    u8g2_DrawStr(u8g2, tx_bits, ty_base, buf);
    {
        uint32_t hz = g_current_rate_hz;
        int whole = (int)(hz / 1000u);
        int rem = (int)(hz % 1000u);
        int frac10 = (rem + 50) / 100;
        if (frac10 >= 10) { whole += 1; frac10 = 0; }
        if (frac10 == 0) {
            sprintf(buf, "%dkHz", whole);
        } else {
            sprintf(buf, "%d.%dkHz", whole, frac10);
        }
    }
    int tw_rate = u8g2_GetStrWidth(u8g2, buf);
    uint8_t w2 = (uint8_t)(tw_rate + 6);
    uint8_t x2 = (uint8_t)(x1 + w1 + gap);
    if (x2 + w2 > 128) w2 = 128 - x2;
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawRBox(u8g2, x2, y, w2, h, r);
    u8g2_SetDrawColor(u8g2, 0);
    int tx_rate = x2 + (int)((w2 - tw_rate) / 2);
    u8g2_DrawStr(u8g2, tx_rate, ty_base, buf);
    u8g2_SetDrawColor(u8g2, 1);
}

void OLED_ShowJackMode (u8g2_t *u8g2) {
    cs43131_jack_mode_t mode = Headphone_GetJackMode();
    if (mode == CS43131_JACK_MODE_NONE) return;

    const char *label = (mode == CS43131_JACK_MODE_44MM) ? "4.4mm" : "3.5mm";
    u8g2_SetFont(u8g2, u8g2_font_5x8_mf);
    int tw = u8g2_GetStrWidth(u8g2, label);
    int ascent = u8g2_GetAscent(u8g2);
    int descent = u8g2_GetDescent(u8g2);
    int text_h = ascent - descent;
    uint8_t r = 2;
    uint8_t y = 0;
    uint8_t h = 10;
    uint8_t pad = 6;
    uint8_t w = (uint8_t)(tw + pad);
    uint8_t x = 128 - w;
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawRBox(u8g2, x, y, w, h, r);
    u8g2_SetDrawColor(u8g2, 0);
    int tx = x + (int)((w - tw) / 2);
    int ty = y + (int)((h - text_h) / 2) + ascent + 1;
    u8g2_DrawStr(u8g2, tx, ty, label);
    u8g2_SetDrawColor(u8g2, 1);
}

void OLED_SetVolumeText(const char* text)
{
    if (!text) return;
    size_t n = strlen(text);
    if (n > sizeof(s_vol_text)-1) n = sizeof(s_vol_text)-1;
    memcpy(s_vol_text, text, n);
    s_vol_text[n] = '\0';
}

static int32_t step_to_target(int32_t curr, int32_t target, int32_t step)
{
#if MENU_ANIMATION_ENABLE
    if (curr < target) { curr += step; if (curr > target) curr = target; }
    else if (curr > target) { curr -= step; if (curr < target) curr = target; }
    return curr;
#else
    (void)curr;
    (void)step;
    return target;
#endif
}

void OLED_DrawMain(u8g2_t *u8g2)
{
    u8g2_SetFont(u8g2, u8g2_font_6x12_mr);
    u8g2_DrawStr(u8g2, 0, 35, s_vol_text);
    OLED_ShowRate(u8g2);
    OLED_ShowJackMode(u8g2);
}

void Menu_Init(u8g2_t *u8g2)
{
    s_w = u8g2_GetDisplayWidth(u8g2);
    s_h = u8g2_GetDisplayHeight(u8g2);
    s_rad = (u8g2_uint_t)(s_h/2);
    s_cy = (u8g2_uint_t)(s_h/2);
    s_ui_state = 0;
    s_last_tick = system_tick;
    s_arc_cx = (int32_t)(s_w + s_rad);
    s_menu_slide = (int32_t)s_w;
    s_selected = 0;
    s_last_encoder = 0;
    s_sel_w_curr = 0;
    s_sel_w_target = 0;
    s_sel_y_curr = (u8g2_uint_t)(s_h/2);
    s_sel_y_target = s_sel_y_curr;
    s_page_state = 0;
}

static void draw_arc(u8g2_t *u8g2, int32_t cx)
{
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawDisc(u8g2, (u8g2_uint_t)cx, s_cy, s_rad, U8G2_DRAW_ALL);
}

static void draw_overlay(u8g2_t *u8g2, int32_t cx)
{
    int32_t left = cx - (int32_t)s_rad;
    if (left < 0) left = 0;
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawBox(u8g2, (u8g2_uint_t)left, 0, (u8g2_uint_t)(s_w - left), s_h);
    if (cx >= 0 && cx <= (int32_t)(s_w + s_rad)) draw_arc(u8g2, cx);
}

static void draw_menu_items(u8g2_t *u8g2, int32_t slide)
{
    u8g2_SetFont(u8g2, u8g2_font_9x18_mf);
    int ascent = u8g2_GetAscent(u8g2);
    int descent = u8g2_GetDescent(u8g2);
    int text_h = ascent - descent;
    int gap = text_h + 9;
    int y_mid = (int)s_h/2;
    int y_top = y_mid - gap;
    int y_bot = y_mid + gap;
    int menu_offset = 4;
    y_top += menu_offset;
    y_mid += menu_offset;
    y_bot += menu_offset;
    int show_top, show_mid, show_bot;
    int sel_row; // 0:top, 1:mid, 2:bot
    if (s_selected <= 0) {
        show_top = 0; show_mid = 1; show_bot = 2; sel_row = 0;
    } else if (s_selected >= (MENU_ITEM_COUNT-1)) {
        show_top = MENU_ITEM_COUNT-3; show_mid = MENU_ITEM_COUNT-2; show_bot = MENU_ITEM_COUNT-1; sel_row = 2;
    } else {
        show_top = s_selected-1; show_mid = s_selected; show_bot = s_selected+1; sel_row = 1;
    }
    const char* t_top = s_items[show_top];
    const char* t_mid = s_items[show_mid];
    const char* t_bot = s_items[show_bot];
    uint8_t vstat = 0; (void)cs43131_get_pcm_filter_opt(0x30, &vstat);
    const char *status_strs[MENU_ITEM_COUNT];
    menu_fill_status_strings(status_strs, vstat);
    const char* t_sel = s_items[s_selected];
    int ml = 6;
    int tw_sel = u8g2_GetStrWidth(u8g2, t_sel);
    int pad_h = 8;
    s_sel_w_target = (u8g2_uint_t)(tw_sel + pad_h);
    u8g2_uint_t y_target = (sel_row==0)? (u8g2_uint_t)y_top : (sel_row==1)? (u8g2_uint_t)y_mid : (u8g2_uint_t)y_bot;
    s_sel_y_target = y_target;
    s_sel_w_curr = (u8g2_uint_t)step_to_target((int32_t)s_sel_w_curr, (int32_t)s_sel_w_target, 5);
    s_sel_y_curr = (u8g2_uint_t)step_to_target((int32_t)s_sel_y_curr, (int32_t)s_sel_y_target, 4);
    int sel_x0 = ml - (int)slide;
    int sel_y0 = (int)s_sel_y_curr - ascent - 3;
    u8g2_SetDrawColor(u8g2, 0);
    u8g2_DrawRBox(u8g2, (u8g2_uint_t)sel_x0, (u8g2_uint_t)sel_y0, s_sel_w_curr, (u8g2_uint_t)(text_h+6), 4);
    u8g2_SetDrawColor(u8g2, 1);
    int x_sel = ml + 2 - (int)slide;
    u8g2_DrawStr(u8g2, (u8g2_uint_t)x_sel, (u8g2_uint_t)(s_sel_y_curr + 1), t_sel);
    int x_stat_sel = sel_x0 + (int)s_sel_w_curr + 2;
    if (s_selected < MENU_ITEM_COUNT) {
        const char* stat = status_strs[s_selected];
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_stat_sel, (u8g2_uint_t)(s_sel_y_curr + 1), stat);
    }
    u8g2_SetDrawColor(u8g2, 0);
    int x_row = ml + 2 - (int)slide;
    if (sel_row != 0) u8g2_DrawStr(u8g2, (u8g2_uint_t)x_row, (u8g2_uint_t)y_top, t_top);
    if (sel_row != 1) u8g2_DrawStr(u8g2, (u8g2_uint_t)x_row, (u8g2_uint_t)y_mid, t_mid);
    if (sel_row != 2) u8g2_DrawStr(u8g2, (u8g2_uint_t)x_row, (u8g2_uint_t)y_bot, t_bot);
    u8g2_SetDrawColor(u8g2, 1);
}

static const char* s_page_items[] = {
    "F/S",
    "Lat/Ph",
    "HPF",
    "WBF",
    "NOS",
#if !CS43131_USE_EXTERNAL_VCPFILT
    "Class",
    "HP FS",
#endif
    "DAP",
    "Exit"
};
static int s_page_sel = 0;
static uint8_t s_filter_reg = 0;
static void Filter_ReadStatus(void)
{
    uint8_t v = 0;
    if (cs43131_get_pcm_filter_opt(0x30, &v) == 0) s_filter_reg = v;
}
static void draw_page(u8g2_t *u8g2)
{
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawBox(u8g2, 0, 0, s_w, s_h);
    u8g2_SetFont(u8g2, u8g2_font_9x18_mf);
    s_title_x_curr = (u8g2_uint_t)step_to_target((int32_t)s_title_x_curr, (int32_t)s_title_x_target, 6);
    s_title_y_curr = (u8g2_uint_t)step_to_target((int32_t)s_title_y_curr, (int32_t)s_title_y_target, 4);
    const char* title = s_items[MENU_ITEM_EXIT];
    u8g2_DrawStr(u8g2, s_title_x_curr, s_title_y_curr, title);
    s_cont_x_curr = (u8g2_uint_t)step_to_target((int32_t)s_cont_x_curr, (int32_t)s_cont_x_target, 6);
    s_cont_y_curr = (u8g2_uint_t)step_to_target((int32_t)s_cont_y_curr, (int32_t)s_cont_y_target, 6);
    s_cont_w_curr = (u8g2_uint_t)step_to_target((int32_t)s_cont_w_curr, (int32_t)s_cont_w_target, 8);
    s_cont_h_curr = (u8g2_uint_t)step_to_target((int32_t)s_cont_h_curr, (int32_t)s_cont_h_target, 8);
    u8g2_SetDrawColor(u8g2, 0);
    u8g2_DrawRBox(u8g2, s_cont_x_curr, s_cont_y_curr, s_cont_w_curr, s_cont_h_curr, 4);
    u8g2_SetDrawColor(u8g2, 1);
    int ascent = u8g2_GetAscent(u8g2);
    int descent = u8g2_GetDescent(u8g2);
    int text_h = ascent - descent;
    int gap = text_h + 7;
    int ml = (int)s_cont_x_curr + 6;
    int mr = 4;
    int area_top = (int)s_cont_y_curr + 8 + 4;
    int area_bot = area_top + gap;
    int show_top, show_bot;
    int sel_row; // 0:top, 1:bot
    int page_cnt = MENU_ITEM_COUNT;
    if (s_page_sel <= 0) { show_top = 0; show_bot = 1; sel_row = 0; }
    else if (s_page_sel >= page_cnt-1) { show_top = page_cnt-2; show_bot = page_cnt-1; sel_row = 1; }
    else { show_top = s_page_sel; show_bot = s_page_sel+1; sel_row = 0; }
    const char* t_top = s_page_items[show_top];
    const char* t_bot = s_page_items[show_bot];
    u8g2_uint_t w_full = (u8g2_uint_t)(s_cont_w_curr - 6 - mr);
    if (sel_row==0) {
        s_sel_w_target = w_full;
        s_sel_y_target = (u8g2_uint_t)(area_top + text_h);
    } else {
        s_sel_w_target = w_full;
        s_sel_y_target = (u8g2_uint_t)(area_bot + text_h);
    }
    s_sel_w_curr = (u8g2_uint_t)step_to_target((int32_t)s_sel_w_curr, (int32_t)s_sel_w_target, 5);
    s_sel_y_curr = (u8g2_uint_t)step_to_target((int32_t)s_sel_y_curr, (int32_t)s_sel_y_target, 4);
    u8g2_SetDrawColor(u8g2, 1);
    u8g2_DrawRBox(u8g2, (u8g2_uint_t)ml, (u8g2_uint_t)(s_sel_y_curr - ascent - 3), s_sel_w_curr, (u8g2_uint_t)(text_h+6), 4);
    // read filter status
    Filter_ReadStatus();
    const char *status_strs[MENU_ITEM_COUNT];
    menu_fill_status_strings(status_strs, s_filter_reg);
    int x_label_top = ml+2;
    int x_label_bot = ml+2;
    int x_stat_top = (int)(ml + w_full - 2 - u8g2_GetStrWidth(u8g2, status_strs[show_top]));
    int x_stat_bot = (int)(ml + w_full - 2 - u8g2_GetStrWidth(u8g2, status_strs[show_bot]));
    if (sel_row==0) {
        u8g2_SetDrawColor(u8g2, 0);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_label_top, (u8g2_uint_t)(s_sel_y_curr + 1), t_top);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_stat_top, (u8g2_uint_t)(s_sel_y_curr + 1), status_strs[show_top]);
        u8g2_SetDrawColor(u8g2, 1);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_label_bot, (u8g2_uint_t)(area_bot + text_h), t_bot);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_stat_bot, (u8g2_uint_t)(area_bot + text_h), status_strs[show_bot]);
    } else {
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_label_top, (u8g2_uint_t)(area_top + text_h), t_top);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_stat_top, (u8g2_uint_t)(area_top + text_h), status_strs[show_top]);
        u8g2_SetDrawColor(u8g2, 0);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_label_bot, (u8g2_uint_t)(s_sel_y_curr + 1), t_bot);
        u8g2_DrawStr(u8g2, (u8g2_uint_t)x_stat_bot, (u8g2_uint_t)(s_sel_y_curr + 1), status_strs[show_bot]);
    }
}

void Menu_UpdateAndDraw(u8g2_t *u8g2, uint8_t key_event, uint8_t key_pressed, int encoder_count)
{
    uint32_t now = system_tick;
    uint32_t dt = now - s_last_tick;
    if (dt == 0) {
        if (s_ui_state == 4) draw_overlay(u8g2, s_arc_cx);
        if (s_ui_state == 5) { u8g2_SetDrawColor(u8g2, 1); u8g2_DrawBox(u8g2, 0, 0, s_w, s_h); draw_menu_items(u8g2, 0); }
        if (s_page_state) draw_page(u8g2);
        return;
    }
    s_last_tick = now;
    if (s_page_state)
    {
        int delta = encoder_count - s_last_encoder;
        s_last_encoder = encoder_count;
        if (delta != 0) {
            s_page_sel += delta;
            if (s_page_sel < 0) s_page_sel = 0;
            if (s_page_sel > (MENU_ITEM_COUNT - 1)) s_page_sel = (MENU_ITEM_COUNT - 1);
        }
        draw_page(u8g2);
        if (key_event == 1) {
            if (s_page_sel == MENU_ITEM_EXIT && s_page_phase == 1) {
                s_page_phase = 2;
                int ascent = u8g2_GetAscent(u8g2);
                int descent = u8g2_GetDescent(u8g2);
                int text_h = ascent - descent;
                int ml = 6;
                s_title_x_target = (u8g2_uint_t)(ml + 2);
                s_title_y_target = s_sel_y_curr;
                s_cont_x_target = (u8g2_uint_t)ml;
                s_cont_y_target = (u8g2_uint_t)(s_sel_y_curr - ascent - 2);
                s_cont_w_target = s_sel_w_curr;
                s_cont_h_target = (u8g2_uint_t)(text_h + 4);
            } else if (s_page_phase == 1) {
                menu_apply_item(s_page_sel);
                Filter_ReadStatus();
            }
        }
        if (s_page_phase == 2) {
            if (s_title_x_curr == s_title_x_target && s_title_y_curr == s_title_y_target &&
                s_cont_x_curr == s_cont_x_target && s_cont_y_curr == s_cont_y_target &&
                s_cont_w_curr == s_cont_w_target && s_cont_h_curr == s_cont_h_target) {
                s_page_state = 0;
                s_page_phase = 0;
                s_ui_state = 5;
            }
        }
        return;
    }
    switch(s_ui_state)
    {
        case 0:
            // 关闭菜单动画：长按事件直接进入菜单页
            if (key_event == 3) {
                s_ui_state = 5;
                s_last_encoder = encoder_count;
                s_menu_slide = 0;
                s_arc_cx = 0;
            }
            break;
        case 1:
            s_arc_cx -= s_arc_speed * (int32_t)dt;
            if (s_arc_cx < (int32_t)s_w) s_arc_cx = (int32_t)s_w;
            draw_arc(u8g2, s_arc_cx);
            if (key_event == 3) {
                s_ui_state = 3;
            } else if (!key_pressed) {
                s_ui_state = 2;
            }
            break;
        case 2:
            s_arc_cx += s_arc_speed * (int32_t)dt;
            draw_arc(u8g2, s_arc_cx);
            if (s_arc_cx >= (int32_t)(s_w + s_rad)) s_ui_state = 0;
            break;
        case 3:
            s_arc_cx -= s_arc_speed * (int32_t)dt;
            draw_overlay(u8g2, s_arc_cx);
            if (s_arc_cx <= 0) s_arc_cx = 0;
            s_menu_slide -= s_menu_speed * (int32_t)dt;
            if (s_menu_slide < 0) s_menu_slide = 0;
            draw_menu_items(u8g2, s_menu_slide);
            if (s_arc_cx <= 0 && s_menu_slide == 0) s_ui_state = 5;
            break;
        case 5:
        {
            u8g2_SetDrawColor(u8g2, 1);
            u8g2_DrawBox(u8g2, 0, 0, s_w, s_h);
            int delta = encoder_count - s_last_encoder;
            s_last_encoder = encoder_count;
            if (delta != 0) {
                s_selected += delta;
                if (s_selected < 0) s_selected = 0;
                if (s_selected > (MENU_ITEM_COUNT-1)) s_selected = (MENU_ITEM_COUNT-1);
            }
            draw_menu_items(u8g2, 0);
            if (key_event == 1) {
                if (s_selected == MENU_ITEM_EXIT) {
                    // 关闭菜单动画：选择 Exit 后直接返回主界面
                    s_ui_state = 0;
                } else {
                    menu_apply_item(s_selected);
                }
            }
        }
            break;
        case 4:
            s_arc_cx += s_arc_speed * (int32_t)dt;
            draw_overlay(u8g2, s_arc_cx);
            if (s_arc_cx >= (int32_t)(s_w + s_rad)) s_ui_state = 0;
            break;
    }
}

uint8_t Menu_IsActive(void)
{
    return (s_ui_state != 0 || s_page_state != 0) ? 1 : 0;
}
