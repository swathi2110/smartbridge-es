/*
 * 7 seg disp.c
 *
 * Created: 10/06/2019 10:01:26
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
			PORTD=0x3F;
			_delay_ms(1000);
			PORTD=0x06;
			_delay_ms(1000);
			PORTD=0x5B;
			_delay_ms(1000);
			PORTD=0x4F;
			_delay_ms(1000);
			PORTD=0x66;
			_delay_ms(1000);
			PORTD=0x6D;
			_delay_ms(1000);
			PORTD=0x7D;
			_delay_ms(1000);
			PORTD=0x07;
			_delay_ms(1000);
			PORTD=0x7F;
			_delay_ms(1000);
			PORTD=0x6F;
			_delay_ms(1000);
			PORTD=0x00;
			_delay_ms(1000);
		}
}

