/*
 * LED LCD.c
 *
 * Created: 07/06/2019 12:51:57
 * Author : Ad
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include<util/delay.h>

#define RS 7
#define E 5

void send_command (unsigned char command);
void send_character (unsigned char character);


int main(void)
{
	DDRA = 0xFF;
	while (1)
	{		
		    DDRC = 0xFF;
		    DDRD = 0xFF;
		    _delay_ms(500);
		    
		    send_command (0X01);
		    send_command (0X38);
		    send_command (0X0E);
		
			send_character (0x45);
			send_character (0x53);
			send_character (0x54);
			send_character (0x48);
			send_character (0x45);
			send_character (0x52);
			send_character (0x20);
			send_character (0x26);
			send_character (0x20);
			send_character (0x53);
			send_character (0x57);
			send_character (0x41);
			send_character (0x54);
			send_character (0x48);
			send_character (0x49);

		PORTA = 0XFF;
		PORTD = 0XFF;
		DDRC = 0xFF;
		send_command(0x01);
		send_character(0x4F);
		send_character(0x4E);
		_delay_ms(500);
		PORTA =0X00;
		_delay_ms(220);
	}
}

void send_command (unsigned char command)
{
	PORTC = command;
	PORTD &= ~(1<<RS);
	PORTD |= (1<<E);
	_delay_ms(50);
	
	PORTD &= ~(1<<E);
	PORTC =0;
}

void send_character(unsigned char character)
{
	PORTC = character;
	PORTD |= (1<<RS);
	PORTD |= (1<<E);
	_delay_ms(50);
	
	PORTD &= ~(1<<E);
	PORTC =0;
}
