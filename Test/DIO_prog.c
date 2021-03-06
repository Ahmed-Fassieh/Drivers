#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_registers.h"
#include "DIO_interface.h"


u8 DIO_u8SetPinDirection(enum_port Copy_enumPort , enum_pin Copy_enumPin , enum_dir Copy_enmDirection)
{
	/*input pin*/

	if(Copy_enmDirection == input)
	{
		switch(Copy_enumPort)
		{
		case portA : CLR_BIT(DDRA , Copy_enumPin);	break;
		case portB : CLR_BIT(DDRB , Copy_enumPin);	break;
		case portC : CLR_BIT(DDRC , Copy_enumPin);	break;
		case portD : CLR_BIT(DDRD , Copy_enumPin);	break;
		}
	}


	/*output pin*/

	else if(Copy_enmDirection == output)
	{
		switch(Copy_enumPort)
		{
		case portA : SET_BIT(DDRA , Copy_enumPin);	break;
		case portB : SET_BIT(DDRB , Copy_enumPin);	break;
		case portC : SET_BIT(DDRC , Copy_enumPin);	break;
		case portD : SET_BIT(DDRD , Copy_enumPin);	break;
		}
	}

}

u8 DIO_u8SetPinValue(enum_port Copy_enumPort , enum_pin Copy_enumPin , enum_value Copy_enumValue)
{
	/*set pin value*/

	if(Copy_enumValue == pinHigh)
	{
		switch(Copy_enumPort)
		{
		case portA : SET_BIT(PORTA , Copy_enumPin);	break;
		case portB : SET_BIT(PORTB , Copy_enumPin);	break;
		case portC : SET_BIT(PORTC , Copy_enumPin);	break;
		case portD : SET_BIT(PORTD , Copy_enumPin);	break;
		}
	}
	/*clear pin value*/

	else  if(Copy_enumValue == pinLow)
	{
		switch(Copy_enumPort)
		{
		case portA : CLR_BIT(PORTA , Copy_enumPin);	break;
		case portB : CLR_BIT(PORTB , Copy_enumPin);	break;
		case portC : CLR_BIT(PORTC , Copy_enumPin);	break;
		case portD : CLR_BIT(PORTD , Copy_enumPin);	break;
		}
	}
}

u8 DIO_u8GetPinValue(enum_port Copy_enumPort , enum_pin Copy_enumPin , u8 *pu8Value)
{
	/*get pin value*/

	switch(Copy_enumPort)
	{
	case portA : *pu8Value=GET_BIT(PINA , Copy_enumPin);break;
	case portB : *pu8Value=GET_BIT(PINB , Copy_enumPin);break;
	case portC : *pu8Value=GET_BIT(PINC , Copy_enumPin);break;
	case portD : *pu8Value=GET_BIT(PIND , Copy_enumPin);break;
	}
}

u8 DIO_u8SetPortDirection(enum_port Copy_enumPort , enum_dir Copy_enmDirection)
{
/*can be as setport to enter a binary value to copyenumdir but it won't be save but it can be save in return value*/

	/*input port*/

	if(Copy_enmDirection == input)
	{
		switch(Copy_enumPort)
		{
			case portA : {PORTA = 0x00;
						 break;}
			case portB : {PORTB = 0x00;
						 break;}
			case portC : {PORTC = 0x00;
						 break;}
			case portD : {PORTD = 0x00;
						 break;}
		}
	}

	/*output port*/

	else if(Copy_enmDirection == output)
	{
		switch(Copy_enumPort)
		{
			case portA : {PORTA = 0xFF;
						 break;}
			case portB : {PORTB = 0xFF;
						 break;}
			case portC : {PORTC = 0xFF;
						 break;}
			case portD : {PORTD = 0xFF;
						 break;}
		}
	}

}

u8 DIO_u8SetPortValue(enum_port Copy_enumPort , enum_value Copy_enumValue)
{
	/*set port value*/

		switch(Copy_enumPort)
		{
			case portA : {PORTA = Copy_enumValue;
						 break;}
			case portB : {PORTB = Copy_enumValue;
						 break;}
			case portC : {PORTC = Copy_enumValue;
						 break;}
			case portD : {PORTD = Copy_enumValue;
						 break;}
		}
	}

u8 DIO_u8GetPortValue(enum_port Copy_enumPort , u8 Arru8PortValues[8])
{
	/*get port value*/

	switch(Copy_enumPort)
	{
	case portA : for(u8 i=8;i>0;i--)
				 {
					 Arru8PortValues[i-1]=GET_BIT(PINA , i-1);
				 }
					 break;
	case portB : for(u8 i=8;i>0;i--)
				 {
					 Arru8PortValues[i-1]=GET_BIT(PINB , i-1);
				 }
					 break;
	case portC : for(u8 i=8;i>0;i--)
				 {
					 Arru8PortValues[i-1]=GET_BIT(PINC , i-1);
				 }
					 break;
	case portD : for(u8 i=8;i>0;i--)
				 {
					 Arru8PortValues[i-1]=GET_BIT(PIND , i-1);
				 }
					 break;
	}
}

int main()
{
		DIO_u8SetPortDirection(portD,output);
	while(1)
	{
		DIO_u8GetPinValue(portD,pin0__,pinHigh);
	}
	 return 0;
}
