/*
 * Practice_proj.c
 *
 * Created: 1/15/2022 7:17:43 PM
 * Author : carrolls@trine.edu
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB = 0xFF;
    for (;;)
    {
		PORTB = PORTB ^ (1<<5);
		for (volatile int16_t i; i < 1234; i++){}
    }
}
