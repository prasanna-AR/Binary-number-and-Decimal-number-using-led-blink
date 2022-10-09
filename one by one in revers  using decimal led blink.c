/****************************************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:one by one in revers using decimal number led blink*/
/* Description : :one by one in revers led blink  */
/*****************************************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

void main()
{
	TRISB=0;//port b as output
	while(1)
	{
		PORTB=128;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=64;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=32;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=16;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=8;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=4;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=2;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		PORTB=1;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
		}
		
}		