/*
 * Timer0_lab1.c
 *
 * Created: 9/3/2022 10:56:20 PM
 * Author : Assem ELshamly
 */ 
//#define F_CPU 1000000UL
#include "STD_types.h"
#include "DIO_int.h"
#include "GIE_int.h"
#include "Timer_int.h"
#include "BIT_MATH.h"
/*
volatile u8 value = 0;
#define PRELOAD 192
void func(void)
{
	static u16 count = 0;
	count++;
	if(count == 3907)
	{
		TOGGLE_BIT(value , 0);
		DIO_voidSetPinValue(DIO_U8_PIN0,value);
		count = 0;
		TIMER0_void_SetTimerReg(PRELOAD);
	}
}
*/
void ISR_LED_TOGGLE(void);
int main(void)
{
  /*  DIO_voidInit();
	DIO_voidSetPinValue(DIO_U8_PIN0,DIO_U8_LOW);
	TIMER0_void_Init();
	TIMER0_void_SetOVCallBack(func);
	TIMER0_void_SetTimerReg(PRELOAD);
	TIMER0_void_EnableOVInt();
	GIE_voidEnable();*/
    DIO_voidInit();
    TIMER0_void_Init();
	TIMER0_void_SetCTCCallBack(&ISR_LED_TOGGLE);
	TIMER0_void_SetCompareVal(250);
	TIMER0_void_EnableCTCInt();
    GIE_voidEnable();
	//DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_HIGH);
    while (1) 
    {
		
    }
}
void ISR_LED_TOGGLE(void)
{
	static u8 Local_u8State=0;
	static u16 Local_u8Counter=0;
	Local_u8Counter++;
	if(Local_u8Counter ==1000 )
	{
		DIO_voidSetPinValue(DIO_U8_PIN23,Local_u8State);
		TOGGLE_BIT(Local_u8State,0);
		Local_u8Counter=0;
	}
}

