################################################################################
# MRS Version: 2.4.0
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/DAP/Source/DAP.c \
../User/DAP/Source/DAP_vendor.c \
../User/DAP/Source/SWO.c \
../User/DAP/Source/SW_DP.c 

C_DEPS += \
./User/DAP/Source/DAP.d \
./User/DAP/Source/DAP_vendor.d \
./User/DAP/Source/SWO.d \
./User/DAP/Source/SW_DP.d 

OBJS += \
./User/DAP/Source/DAP.o \
./User/DAP/Source/DAP_vendor.o \
./User/DAP/Source/SWO.o \
./User/DAP/Source/SW_DP.o 

DIR_OBJS += \
./User/DAP/Source/*.o \

DIR_DEPS += \
./User/DAP/Source/*.d \

DIR_EXPANDS += \
./User/DAP/Source/*.253r.expand \


# Each subdirectory must supply rules for building sources it contributes
User/DAP/Source/%.o: ../User/DAP/Source/%.c
	@	riscv-wch-elf-gcc -march=rv32imafcxw -mabi=ilp32f -msmall-data-limit=8 -msave-restore -fmax-errors=20 -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -fsingle-precision-constant -flto --param=highcode-gen-section-name=1 -pipe -Wunused -Wuninitialized -DDAP_FW_V1 -DFIFO_LOG -I"j:/MounRiver prj/CH32V307/Debug" -I"j:/MounRiver prj/CH32V307/Core" -I"j:/MounRiver prj/CH32V307/User" -I"j:/MounRiver prj/CH32V307/Peripheral/inc" -I"j:/MounRiver prj/CH32V307/User/DAP/Include" -I"j:/MounRiver prj/CH32V307/User/U8g2" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

