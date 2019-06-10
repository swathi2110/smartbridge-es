/*
 * LCD.c
 *
 * Created: 07/06/2019 11:55:47
 * Author : Ad
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#define RS 7
#define E 5

void send_command (unsigned char command);
void send_character (unsigned char character);

int main(void)
{
    DDRC = 0xFF;
	DDRD = 0xFF;
	_delay_ms(50);
	
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