/****************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:last to middle and middle to last using binary number led blink*/
/* Description :last to middle and middle to last  */
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
		
	}
	
}			
	