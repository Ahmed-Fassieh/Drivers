################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Dc_Motor.c \
../Intrupt.c \
../LCD_Calculator.c \
../Stepper_Motor.c 

OBJS += \
./Dc_Motor.o \
./Intrupt.o \
./LCD_Calculator.o \
./Stepper_Motor.o 

C_DEPS += \
./Dc_Motor.d \
./Intrupt.d \
./LCD_Calculator.d \
./Stepper_Motor.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


