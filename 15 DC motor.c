/*
 * DC motor.c
 *
 * Created: 11/06/2019 10:12:27
 * Author : Ad
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRC = 0xFF;
	while(1)
	{
		PORTC = 0x01;
		_delay_ms(4000);

		PORTC = 0x00;
		_delay_ms(4000);

		PORTC = 0x02;
		_delay_ms(4000);

		PORTC = 0x03;
		_delay_ms(4000);
	}
}
