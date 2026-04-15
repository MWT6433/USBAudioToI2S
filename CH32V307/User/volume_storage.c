#include "volume_storage.h"
#include "debug.h"
#include "ch32v30x_flash.h"
#include "ch32v30x_conf.h"
#include "ch32v30x_rcc.h"


// 默认音量值
#define DEFAULT_VOLUME_VALUE    0xF0    // -120dB

// 计算校验和
static uint32_t calculate_checksum(const volume_storage_t *data)
{
    uint32_t checksum = 0;
    checksum ^= data->magic;
    checksum ^= (uint32_t)data->volume_value;
    checksum ^= (uint32_t)data->reserved[0] << 8;
    checksum ^= (uint32_t)data->reserved[1] << 16;
    checksum ^= (uint32_t)data->reserved[2] << 24;
    return checksum;
}

// 初始化音量存储模块
bool volume_storage_init(void)
{
    // 解锁 Flash
    FLASH_Unlock();
    return true;
}

// 检查存储的数据是否有效
bool volume_storage_is_valid(void)
{
    const volume_storage_t *stored_data = (const volume_storage_t *)VOLUME_STORAGE_BASE_ADDR;
    
    // 检查魔数
    if (stored_data->magic != VOLUME_MAGIC_NUMBER) {
        return false;
    }
    
    // 检查音量值范围
    if (stored_data->volume_value > 0xFE) {
        return false;
    }
    
    // 检查校验和
    uint32_t calculated_checksum = calculate_checksum(stored_data);
    if (stored_data->checksum != calculated_checksum) {
        return false;
    }
    
    return true;
}

// 从 Flash 读取音量值
uint8_t volume_storage_load(void)
{
    if (!volume_storage_is_valid()) {
        printf("Volume storage: Invalid data, using default volume\r\n");
        return DEFAULT_VOLUME_VALUE;
    }
    
    const volume_storage_t *stored_data = (const volume_storage_t *)VOLUME_STORAGE_BASE_ADDR;
    printf("Volume storage: Loaded volume = 0x%02X (%.1f dB)\r\n", 
           stored_data->volume_value, -(float)stored_data->volume_value * 0.5f);
    
    return stored_data->volume_value;
}

// 保存音量值到 Flash
bool volume_storage_save(uint8_t volume)
{
    FLASH_Status status;
    
    // 检查音量值范围
    if (volume > 0xFE) {
        printf("Volume storage: Invalid volume value 0x%02X\r\n", volume);
        return false;
    }

    // 准备要写入的数据
    volume_storage_t data_to_write;
    data_to_write.magic = VOLUME_MAGIC_NUMBER;
    data_to_write.volume_value = volume;
    data_to_write.reserved[0] = 0;
    data_to_write.reserved[1] = 0;
    data_to_write.reserved[2] = 0;
    data_to_write.checksum = calculate_checksum(&data_to_write);
    
    // 运行时检查页对齐
    if ((VOLUME_STORAGE_BASE_ADDR % VOLUME_STORAGE_PAGE_SIZE) != 0) {
        printf("Volume storage: Base address 0x%08lX not page aligned\r\n", VOLUME_STORAGE_BASE_ADDR);
        return false;
    }

    // 关键区执行：擦/写期间屏蔽中断并加入内存屏障，限制优化影响
    RCC->CFGR0 |= (uint32_t)RCC_HPRE_DIV4;

    FLASH_Unlock();
    status = FLASH_ErasePage(VOLUME_STORAGE_BASE_ADDR);
    if (status == FLASH_COMPLETE) {
        uint32_t *src_ptr = (uint32_t *)&data_to_write;
        uint32_t write_addr = VOLUME_STORAGE_BASE_ADDR;
        for (int i = 0; i < (int)(sizeof(volume_storage_t) / 4); i++) {
            status = FLASH_ProgramWord(write_addr, src_ptr[i]);
            if (status != FLASH_COMPLETE) {
                break;
            }
            write_addr += 4;
        }
    }

    FLASH_Lock();
    RCC->CFGR0 &= ~(uint32_t)RCC_HPRE_DIV4;

    if (status != FLASH_COMPLETE) {
        printf("Volume storage: Flash op failed, last status = %d\r\n", status);
        return false;
    }
    
    // 验证写入的数据
    if (!volume_storage_is_valid()) {
        printf("Volume storage: Verification failed after write\r\n");
        return false;
    }
    
    printf("Volume storage: Saved volume = 0x%02X (%.1f dB)\r\n", 
           volume, -(float)volume * 0.5f);
    
    return true;
}