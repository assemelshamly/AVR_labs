/*
 * LDR_sensor.c
 *
 * Created: 10/30/2022 4:02:51 AM
 * Author : pc
 */ 

#include <stdlib.h>
#include "STD_types.h"
#include "DIO_int.h"
#include "ADC_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
    DIO_voidInit();
	ADC_voidInit();
	f32 Local_u8Analog = 0;
	u16 Local_u8Digital = 0;
	//s8 buffer1[20];
    while (1) 
    {

		Local_u8Digital = ADC_u16Convert(ADC_u8_Channel2);
		Local_u8Analog = ((f32)(Local_u8Digital) * 5.0) / 1024.0;
		//itoa ( Local_u8Digital, buffer1, 10);
		//dtostrf(float_value, min_width, num_digits_after_decimal, where_to_store_string)
		//dtostrf(Local_u8Analog, 20, 15, buffer1);
		if (Local_u8Analog < 0.1)
		{
			DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_HIGH);
		}
		else
		{
			DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_LOW);
		}	
	

    }
}

