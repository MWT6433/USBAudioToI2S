#include "ch32v30x_spi.h"
#include "ch32v30x_spi_device.h"
#include "app_config.h"
#if BOARD_HAS_SI5351
#include "si5351a_revb_reg_config.h"
#endif
#include "cs43131.h"


uint8_t pending_format = 0;
uint8_t format_now = 0;

uint8_t SPI_SendData(uint8_t data)
{
    uint8_t res = 0;
    GPIO_WriteBit(GPIOA, GPIO_Pin_5, Bit_RESET);

    GPIO_WriteBit(GPIOA, GPIO_Pin_4, Bit_RESET);
    Delay_Us(100);
    for (int i = 7; i >= 0; i--)
    {
        GPIO_WriteBit(GPIOA, GPIO_Pin_7, (data >> i) & 1);
        Delay_Us(100);
        GPIO_WriteBit(GPIOA, GPIO_Pin_5, Bit_SET);
        Delay_Us(50);
        res = (res << 1) | GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_6);
        Delay_Us(100);
        GPIO_WriteBit(GPIOA, GPIO_Pin_5, Bit_RESET);
    }
    Delay_Us(100);
    GPIO_WriteBit(GPIOA, GPIO_Pin_4, Bit_SET);
    Delay_Us(100);

    return res;
}

uint8_t CPLD_GetStatus(uint8_t *version)
{
    SPI_SendData(CPLD_INST_GET_STATUS);
    uint8_t data = SPI_SendData(0);
    *version = data & 0x7F;
    return CPLD_GET_READY(data);
}

uint8_t CPLD_SetFormat(uint8_t format)
{
    // 判定 48k 族与 44.1k 族，调用原始的固定频率配置函数
    uint8_t online = 0;
    int rc = 0;
    #if BOARD_HAS_SI5351
    switch (format) {
        case CPLD_FORMAT_2:   // 384k -> 24.576 MHz 家族
        case CPLD_FORMAT_1:   // 192k
        case CPLD_FORMAT_D2:  // 96k
        case CPLD_FORMAT_D4:  // 48k
            rc = si5351_configure_24_576mhz();
            break;
        case CPLD_FORMAT_SUB_1:  // 176.4k -> 22.5792 MHz 家族
        case CPLD_FORMAT_SUB_D2: // 88.2k
        case CPLD_FORMAT_SUB_D4: // 44.1k
            rc = si5351_configure_22_5792mhz();
            break;
        default:
            rc = -1;
            break;
    }
    #else
    // 无 Si5351 的板卡：直接切换 DAC 的外部 MCLK INTSEL（两片一致）
    bool is_48k_family = (format == CPLD_FORMAT_2 || format == CPLD_FORMAT_1 ||
                          format == CPLD_FORMAT_D2 || format == CPLD_FORMAT_D4);
    int rc1 = cs43131_switch_mclk_external(0x30, is_48k_family);
    int rc2 = cs43131_switch_mclk_external(0x31, is_48k_family);
    rc = (rc1 == 0 && rc2 == 0) ? 0 : -1;
    #endif
    SPI_SendData(CPLD_INST_SET_FORMAT | format);
    // 通过 CPLD_GetStatus() 确认 CPLD 上线（ready 位）
    uint8_t ver = 0;
    online = CPLD_GetStatus(&ver);

    // 与原语义对齐：返回 1 表示 ready，0 表示未就绪
    return (rc == 0) && online ? 1 : 0;
}
uint8_t CPLD_GetFormat(uint8_t *format)
{
    SPI_SendData(CPLD_INST_GET_FORMAT);
    uint8_t data = SPI_SendData(0);
    *format = data & 0x07;
    return CPLD_GET_READY(SPI_SendData(0));
}

uint8_t CPLD_RequestFormat(uint32_t freq)
{
    switch (freq)
    {
    case 384000U:
        pending_format = CPLD_FORMAT_2;
        break;
    case 192000U:
        pending_format = CPLD_FORMAT_1;
        break;
    case 96000U:
        pending_format = CPLD_FORMAT_D2;
        break;
    case 48000U:
        pending_format = CPLD_FORMAT_D4;
        break;
    case 176400U:
        pending_format = CPLD_FORMAT_SUB_1;
        break;
    case 88200U:
        pending_format = CPLD_FORMAT_SUB_D2;
        break;
    case 44100U:
        pending_format = CPLD_FORMAT_SUB_D4;
        break;
    default:
        pending_format = 0;
        return 0;
    }
    return 1;
}

uint8_t CPLD_ChangeFormat()
{
    if (pending_format)
    {
        if (CPLD_SetFormat(pending_format))
        {
            format_now = pending_format;
            pending_format = 0;
            return 1;
        }
    }
    return 0;
}

void CPLD_FormatRec(){
    CPLD_SetFormat(format_now);
}

void SPI_Device_Init()
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5; // SCK
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6; // MISO
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7; // MOSI
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4; // NSS
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_WriteBit(GPIOA, GPIO_Pin_4, Bit_SET);
}
