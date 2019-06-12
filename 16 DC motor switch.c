/*
 * DC motor switch.c
 *
 * Created: 11/06/2019 10:58:01
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
	    DDRD = 0x00;
	
    while (1)
	    {
			if ((PIND & (1<<PD0)) == 0)
			{
		    PORTC = 0x01;
		    _delay_ms(4000);
			}
			
			if ((PIND & (1<<PD1)) == 0)
			{
				PORTC = 0x02;
				_delay_ms(4000);
			}
		}
}

