#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "../../MCAL/01_DIO/DIO_interface.h"
#include "Stepper_configuration.h"
#include "Stepper_interface.h"
#include "util/delay.h"


void StepperMotor_vid_OFF(void)
{
	DIO_u8SetPinDirection(Stepper_Port,BlueCoil,output);
	DIO_u8SetPinDirection(Stepper_Port,PinkCoil,output);
	DIO_u8SetPinDirection(Stepper_Port,YellowCoil,output);
	DIO_u8SetPinDirection(Stepper_Port,OrangeCoil,output);

	DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinHigh);
	DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinHigh);
	DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinHigh);
	DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinHigh);
}

void StepperMotorHalfStep_ON_vid_Direction(u8 Rot_u8_Dir , u32 u32_Angle)
{
	 StepperMotor_vid_OFF();

	if(Rot_u8_Dir == ClockWise)
	{
		for(u32 i=0 ; i<(1.43*u32_Angle) ; i++)
		{
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinLow);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinLow);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinLow);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinLow);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinHigh);
		}
	}
	else if(Rot_u8_Dir == Anti_ClockWise)
	{
		for(u32 i=0 ; i<(1.43*u32_Angle) ; i++)
		{
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinLow);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinLow);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinLow);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinLow);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinHigh);
		}
	}
}

void StepperMotorFullStep_ON_vid_Direction(u8 Rot_u8_Dir , u32 u32_Angle)
{
	 StepperMotor_vid_OFF();

	if(Rot_u8_Dir == 0)
	{
		for(u32 i=0 ; i<(1.43*u32_Angle) ; i++)
		{
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil,pinHigh);
		}
	}
	else if(Rot_u8_Dir == 1)
	{
		for(u32 i=0 ; i<(1.43*u32_Angle) ; i++)
		{
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,OrangeCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,YellowCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,PinkCoil ,pinHigh);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinLow);
			_delay_ms(2);
			DIO_u8SetPinValue(Stepper_Port,BlueCoil ,pinHigh);
		}
	}
}
