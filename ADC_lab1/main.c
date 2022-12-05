/*
 * ADC_lab1.c
 *
 * Created: 9/2/2022 10:57:00 PM
 * Author : khale
 */ 
#include <stdlib.h>
#include "STD_types.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "ADC_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
    DIO_voidInit();
	LCD_voidInit();
	ADC_voidInit();
	f32 Local_u8Analog = 0;
	u16 Local_u8Digital = 0;
	s8 buffer[20];
    while (1) 
    {
		
		LCD_voidClearScreen();
		Local_u8Digital = ADC_u16Convert(ADC_u8_Channel0);
		Local_u8Analog = ((f32)(Local_u8Digital) * 5.0) / 1024.0;
		//itoa ( Local_u8Analog, buffer, 10);
		//dtostrf(float_value, min_width, num_digits_after_decimal, where_to_store_string)
		dtostrf(Local_u8Analog, 20, 15, buffer);
		LCD_voidSendString(buffer);
		_delay_ms(500);
		
    }
}