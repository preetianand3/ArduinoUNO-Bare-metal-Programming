#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	unsigned char Segment_value[10] ={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	DDRD = 0x7F;// configure inbuilt LED as an output device
	while (1)
	{
		for(int i=9; i>=0; i--){
			PORTD = Segment_value[i]; //
			_delay_ms(1000);
		}
	}
}



