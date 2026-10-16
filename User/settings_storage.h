#ifndef __SETTINGS_STORAGE_H__
#define __SETTINGS_STORAGE_H__

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Flash 存储配置（回退到原始单页方案）
#define SETTINGS_STORAGE_PAGE_SIZE    4096        // CH32V307 Flash 页大小 4KB
#define SETTINGS_STORAGE_BASE_ADDR    0x08020000  // 使用 Flash 末尾区域存储设置
#define SETTINGS_MAGIC_NUMBER         0x41554443  // "AUDC" 魔数，用于验证数据有效性

// 默认音量值（Flash 数据无效时使用）
#define SETTINGS_DEFAULT_VOLUME       0xF0        // -120dB

// 全局设置存储结构体（包含音量 + 菜单设置）
// balance 占用原 3 字节尾填充之一（偏移 9），sizeof 仍为 16；旧固件保存时该字节
// 被 memset 清零，恰为“居中”值 0，因此旧 Flash 数据无需失效重置即可平滑升级。
// balance 刻意不纳入 checksum：纳入会使全部旧存量设置校验失败被重置。
typedef struct {
    uint32_t magic;             // 魔数 "AUDC"，用于验证数据有效性
    uint8_t volume_value;       // 音量值 (0x00-0xFE, 每步0.5dB)
    uint8_t filter_opt;         // PCM Filter Option 寄存器 (0x90000) 完整值
    uint8_t hp_amp_mode;        // 耳放模式: 0=Class H, 1=Class AB
    uint8_t hp_full_scale;      // 耳机满幅输出: 0=0.5Vr, 1=1.0Vr, 2=1.4Vr, 3=1.73Vr, 4=2.0Vr
    uint8_t mck_div2;           // MCLK 二分频: 0=晶振直出(默认)，1=÷2 标称（CPLD v4+）
    int8_t  balance;            // 左右 DAC 音量平衡: 0=居中，>0 偏左，<0 偏右（每步0.5dB）
    uint32_t checksum;          // 校验和
} settings_storage_t;

// 函数声明
bool settings_storage_init(void);
bool settings_storage_is_valid(void);
bool settings_storage_load(settings_storage_t *out);
bool settings_storage_save(const settings_storage_t *data);

// 读取当前 DAC 状态并保存所有设置到 Flash
bool settings_storage_save_current(void);

#ifdef __cplusplus
}
#endif

#endif /* __SETTINGS_STORAGE_H__ */
