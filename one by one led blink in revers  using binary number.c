/****************************************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:one by one led blink in revers  using binary number led blink*/
/* Description : one by one led blink in revers */
/*****************************************/
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
		
		PORTB=0B00001000;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00000100;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00000010;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		PORTB=0B00000001;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		}
		
}		
		
		
		
		