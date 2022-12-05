/*
 * Keypad_lab1.c
 *
 * Created: 8/26/2022 9:26:11 PM
 * Author : Assem ELshamly
 */ 

#include "STD_types.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "Keypad_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
int main(void)
{
    DIO_voidInit();
	LCD_voidInit();
	KEYPAD_voidInit();
	u8 button;
    while (1) 
    {
		button = KEYPAD_u8GetButton();
		
		if(button != KEYPAD_U8_NULL_CHAR)
		{
			LCD_voidSetCursor(LCD_U8_LINE2 , LCD_U8_DIGIT7);
			LCD_voidSendData(button);
			while(KEYPAD_u8GetButton() == button);
		}
    }
}

