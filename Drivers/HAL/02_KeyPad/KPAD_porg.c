#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "../../MCAL/01_DIO/DIO_interface.h"
#include "KPAD_config.h"
#include "KPAD_interface.h"


u8 KPAD_u8GetPressedKey(void)
{
	u8 Local_PressedKey= KEY_NOT_PRESSED;
	u8 KPAD_u8State=1;
	u8 KPAD_u8ColumnArray[]= {KPAD_C0_PIN, KPAD_C1_PIN, KPAD_C2_PIN, KPAD_C3_PIN};
	u8 KPAD_u8RowArray[]= {KPAD_R0_PIN, KPAD_R1_PIN, KPAD_R2_PIN, KPAD_R3_PIN};
	u8 user_array [4][4]= USER_NUMBERS;

	do
	{
		for (u8 col=0; col<4; col++)
		{
			DIO_u8SetPinValue(KPAD_PORT,KPAD_u8ColumnArray[col],pinLow);

			for(u8 row=0; row<4; row++){
				DIO_u8GetPinValue(KPAD_PORT,KPAD_u8RowArray[row],&KPAD_u8State);
				if(!KPAD_u8State){
					Local_PressedKey=user_array[col][row];
					while(!KPAD_u8State){
						DIO_u8GetPinValue(KPAD_PORT,KPAD_u8RowArray[row],&KPAD_u8State);
					}
					break;
				}
			}
			DIO_u8SetPinValue(KPAD_PORT,KPAD_u8ColumnArray[col],pinHigh);
			if(Local_PressedKey!=KEY_NOT_PRESSED)break;
		}

	}
		while(Local_PressedKey == KEY_NOT_PRESSED);

	return Local_PressedKey;

}
