################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/02_EXT_INT/EXT_Int_prog.c \
../MCAL/02_EXT_INT/GIE_prog.c 

OBJS += \
./MCAL/02_EXT_INT/EXT_Int_prog.o \
./MCAL/02_EXT_INT/GIE_prog.o 

C_DEPS += \
./MCAL/02_EXT_INT/EXT_Int_prog.d \
./MCAL/02_EXT_INT/GIE_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/02_EXT_INT/%.o: ../MCAL/02_EXT_INT/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


