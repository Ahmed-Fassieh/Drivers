/*
#include "Liberary/STD_TYPES.h"
#include "Liberary/BIT_MATH.h"
#include "MCAL/01_DIO/DIO_interface.h"
#include "MCAL/02_Intrupt/GIE_interface.h"
#include "MCAL/02_Intrupt/EXT_Int_interface.h"
#include "util/delay.h"

int main()
{

	GIE_vidEnable();
	DIO_u8SetPinDirection(portD,pin2__,pinInput);
	DIO_u8SetPinValue(portD,pin2__,pinHigh);
	ExtI_0_vidEnable();

	DIO_u8SetPortValue(portB,portOutput);

	while(1);
	{
		DIO_u8SetPinValue(portB,pin1__,pinHigh);
		_delay_ms(5000);
		DIO_u8SetPinValue(portB,pin1__,pinLow);
		_delay_ms(5000);
	}
}

void __vector_1(void)__attribute__((signal));

void __vector_No(void)
{
	DIO_u8SetPinValue(portB,pin2__,pinHigh);
	_delay_ms(500);
	DIO_u8SetPinValue(portB,pin2__,pinLow);
}


*/
