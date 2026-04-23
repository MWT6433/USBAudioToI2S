################################################################################
# MRS Version: 2.4.0
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/DAP/hid_transfer.c 

C_DEPS += \
./User/DAP/hid_transfer.d 

OBJS += \
./User/DAP/hid_transfer.o 

DIR_OBJS += \
./User/DAP/*.o \

DIR_DEPS += \
./User/DAP/*.d \

DIR_EXPANDS += \
./User/DAP/*.253r.expand \


# Each subdirectory must supply rules for building sources it contributes
User/DAP/%.o: ../User/DAP/%.c
	@	riscv-wch-elf-gcc -march=rv32imafcxw -mabi=ilp32f -msmall-data-limit=8 -msave-restore -fmax-errors=20 -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -fsingle-precision-constant -flto --param=highcode-gen-section-name=1 -pipe -Wunused -Wuninitialized -DDAP_FW_V1 -DFIFO_LOG -I"j:/MounRiver prj/CH32V307/Debug" -I"j:/MounRiver prj/CH32V307/Core" -I"j:/MounRiver prj/CH32V307/User" -I"j:/MounRiver prj/CH32V307/Peripheral/inc" -I"j:/MounRiver prj/CH32V307/User/DAP/Include" -I"j:/MounRiver prj/CH32V307/User/U8g2" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

