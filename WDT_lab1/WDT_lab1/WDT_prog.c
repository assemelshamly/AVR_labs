/*****************************************/
/*	Author : Assem ELshamly				 */
/*	Date   : 17-9-2022   		   		 */
/*	Version: 0.1				         */
/*	Driver : ICU		                 */
/*****************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "WDT_config.h"
#include "WDT_private.h"
#include "WDT_int.h"


void WDT_voidEnable(void)
{
	SET_BIT(WDTCR,WDE);
}
void WDT_voidDisable(void)
{
	/* Write logical one to WDTOE and WDE */
    WDTCR = (1<<WDE) | (1<<WDTOE);
    /* Turn off WDT */
    WDTCR = 0x00;
}
void WDT_voidSetTimeout(u8 Copy_u8Time)
{
	
	if(Copy_u8Time == WDT_U8_16_3_ms)
	{
		CLEAR_BIT(WDTCR,0);
	    CLEAR_BIT(WDTCR,1);
	    CLEAR_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_32_5_ms)
	{
		CLEAR_BIT(WDTCR,0);
	    CLEAR_BIT(WDTCR,1);
	    SET_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_65_ms)
	{
		CLEAR_BIT(WDTCR,0);
	    SET_BIT(WDTCR,1);
	    CLEAR_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_0_13_s)
	{
		CLEAR_BIT(WDTCR,0);
	    SET_BIT(WDTCR,1);
	    SET_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_0_26_s)
	{
		SET_BIT(WDTCR,0);
	    CLEAR_BIT(WDTCR,1);
	    CLEAR_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_0_52_s)
	{
		SET_BIT(WDTCR,0);
	    CLEAR_BIT(WDTCR,1);
	    SET_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_1_s)
	{
		CLEAR_BIT(WDTCR,0);
	    SET_BIT(WDTCR,1);
	    SET_BIT(WDTCR,2);
	}
	else if(Copy_u8Time == WDT_U8_2_1_s)
	{
		SET_BIT(WDTCR,0);
	    SET_BIT(WDTCR,1);
	    SET_BIT(WDTCR,2);
	}
	
	
}