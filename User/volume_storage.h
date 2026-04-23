#ifndef __VOLUME_STORAGE_H__
#define __VOLUME_STORAGE_H__

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Flash 存储配置
#define VOLUME_STORAGE_PAGE_SIZE    1024        // CH32V307 Flash 页大小 1KB
#define VOLUME_STORAGE_BASE_ADDR    0x08020000  // 使用 Flash 末尾区域存储音量
#define VOLUME_MAGIC_NUMBER         0x564F4C55  // "VOLU" 魔数，用于验证数据有效性

// 音量存储结构体
typedef struct {
    uint32_t magic;         // 魔数，用于验证数据有效性
    uint8_t volume_value;   // 音量值 (0x00-0xFE)
    uint8_t reserved[3];    // 保留字节，用于对齐
    uint32_t checksum;      // 校验和
} volume_storage_t;

// 函数声明
bool volume_storage_init(void);
bool volume_storage_save(uint8_t volume);
uint8_t volume_storage_load(void);
bool volume_storage_is_valid(void);

#ifdef __cplusplus
}
#endif

#endif /* __VOLUME_STORAGE_H__ */