/*
 * DC motor pot.c
 *
 * Created: 11/06/2019 12:31:43
 * Author : Ad
 */ 

#include<avr/io.h>
#define F_CPU 1000000
#include<util/delay.h>
#include<stdlib.h>

void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
	
}
int main(void)
{
	DDRB=0xFF;
	DDRA=0x00;
	
	_delay_ms(50);
	PWM_init();
	ADMUX|=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADPS0)|(1<<ADATE)|(1<<ADPS1)|(1<<ADPS2);
	int16_t COUNTA=0;
	
	ADCSRA|=(1<<ADSC);
	while(1)
	{
		COUNTA=ADC/4;
		OCR0=COUNTA;
		
	}
}