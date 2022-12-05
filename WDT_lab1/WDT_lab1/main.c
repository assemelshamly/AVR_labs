/*
 * WDT_lab1.c
 *
 * Created: 10/31/2022 7:46:57 AM
 * Author : pc
 */ 

#include <avr/io.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "WDT_int.h"
#include "DIO_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
int main(void)
{
    DIO_voidInit();
	DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_LOW);
	_delay_ms(1000);
	DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_HIGH);
	WDT_voidSetTimeout(6);
	WDT_voidEnable();
	//WDT_voidDisable();
    while (1) 
    {
    }
}

