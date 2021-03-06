#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "../../MCAL/01_DIO/DIO_interface.h"
#include "KPAD_configurations.h"
#include "KPAD_interface.h"
#include <avr/delay.h>


int main()
{
	DIO_u8SetPinDirection(portC , pin0__ , output);
	DIO_u8SetPinDirection(portC , pin1__ , output);
	DIO_u8SetPinDirection(portC , pin2__ , output);
	DIO_u8SetPinDirection(portC , pin3__ , output);

	DIO_u8SetPinDirection(portC , pin4__ , input);
	DIO_u8SetPinDirection(portC , pin5__ , input);
	DIO_u8SetPinDirection(portC , pin6__ , input);
	DIO_u8SetPinDirection(portC , pin7__ , input);

	DIO_u8SetPinValue(portC , pin4__ , pinHigh);
	DIO_u8SetPinValue(portC , pin5__ , pinHigh);
	DIO_u8SetPinValue(portC , pin6__ , pinHigh);
	DIO_u8SetPinValue(portC , pin7__ , pinHigh);

	DIO_u8SetPortDirection(portD , output);
	DIO_u8SetPortValue(portD , portHigh);


	while(1)
	{
		u8 Key = KPAD_u8GetPressedKey();

		DIO_u8SetPortValue(portD , Key);
		_delay_ms(1000);
		DIO_u8SetPortValue(portD , 0x00);
	}


}
