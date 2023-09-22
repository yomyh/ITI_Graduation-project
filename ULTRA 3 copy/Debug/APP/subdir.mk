################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/ultrasonic\ sensor.c 

OBJS += \
./APP/ultrasonic\ sensor.o 

C_DEPS += \
./APP/ultrasonic\ sensor.d 


# Each subdirectory must supply rules for building sources it contributes
APP/ultrasonic\ sensor.o: ../APP/ultrasonic\ sensor.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\HAL" -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\HAL\ULTRASONIC" -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\HAL\LCD" -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\HAL\LED" -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\LIB" -I"C:\Users\iamasd\Desktop\eclipse workspace\ULTRA\MCAL" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"APP/ultrasonic sensor.d" -MT"APP/ultrasonic\ sensor.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


