#include "settings_storage.h"
#include "debug.h"
#include "ch32v30x_flash.h"
#include "ch32v30x_conf.h"
#include "ch32v30x_rcc.h"
#include "cs43131.h"
#include <string.h>


// 计算校验和（包含所有设置字段）
// 字段位分配：volume=bit7:0，filter=bit15:8，amp=bit16（0/1），fs=bit26:24（0-4），
// mck_div2=bit27（0/1；bit31:27 空闲，与现有字段不重叠）
static uint32_t calculate_checksum(const settings_storage_t *data)
{
    uint32_t checksum = 0;
    checksum ^= data->magic;
    checksum ^= (uint32_t)data->volume_value;
    checksum ^= (uint32_t)data->filter_opt << 8;
    checksum ^= (uint32_t)data->hp_amp_mode << 16;
    checksum ^= (uint32_t)data->hp_full_scale << 24;
    checksum ^= (uint32_t)data->mck_div2 << 27;
    return checksum;
}

// 初始化设置存储模块（解锁 Flash）
bool settings_storage_init(void)
{
    FLASH_Unlock();
    return true;
}

// 检查存储的数据是否有效（三重验证：魔数 + 范围 + 校验和）
bool settings_storage_is_valid(void)
{
    const settings_storage_t *stored_data = (const settings_storage_t *)SETTINGS_STORAGE_BASE_ADDR;

    // 检查魔数
    if (stored_data->magic != SETTINGS_MAGIC_NUMBER) {
        return false;
    }

    // 检查音量值范围 (0x00-0xFE)
    if (stored_data->volume_value > 0xFE) {
        return false;
    }

    // 检查耳放模式范围 (0=Class H, 1=Class AB)
    if (stored_data->hp_amp_mode > 1) {
        return false;
    }

    // 检查耳机满幅输出范围 (0-4)
    if (stored_data->hp_full_scale > 4) {
        return false;
    }

    // 检查 MCLK 二分频范围 (0/1)。旧版固件存储的 mck_div2 位置是旧 checksum
    // 的首字节（任意值）或擦除态 0xFF，此处与 checksum 双重兜底使旧数据失效回默认。
    if (stored_data->mck_div2 > 1) {
        return false;
    }

    // 检查音量平衡范围（balance 不纳入 checksum；超范围视为数据损坏整体回默认）
    if (stored_data->balance > CS43131_BALANCE_MAX_STEPS ||
        stored_data->balance < -CS43131_BALANCE_MAX_STEPS) {
        return false;
    }

    // 检查校验和
    uint32_t calculated_checksum = calculate_checksum(stored_data);
    if (stored_data->checksum != calculated_checksum) {
        return false;
    }

    return true;
}

// 从 Flash 加载设置数据
bool settings_storage_load(settings_storage_t *out)
{
    if (!out) return false;

    if (!settings_storage_is_valid()) {
        printf("Settings storage: Invalid data, using defaults\r\n");
        // 填充默认值
        out->magic = SETTINGS_MAGIC_NUMBER;
        out->volume_value = SETTINGS_DEFAULT_VOLUME;
        out->filter_opt = 0x80;     // FILTER_SLOW_FASTB = 1 (Slow)，与启动默认一致
        out->hp_amp_mode = 0;       // Class H
        out->hp_full_scale = 3;     // 1.732Vrms
        out->mck_div2 = 0;          // MCLK 晶振直出（实测听感更优的默认）
        out->balance = 0;           // 左右平衡居中
        out->checksum = 0;
        return false;
    }

    const settings_storage_t *stored_data = (const settings_storage_t *)SETTINGS_STORAGE_BASE_ADDR;
    *out = *stored_data;

    printf("Settings storage: Loaded vol=0x%02X(%.1fdB) filter=0x%02X hp_mode=%d hp_fs=%d mck_div2=%d balance=%d\r\n",
           out->volume_value, -(float)out->volume_value * 0.5f,
           out->filter_opt, out->hp_amp_mode, out->hp_full_scale, out->mck_div2, out->balance);

    return true;
}

