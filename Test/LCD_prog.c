#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LCD_configuration.h"
#include "LCD_interface.h"
#include "DIO_interface.h"
#include <avr/delay.h>

void LCD_vid_SendCommand(u8 Copy_u8Command)
{
	/*Set RS = 0 to enter command*/

	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_RS_PIN , pinLow);

	/*Set RW = 0 to write*/

	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_RW_PIN , pinLow);

	/*Send command*/
	
	DIO_u8SetPortValue(LCD_DATAPORT , Copy_u8Command);
	
	/*Set enable on*/
	
	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_E_PIN , pinHigh);

	_delay_ms(2);

	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_E_PIN , pinLow);

}

void LCD_vid_SendData(u8 Copy_u8Data)
{
	/*Set RS = 1 to enter data*/

	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_RS_PIN , pinHigh);

	/*Set RW = 0 to write*/

	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_RW_PIN , pinLow);

	/*Send data*/
	
	DIO_u8SetPortValue(LCD_DATAPORT , Copy_u8Data);
	
	/*Set enable on*/
	
	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_E_PIN , pinHigh);
	
	_delay_ms(2);
	
	DIO_u8SetPinValue(LCD_CONTROLEPORT , LCD_E_PIN , pinLow);

}

void LCD_vid_Init(void)
{
	_delay_ms(30);
	LCD_vid_SendCommand(0b00111100);
	_delay_ms(1);
	LCD_vid_SendCommand(0b00001100);
	_delay_ms(1);
	LCD_vid_SendCommand(0b00000001);

}

int main()
{
	while(1)
	{
		DIO_u8SetPortDirection(portA,output);
		DIO_u8SetPortDirection(portB,output);
		LCD_vid_Init();
		LCD_vid_SendData('A');
	}
}
