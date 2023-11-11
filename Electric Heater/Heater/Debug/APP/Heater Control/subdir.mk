################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Heater\ Control/HeaterControl_Program.c 

OBJS += \
./APP/Heater\ Control/HeaterControl_Program.o 

C_DEPS += \
./APP/Heater\ Control/HeaterControl_Program.d 


# Each subdirectory must supply rules for building sources it contributes
APP/Heater\ Control/HeaterControl_Program.o: ../APP/Heater\ Control/HeaterControl_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"APP/Heater Control/HeaterControl_Program.d" -MT"APP/Heater\ Control/HeaterControl_Program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


