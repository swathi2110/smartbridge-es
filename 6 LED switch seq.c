/*
 * LED switch seq.c
 *
 * Created: 07/06/2019 10:52:54
 * Author : Ad
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF;
	DDRC &= ~(1<<PC0);
    
    while (1) 
    {
		if ((PINC & (1<<PC0)) == 0)	
		{
		PORTD =0X01;
		_delay_ms(220);
		PORTD=0X02;
		_delay_ms(220);
		PORTD=0X04;
		_delay_ms(220);
		PORTD=0X08;
		_delay_ms(220);
		PORTD=0X10;
		_delay_ms(220);
		PORTD=0X20;
		_delay_ms(220);
		PORTD=0X40;
		_delay_ms(220);
		PORTD=0X80;
		_delay_ms(220);
		PORTD=0X00;
		_delay_ms(220);
		}
    }
}