// 保存设置数据到 Flash
bool settings_storage_save(const settings_storage_t *data)
{
    FLASH_Status status;

    if (!data) return false;

    // 检查音量值范围
    if (data->volume_value > 0xFE) {
        printf("Settings storage: Invalid volume value 0x%02X\r\n", data->volume_value);
        return false;
    }

    // 准备要写入的数据，自动计算校验和。
    // memset 清零消除尾填充脏字节（mck_div2 加入后 sizeof=16，含 3 字节填充）
    settings_storage_t data_to_write;
    memset(&data_to_write, 0, sizeof(data_to_write));
    data_to_write.magic = SETTINGS_MAGIC_NUMBER;
    data_to_write.volume_value = data->volume_value;
    data_to_write.filter_opt = data->filter_opt;
    data_to_write.hp_amp_mode = data->hp_amp_mode;
    data_to_write.hp_full_scale = data->hp_full_scale;
    data_to_write.mck_div2 = (data->mck_div2 > 1) ? 1 : data->mck_div2;
    // balance 钳位（超范围拒绝写入越界值，而非整体失败）
    data_to_write.balance = (data->balance > CS43131_BALANCE_MAX_STEPS) ? CS43131_BALANCE_MAX_STEPS :
                            (data->balance < -CS43131_BALANCE_MAX_STEPS) ? -CS43131_BALANCE_MAX_STEPS :
                            data->balance;
    data_to_write.checksum = calculate_checksum(&data_to_write);

    // 运行时检查页对齐
    if ((SETTINGS_STORAGE_BASE_ADDR % SETTINGS_STORAGE_PAGE_SIZE) != 0) {
        printf("Settings storage: Base address 0x%08lX not page aligned\r\n", SETTINGS_STORAGE_BASE_ADDR);
        return false;
    }

    // 关键区执行：擦/写期间降频以减少对中断的干扰
    RCC->CFGR0 |= (uint32_t)RCC_HPRE_DIV4;

    FLASH_Unlock();
    status = FLASH_ErasePage(SETTINGS_STORAGE_BASE_ADDR);
    if (status == FLASH_COMPLETE) {
        uint32_t *src_ptr = (uint32_t *)&data_to_write;
        uint32_t write_addr = SETTINGS_STORAGE_BASE_ADDR;
        for (int i = 0; i < (int)(sizeof(settings_storage_t) / 4); i++) {
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
        printf("Settings storage: Flash op failed, last status = %d\r\n", status);
        return false;
    }

    // 验证写入的数据
    if (!settings_storage_is_valid()) {
        printf("Settings storage: Verification failed after write\r\n");
        return false;
    }

    printf("Settings storage: Saved vol=0x%02X(%.1fdB) filt=0x%02X hp_m=%d hp_fs=%d\r\n",
           data_to_write.volume_value, -(float)data_to_write.volume_value * 0.5f,
           data_to_write.filter_opt, data_to_write.hp_amp_mode, data_to_write.hp_full_scale);

    return true;
}

// 读取当前 DAC 状态并保存所有设置到 Flash
bool settings_storage_save_current(void)
{
    settings_storage_t data;

    // 读取当前 PCM Filter Option 寄存器值（从 DAC 0x30）
    uint8_t filter_val = 0;
    if (cs43131_get_pcm_filter_opt(0x30, &filter_val) != 0) {
        printf("Settings storage: Failed to read filter opt from DAC\r\n");
        return false;
    }

    // 读取当前耳放模式
    cs43131_hp_amp_mode_t amp_mode;
    if (cs43131_get_hp_amp_mode(&amp_mode) != 0) {
        printf("Settings storage: Failed to read HP amp mode\r\n");
        return false;
    }

    // 读取当前耳机满幅输出
    cs43131_hp_full_scale_t full_scale;
    if (cs43131_get_hp_full_scale(&full_scale) != 0) {
        printf("Settings storage: Failed to read HP full scale\r\n");
        return false;
    }

    // 填充数据（音量值由调用方通过外部变量 g_volume_pending 提供）
    // 注意：此函数需要配合 g_volume_pending 全局变量使用
    extern volatile uint8_t g_volume_pending;
    extern volatile uint8_t g_cpld_mck_div2;  // MCLK ÷2 当前状态（ch32v30x_spi_device.c）

    data.magic = SETTINGS_MAGIC_NUMBER;
    data.volume_value = g_volume_pending;
    data.filter_opt = filter_val;
    data.hp_amp_mode = (uint8_t)amp_mode;
    data.hp_full_scale = (uint8_t)full_scale;
    data.mck_div2 = g_cpld_mck_div2 ? 1 : 0;
    data.balance = cs43131_get_balance();

    return settings_storage_save(&data);
}
