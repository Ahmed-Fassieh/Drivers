/*
#include "Liberary/STD_TYPES.h"
#include "Liberary/BIT_MATH.h"
#include "HAL/01_LCD/LCD_interface.h"
#include "MCAL/01_DIO/DIO_interface.h"
#include "util/delay.h"




int main()
{
	DIO_u8SetPortDirection(portA , portOutput);
	DIO_u8SetPortDirection(portB , portOutput);


	DIO_u8SetPinDirection(portC , pin0__ , output);
	DIO_u8SetPinDirection(portC , pin1__ , output);
	DIO_u8SetPinDirection(portC , pin2__ , output);
	DIO_u8SetPinDirection(portC , pin3__ , output);

	DIO_u8SetPinDirection(portC , pin4__ , input);
	DIO_u8SetPinDirection(portC , pin5__ , input);
	DIO_u8SetPinDirection(portC , pin6__ , input);
	DIO_u8SetPinDirection(portC , pin7__ , input);


	DIO_u8SetPinValue(portC , pin0__ , pinLow);
	DIO_u8SetPinValue(portC , pin1__ , pinLow);
	DIO_u8SetPinValue(portC , pin2__ , pinLow);
	DIO_u8SetPinValue(portC , pin3__ , pinLow);

	DIO_u8SetPinValue(portC , pin4__ , pinHigh);
	DIO_u8SetPinValue(portC , pin5__ , pinHigh);
	DIO_u8SetPinValue(portC , pin6__ , pinHigh);
	DIO_u8SetPinValue(portC , pin7__ , pinHigh);

	LCD_vdInit();

	u16 num1=0;
	u16 op=0;
	u16 num2=0;
	u16 res=0;

	while(1)
	{
		LCD_vdSendData('e');
		LCD_vdSendData('n');
		LCD_vdSendData('t');
		LCD_vdSendData('e');
		LCD_vdSendData('r');
		LCD_vdSendData(' ');
		LCD_vdSendData('o');
		LCD_vdSendData('p');
		LCD_vdSendData(':');

		num1 = KPAD_u8GetPressedKey();
		LCD_vdSendData(num1+48);
		op = KPAD_u8GetPressedKey();
		LCD_vdSendData(op);
		num2 = KPAD_u8GetPressedKey();
		LCD_vdSendData(num2+48);
		LCD_vdSendData(KPAD_u8GetPressedKey());

		switch(op)
		{
			case('+'):res=num1+num2;break;
			case('-'):res=num1-num2;break;
			case('*'):res=num1*num2;break;
			case('/'):res=num1/num2;break;
		}

		LCD_vdSendData(res+48);
		_delay_ms(2000);
		LCD_vdSendCommand(0000001);
		_delay_ms(2);
	}
}
*/
