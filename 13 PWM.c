/*
 * PWM.c
 *
 * Created: 10/06/2019 14:08:26
 * Author : Ad
 */ 

#include <avr/io.h>
#define F_CPU 80000000UL
#include <util/delay.h>

void PWM_init()
{
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRB |= (1<<PB3);
}

int main()
{
    unsigned char duty;
	PWM_init();
	
    while (1) 
    {
		for(duty=0;duty<255;duty++)
		{
			OCR0 = duty;
			_delay_ms(8);
		}
		for(duty=255;duty>1;duty--)
		{
			OCR0=duty;
			_delay_ms(8);
		}
    }
}

