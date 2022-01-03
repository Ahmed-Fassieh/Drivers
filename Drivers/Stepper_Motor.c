
#include "Liberary/STD_TYPES.h"
#include "Liberary/BIT_MATH.h"
#include "HAL/01_LCD/LCD_interface.h"
#include "MCAL/01_DIO/DIO_interface.h"
#include "HAL/04_Stepper_Motor/Stepper_interface.h"
#include "HAL/04_Stepper_Motor/Stepper_configuration.h"
#include "util/delay.h"

int main()
{
	StepperMotorFullStep_ON_vid_Direction(ClockWise , 360);
	_delay_ms(1000);
	StepperMotorFullStep_ON_vid_Direction(Anti_ClockWise , 360);
	_delay_ms(1000);
	StepperMotorHalfStep_ON_vid_Direction(ClockWise , 360);
	_delay_ms(1000);
	StepperMotorHalfStep_ON_vid_Direction(Anti_ClockWise , 360);
	_delay_ms(1000);
	while(1)
	{

	}
}
