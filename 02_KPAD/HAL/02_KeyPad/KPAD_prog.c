#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "../../MCAL/01_DIO/DIO_interface.h"
#include "KPAD_configurations.h"
#include "KPAD_interface.h"


u8 KPAD_u8GetPressedKey(void)
{
	u8 Local_u8PressedKey=KEY_NOT_PRESSED;
	u8 user_array[4][4]=USER_NUMBERS;
	u8 state=0;

	u8 KPD_u8ColumnArray []={KPAD_C0_PIN,KPAD_C1_PIN,KPAD_C2_PIN,KPAD_C3_PIN};
	u8 KPD_u8RowArray []={KPAD_R0_PIN,KPAD_R1_PIN,KPAD_R2_PIN,KPAD_R3_PIN};

	for(u8 col=0;col<4;col++)
	{
		DIO_u8SetPinValue(KPAD_PORT,KPD_u8ColumnArray [col],pinLow);

			for(u8 row=0;row<4;row++)
			{
				DIO_u8GetPinValue(KPAD_PORT , KPD_u8RowArray [row] , &state);
				if(state==0)
				{
					Local_u8PressedKey = user_array[col][row] ;

					while(!state)
					{
						DIO_u8GetPinValue(KPAD_PORT , KPD_u8RowArray [row] , &state);
					}

					DIO_u8SetPinValue(KPAD_PORT,KPD_u8ColumnArray [col],pinHigh);
					return	Local_u8PressedKey;
				}
			}

		DIO_u8SetPinValue(KPAD_PORT,KPD_u8ColumnArray [col],pinHigh);
	}




}
