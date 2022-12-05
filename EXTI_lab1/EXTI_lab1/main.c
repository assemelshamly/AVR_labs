/*
 * EXTI_lab1.c
 *
 * Created: 10/26/2022 11:30:29 PM
 * Author : pc
 */ 

#include <avr/io.h>
#include "STD_types.h"
#include "EXTI_int.h"
#include "GIE_int.h"
#include "DIO_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
	DIO_voidInit();
	EXTI0_voidInit();
	GIE_voidEnable();
	DIO_voidSetPinValue(DIO_U8_PIN26,DIO_U8_HIGH); //PULL UP RESISTOR
	
	while(1)
	{
		
		
		DIO_voidSetPinValue(DIO_U8_PIN18,DIO_U8_HIGH);
		_delay_ms(200);
		DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_HIGH);
		_delay_ms(200);
		DIO_voidSetPinValue(DIO_U8_PIN18,DIO_U8_LOW);
		_delay_ms(200);
		DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_LOW);
		_delay_ms(200);
		DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_LOW);
	}
}
/*INT0 ISR*/
void __vector_1(void)   __attribute((signal));
void __vector_1(void)
{
	DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_HIGH);
	_delay_ms(1000);
}

