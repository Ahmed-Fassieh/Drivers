#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

void LCD_vdInit(void);
void LCD_vdSendData(u8 Copy_u8Data);
void LCD_vdSendCommand(u8 Copy_u8Command);

#endif
