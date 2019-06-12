/*
 * evenodd.c
 *
 * Created: 06/06/2019 09:16:04
 * Author : Ad
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD=0b11111111;
	while(1)
	{
		PORTD=0x55;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
		PORTD=0xAA;
		_delay_ms(1000);
		PORTD=0x00;
	}
}


