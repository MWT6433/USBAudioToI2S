#include "Dec_IIC.h"
#include "debug.h"

/*******************************************************************************
 * Function Name  : IIC_Init
 * Description    : Initializes the IIC peripheral.
 * Input          : None
 * Return         : None
 *******************************************************************************/
void IIC_Init (u32 bound, u16 address) {
    GPIO_InitTypeDef GPIO_InitStructure = {0};
    I2C_InitTypeDef I2C_InitTSturcture = {0};

    RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);
    RCC_APB1PeriphClockCmd (RCC_APB1Periph_I2C1, ENABLE);
    GPIO_PinRemapConfig (GPIO_Remap_I2C1, ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init (GPIOB, &GPIO_InitStructure);

    I2C_InitTSturcture.I2C_ClockSpeed = bound;
    I2C_InitTSturcture.I2C_Mode = I2C_Mode_I2C;
    I2C_InitTSturcture.I2C_DutyCycle = I2C_DutyCycle_16_9;
    I2C_InitTSturcture.I2C_OwnAddress1 = address;
    I2C_InitTSturcture.I2C_Ack = I2C_Ack_Enable;
    I2C_InitTSturcture.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
    I2C_Init (I2C1, &I2C_InitTSturcture);
    I2C_Cmd (I2C1, ENABLE);

#if (I2C_MODE == HOST_MODE)
    I2C_AcknowledgeConfig (I2C1, ENABLE);
#endif
}

void IIC_reset() {
    I2C_Cmd (I2C1, DISABLE);
    I2C_GenerateSTOP (I2C1, ENABLE);
    I2C_SoftwareResetCmd (I2C1, ENABLE);
    Delay_Us (10);
    I2C_SoftwareResetCmd (I2C1, DISABLE);
    I2C_ClearFlag (I2C1, I2C_FLAG_ARLO);
    I2C_DeInit (I2C1);

    GPIO_InitTypeDef GPIO_InitStructure = {0};
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init (GPIOB, &GPIO_InitStructure);
    for (uint8_t i = 0; i < 9; i++) {
        GPIO_SetBits (GPIOB, GPIO_Pin_8);
        Delay_Us (5);
        GPIO_ResetBits (GPIOB, GPIO_Pin_8);
        Delay_Us (5);
    }

    IIC_Init (400000, 0x78);
    I2C_Cmd (I2C1, ENABLE);
    Delay_Us (10);
}
