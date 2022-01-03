################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/02_KeyPad/KPAD_prog.c \
../HAL/02_KeyPad/main.c 

OBJS += \
./HAL/02_KeyPad/KPAD_prog.o \
./HAL/02_KeyPad/main.o 

C_DEPS += \
./HAL/02_KeyPad/KPAD_prog.d \
./HAL/02_KeyPad/main.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/02_KeyPad/%.o: ../HAL/02_KeyPad/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


