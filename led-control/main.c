#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{ 
	DDRB = 0b00100000;// configure inbuilt LED as an output device
    while (1) 
    {
		PORTB = 0b00100000; //PB5 --> HIGH
		_delay_ms(1000);
		PORTB = 0b00000000; //PB5 --> LOW
		//PORTB ^= _BV(PB5);
		_delay_ms(1000);
    }
}


