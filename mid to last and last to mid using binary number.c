/****************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:middle to last and last to middle using binary number led blink*/
/* Description :middle to last and last to middle  */
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

void main()
{
	TRISB=0;//port bas output
	while(1)
	{
		
		PORTB=0B00010000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00100000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B01000000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B10000000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B10000000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B01000000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00100000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00010000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
	}
	
}			
	