/*
 * ledseq2.c
 *
 * Created: 04/06/2019 14:42:28
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
		PORTD=0x01;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
		PORTD=0x02;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
		PORTD=0x04;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
		PORTD=0x08;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
				PORTD=0x10;
				_delay_ms(1000);
				PORTD=0x00;
				_delay_ms(1000);
				PORTD=0x20;
				_delay_ms(1000);
				PORTD=0x00;
				_delay_ms(1000);
				PORTD=0x40;
				_delay_ms(1000);
				PORTD=0x00;
				_delay_ms(1000);
				PORTD=0x80;
				_delay_ms(1000);
				PORTD=0x00;
				_delay_ms(1000);
	}
}

