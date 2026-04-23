################################################################################
# MRS Version: 2.4.0
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/Dec_IIC.c \
../User/OLED.c \
../User/ch32v30x_i2s_device.c \
../User/ch32v30x_it.c \
../User/ch32v30x_led_device.c \
../User/ch32v30x_spi_device.c \
../User/ch32v30x_usbhs_device.c \
../User/cs43131.c \
../User/encoder.c \
../User/main.c \
../User/system_ch32v30x.c \
../User/usb_desc.c \
../User/volume_storage.c 

C_DEPS += \
./User/Dec_IIC.d \
./User/OLED.d \
./User/ch32v30x_i2s_device.d \
./User/ch32v30x_it.d \
./User/ch32v30x_led_device.d \
./User/ch32v30x_spi_device.d \
./User/ch32v30x_usbhs_device.d \
./User/cs43131.d \
./User/encoder.d \
./User/main.d \
./User/system_ch32v30x.d \
./User/usb_desc.d \
./User/volume_storage.d 

OBJS += \
./User/Dec_IIC.o \
./User/OLED.o \
./User/ch32v30x_i2s_device.o \
./User/ch32v30x_it.o \
./User/ch32v30x_led_device.o \
./User/ch32v30x_spi_device.o \
./User/ch32v30x_usbhs_device.o \
./User/cs43131.o \
./User/encoder.o \
./User/main.o \
./User/system_ch32v30x.o \
./User/usb_desc.o \
./User/volume_storage.o 

DIR_OBJS += \
./User/*.o \

DIR_DEPS += \
./User/*.d \

DIR_EXPANDS += \
./User/*.253r.expand \


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	riscv-wch-elf-gcc -march=rv32imafcxw -mabi=ilp32f -msmall-data-limit=8 -msave-restore -fmax-errors=20 -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -fsingle-precision-constant -flto --param=highcode-gen-section-name=1 -pipe -Wunused -Wuninitialized -DDAP_FW_V1 -DFIFO_LOG -I"j:/MounRiver prj/CH32V307/Debug" -I"j:/MounRiver prj/CH32V307/Core" -I"j:/MounRiver prj/CH32V307/User" -I"j:/MounRiver prj/CH32V307/Peripheral/inc" -I"j:/MounRiver prj/CH32V307/User/DAP/Include" -I"j:/MounRiver prj/CH32V307/User/U8g2" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

