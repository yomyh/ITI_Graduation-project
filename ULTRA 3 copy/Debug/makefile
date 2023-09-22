################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/subdir.mk
-include HAL/ULTRASONIC/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/BUZZER/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ULTRA.lss \
ULTRA.lss \
ULTRA.lss \
ULTRA.lss \
ULTRA.lss \

FLASH_IMAGE += \
ULTRA.hex \

SIZEDUMMY += \
sizedummy \
sizedummy \
sizedummy \
sizedummy \
sizedummy \


# All Target
all: ULTRA.elf secondary-outputs

# Tool invocations
ULTRA.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ULTRA.map -mmcu=atmega32 -o "ULTRA.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ULTRA.lss: ULTRA.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ULTRA.elf  >"ULTRA.lss"
	@echo 'Finished building: $@'
	@echo ' '

ULTRA.hex: ULTRA.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ULTRA.elf  "ULTRA.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ULTRA.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ULTRA.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ULTRA.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
