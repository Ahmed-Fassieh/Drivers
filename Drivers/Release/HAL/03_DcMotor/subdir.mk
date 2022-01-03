################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/03_DcMotor/H_Bridge_prog.c 

OBJS += \
./HAL/03_DcMotor/H_Bridge_prog.o 

C_DEPS += \
./HAL/03_DcMotor/H_Bridge_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/03_DcMotor/%.o: ../HAL/03_DcMotor/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


