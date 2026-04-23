################################################################################
# MRS Version: 2.4.0
# Automatically-generated file. Do not edit!
################################################################################
-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include User/U8g2/subdir.mk
-include User/DAP/Source/subdir.mk
-include User/DAP/subdir.mk
-include User/subdir.mk
-include Startup/subdir.mk
-include Peripheral/src/subdir.mk
-include Debug/subdir.mk
-include Core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
USBAudio.hex \

SECONDARY_LIST += \
USBAudio.lst \

SECONDARY_SIZE += \
USBAudio.siz \


# All Target
all: 
	$(MAKE) --no-print-directory main-build 

main-build: USBAudio.elf secondary-outputs

# Tool invocations
USBAudio.elf: $(OBJS) $(USER_OBJS_ESCAPE)
	@	riscv-wch-elf-gcc -march=rv32imafcxw -mabi=ilp32f -msmall-data-limit=8 -msave-restore -fmax-errors=20 -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -fsingle-precision-constant -flto --param=highcode-gen-section-name=1 -pipe -Wunused -Wuninitialized -T "j:\MounRiver prj\CH32V307\Ld\Link.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,"USBAudio.map" -u _printf_float --specs=nosys.specs -o "USBAudio.elf" $(OBJS) $(LIBS) -lIQmath_RV32
USBAudio.hex: USBAudio.elf
	@	riscv-wch-elf-objcopy -O ihex "USBAudio.elf" "USBAudio.hex"
USBAudio.lst: USBAudio.elf
	@	riscv-wch-elf-objdump --all-headers --demangle --disassemble -M xw "USBAudio.elf" > "USBAudio.lst"
USBAudio.siz: USBAudio.elf
	riscv-wch-elf-size --format=berkeley "USBAudio.elf"

# Other Targets
clean:
	-$(RM) $(DIR_OBJS) $(SECONDARY_FLASH)$(SECONDARY_LIST)$(SECONDARY_SIZE) USBAudio.elf
	-$(RM) $(DIR_EXPANDS) $(CALLGRAPH_DOT)
	-$(RM) $(DIR_DEPS)
secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets