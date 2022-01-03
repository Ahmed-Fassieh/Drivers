#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H


/*Initialization function*/

void LCD_vid_Init(void);




/*send command function*/

void LCD_vid_SendCommand(u8 Copy_u8Command);




/*send data function*/

void LCD_vid_SendData(u8 Copy_u8Data);









#endif
