#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "../../MCAL/01_DIO/DIO_interface.h"
#include "../03_DcMotor/H_Bridge_configuration.h"


void DcMotor_vid_Direction_ON(u8 Rot_u8_Dir)
{
	DIO_u8SetPinDirection(H_Bridge_Port,TR1,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR2,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR3,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR4,output);

	if(Rot_u8_Dir == 0)
	{
		DIO_u8SetPinValue(H_Bridge_Port,TR2,pinLow);
		DIO_u8SetPinValue(H_Bridge_Port,TR4,pinLow);

		DIO_u8SetPinValue(H_Bridge_Port,TR1,pinHigh);
		DIO_u8SetPinValue(H_Bridge_Port,TR3,pinHigh);
	}

	else if(Rot_u8_Dir == 1)
	{
		DIO_u8SetPinValue(H_Bridge_Port,TR1,pinLow);
		DIO_u8SetPinValue(H_Bridge_Port,TR3,pinLow);

		DIO_u8SetPinValue(H_Bridge_Port,TR2,pinHigh);
		DIO_u8SetPinValue(H_Bridge_Port,TR4,pinHigh);
	}
}

void DcMotor_vid_OFF(void)
{
	DIO_u8SetPinDirection(H_Bridge_Port,TR1,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR2,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR3,output);
	DIO_u8SetPinDirection(H_Bridge_Port,TR4,output);

	DIO_u8SetPinValue(H_Bridge_Port,TR1,pinLow);
	DIO_u8SetPinValue(H_Bridge_Port,TR2,pinLow);
	DIO_u8SetPinValue(H_Bridge_Port,TR3,pinLow);
	DIO_u8SetPinValue(H_Bridge_Port,TR4,pinLow);
}
