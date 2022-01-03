#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "EXT_Int_register.h"


void ExtI_0_vidEnable(void)
{
	SET_BIT(MCUCR,MCUCR_ISC01);
	
	CLR_BIT(MCUCR,MCUCR_ISC00);
	
	SET_BIT(GICR,GICR_INT0);
}
