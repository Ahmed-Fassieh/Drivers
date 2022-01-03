#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/*Port enum*/
typedef enum {
	portA,
	portB,
	portC,
	portD
	
}enum_port;

/*Pin enum*/
typedef enum{
	pin0__,
	pin1__,
	pin2__,
	pin3__,
	pin4__,
	pin5__,
	pin6__,
	pin7__
}enum_pin;

/*direction enum*/
typedef enum {
	input,
	output,
	portOutput=0xff,
	portInput=0x00
}enum_direction;

/*value enum*/
typedef enum{
	pinLow,
	pinHigh,
	portLow  =0x00,
	portHigh =0xff
	
}enum_value;


/*Set direction of any pin on any port*/
u8 DIO_u8SetPinDirection(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_direction Copy_enuDirection);
/*Set value of any pin in any port*/
u8 DIO_u8SetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_value Copy_enuvalue);
/*Read value of any pin in any port*/
u8 DIO_u8GetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, u8 *pu8Value);
/*----------------------------------------------------------------------------------------*/
/*Set any port direction*/
u8 DIO_u8SetPortDirection(enum_port Copy_enuPort, enum_direction Copy_u8GeneralIO);
/*Set any port value*/
u8 DIO_u8SetPortValue(enum_port Copy_enuPort, enum_value Copy_u8GeneralValue);
/*Read any port value*/
u8 DIO_u8GetPortValue(enum_port Copy_enuPort, u8 *pu8Value);

#endif 
