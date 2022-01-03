#include"../../Liberary/STD_TYPES.h"
#include"../../Liberary/BIT_MATH.h"
#include"LCD_config.h"
#include"../../MCAL/01_DIO/DIO_interface.h"
#include<util/delay.h>


void LCD_vdSendData(u8 Copy_u8Data)
{
	/*------------------set RS as High-----------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RS_PIN,pinHigh);

	/*------------------set RW as low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RW_PIN,pinLow);

	/*------------------Send data------------------*/
	DIO_u8SetPortValue(LCD_DATAPORT,Copy_u8Data);

	/*------------------Set Enable as high------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,pinHigh);

	/*------------------Delay 2 ms------------------*/
	_delay_ms(2);

	/*------------------Set Enable as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,pinLow);

}

/*command*/
void LCD_vdSendCommand(u8 Copy_u8Command)
{
	
	/*------------------Set RS as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RS_PIN,pinLow);

	/*------------------Set RW ad Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RW_PIN,pinLow);

	/*------------------Send command------------------*/
	DIO_u8SetPortValue(LCD_DATAPORT,Copy_u8Command);

	/*------------------Set Enable as High------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,pinHigh);

	/*------------------delay 2ms------------------*/
	_delay_ms(2);

	/*------------------Set Enable as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,pinLow);

}

void LCD_vdInit(void)
{
	_delay_ms(40);
	LCD_vdSendCommand(0b00110100);
	_delay_ms(1);
	LCD_vdSendCommand(0b0001100);
	_delay_ms(1);
	LCD_vdSendCommand(0b00000001);
}
