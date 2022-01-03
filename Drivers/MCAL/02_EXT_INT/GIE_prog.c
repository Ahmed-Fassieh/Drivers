#include "../../Liberary/STD_TYPES.h"
#include "../../Liberary/BIT_MATH.h"
#include "GIE_register.h"


void GIE_vidEnable(void)
{
	SET_BIT(SREG,7);
}

void GIE_vidDisable(void)
{
	CLR_BIT(SREG,7);
}