#include"../../Liberary/STD_TYPES.h"
#include"../../Liberary/BIT_MATH.h"
#include"DIO_interface.h"
#include"DIO_registers.h"

/*Set direction of any pin on any port*/
u8 DIO_u8SetPinDirection(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_direction Copy_enuDirection){
/*Input*/
	if(Copy_enuDirection== input){
		switch(Copy_enuPort){
		case portA: CLR_BIT(DDRA,Copy_enuPin);break;
		case portB: CLR_BIT(DDRB,Copy_enuPin);break;
		case portC: CLR_BIT(DDRC,Copy_enuPin);break;
		case portD: CLR_BIT(DDRD,Copy_enuPin);break;
		}

	}
/*Output*/
	else if(Copy_enuDirection== output){
		switch(Copy_enuPort){
		case portA: SET_BIT(DDRA,Copy_enuPin);break;
		case portB: SET_BIT(DDRB,Copy_enuPin);break;
		case portC: SET_BIT(DDRC,Copy_enuPin);break;
		case portD: SET_BIT(DDRD,Copy_enuPin);break;
		}

	}
}

/*Set any pin value in any port*/
u8 DIO_u8SetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_value Copy_enuvalue){

	if(Copy_enuvalue == pinHigh){
		switch (Copy_enuPort){
		case portA: SET_BIT(PORTA,Copy_enuPin);break;
		case portB: SET_BIT(PORTB,Copy_enuPin);break;
		case portC: SET_BIT(PORTC,Copy_enuPin);break;
		case portD: SET_BIT(PORTD,Copy_enuPin);break;
		}
	}
	else if (Copy_enuvalue==pinLow){
		switch(Copy_enuPort){
		case portA: CLR_BIT(PORTA,Copy_enuPin);break;
		case portB: CLR_BIT(PORTB,Copy_enuPin);break;
		case portC: CLR_BIT(PORTC,Copy_enuPin);break;
		case portD: CLR_BIT(PORTD,Copy_enuPin);break;
		}
	}

}

/*Read any pin value in any port*/
u8 DIO_u8GetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, u8 *pu8Value){

	switch (Copy_enuPort){
	case portA: *pu8Value=GET_BIT(PINA,Copy_enuPin);break;
	case portB: *pu8Value=GET_BIT(PINB,Copy_enuPin);break;
	case portC: *pu8Value=GET_BIT(PINC,Copy_enuPin);break;
	case portD: *pu8Value=GET_BIT(PIND,Copy_enuPin);break;
	}
}
/*-----------------------------------------------------------------------------------------------------------*/
/*Set any port direction*/
u8 DIO_u8SetPortDirection(enum_port Copy_enuPort,enum_direction Copy_u8GeneralIO){

	switch(Copy_enuPort){
		case portA: DDRA=Copy_u8GeneralIO;break;
		case portB: DDRB=Copy_u8GeneralIO;break;
		case portC: DDRC=Copy_u8GeneralIO;break;
		case portD: DDRD=Copy_u8GeneralIO;break;
	}
}

/*Set any port value*/
u8 DIO_u8SetPortValue(enum_port Copy_enuPort,enum_value Copy_u8GeneralValue){

		switch(Copy_enuPort){
			case portA: PORTA=Copy_u8GeneralValue;break;
			case portB: PORTB=Copy_u8GeneralValue;break;
			case portC: PORTC=Copy_u8GeneralValue;break;
			case portD: PORTD=Copy_u8GeneralValue;break;
		}
}

/*Read any port value*/
u8 DIO_u8GetPortValue(enum_port Copy_enuPort, u8 *pu8Value){
	switch(Copy_enuPort){
	case portA: *pu8Value=PINA;break;
	case portB: *pu8Value=PINB;break;
	case portC: *pu8Value=PINC;break;
	case portD: *pu8Value=PIND;break;
	}
}



