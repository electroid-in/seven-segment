/*
 * seven segment.c
 *
 * Created: 02-09-2025 11:47:26 AM
 * Author : ADHITHYAN
 */ 

#include <avr/io.h>
#define F_CPU 1000000
#include<util/delay.h>

int main(void)
{
	DDRA=0xFF;
	DDRB=0xFF;
	DDRC=0xFF;
	while (1)
	{
		PORTB = 0x3F;
		_delay_ms(1000);

		PORTB = 0x06;
		_delay_ms(1000);

		PORTB = 0x5B;
		_delay_ms(1000);
		
		PORTB = 0x4F;
		_delay_ms(1000);
		
		PORTB = 0x66;
		_delay_ms(1000);

		PORTB = 0x6D;
		_delay_ms(1000);

		PORTB = 0x7D;
		_delay_ms(1000);
		
		PORTB = 0x07;
		_delay_ms(1000);
		
		PORTB = 0x7F;
		_delay_ms(1000);
		
		PORTB = 0x6F;
		_delay_ms(1000);
		
		
		PORTA = 0xC0;
		_delay_ms(1000);

		PORTA = 0xF9;
		_delay_ms(1000);

		PORTA = 0xA4;
		_delay_ms(1000);
		
		PORTA = 0xB0;
		_delay_ms(1000);
		
		PORTA = 0x99;
		_delay_ms(1000);

		PORTA = 0x92;
		_delay_ms(1000);

		PORTA = 0x82;
		_delay_ms(1000);
		
		PORTA = 0xF8;
		_delay_ms(1000);
		
		PORTA = 0x80;
		_delay_ms(1000);
		
		PORTA = 0x90;
		_delay_ms(1000);
	}
    }

