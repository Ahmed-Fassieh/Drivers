################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/04_Stepper_Motor/Stepper_prog.c 

OBJS += \
./HAL/04_Stepper_Motor/Stepper_prog.o 

C_DEPS += \
./HAL/04_Stepper_Motor/Stepper_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/04_Stepper_Motor/%.o: ../HAL/04_Stepper_Motor/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


