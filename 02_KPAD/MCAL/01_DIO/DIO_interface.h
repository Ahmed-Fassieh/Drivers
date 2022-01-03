#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/*Port enum*/

typedef enum 
{
	portA,
	portB,
	portC,
	portD
	
}enum_port;


/*Pin enum*/

typedef enum 
{
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

typedef enum 
{
	input,
	output
	
}enum_dir;

/*values enum*/

typedef enum 
{
	pinLow,
	pinHigh,
	portLow=0x00,
	portHigh=0xff
	
}enum_value;



/*Set direction of any pin at any port*/

u8 DIO_u8SetPinDirection(enum_port Copy_enumPort , enum_pin Copy_enumPin , enum_dir Copy_enmDirection);


/*Set any pin value at any port*/

u8 DIO_u8SetPinValue(enum_port Copy_enumPort , enum_pin Copy_enumPin , enum_value Copy_enumValue);



/*Read any pin value at any port*/

u8 DIO_u8GetPinValue(enum_port Copy_enumPort , enum_pin Copy_enumPin , u8 *pu8Value);







/*Set direction of any port*/

u8 DIO_u8SetPortDirection(enum_port Copy_enumPort , enum_dir Copy_enmDirection);





/*Set any port value*/

u8 DIO_u8SetPortValue(enum_port Copy_enumPort , enum_value Copy_enumValue);





/*Read any port*/

u8 DIO_u8GetPortValue(enum_port Copy_enumPort , u8 Arru8PortValues[8]);





#endif
