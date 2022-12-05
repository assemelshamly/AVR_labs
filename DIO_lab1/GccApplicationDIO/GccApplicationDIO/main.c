/*
 * main.c
 *
 * Created: 8/19/2022 11:07:46 PM
 *  Author: khale
 */ 
#include <avr/io.h>
#include "STD_types.h"
#include "DIO_int.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
 
int main(void)
{
	
	DIO_voidInit();
	/* activate internal pull up resistor */
	DIO_voidSetPinValue(DIO_U8_PIN24 , DIO_U8_HIGH);
	DIO_voidSetPinValue(DIO_U8_PIN26 , DIO_U8_HIGH);
	u8 counter = 0;
	PORTA = counter;
	
	while(1)
	{
		  
            if(DIO_u8GetPinValue(DIO_U8_PIN24) == 1 && counter < 9)
			{
				counter++;
				PORTA = counter;
				while(DIO_u8GetPinValue(DIO_U8_PIN24) == 1);
			}
			if(DIO_u8GetPinValue(DIO_U8_PIN26) == 1 && counter > 0)
			{
				counter--;
				PORTA = counter;
				while(DIO_u8GetPinValue(DIO_U8_PIN26) == 1);
			}
	}
	
	
	return 0;
}