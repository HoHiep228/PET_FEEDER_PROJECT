#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <xc.h>

int main(void)
{
	DDRA = 0XFF;
	DDRB = 0XFF;
	DDRC = 0XFF;
	DDRD = 0XFF;
    while(1)
    {
        PORTA = 0X00;
		PORTB = 0X00;
		PORTC = 0X00;
		PORTD = 0X00;
		_delay_ms(1000);
		PORTA = 0XFF;
		PORTB = 0XFF;
		PORTC = 0XFF;
		PORTD = 0XFF;
		_delay_ms(1000);
    }
}