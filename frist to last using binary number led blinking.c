/****************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:first to last using binary number led blink*/
/* Description :first to last   */
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

void main()
{
	TRISB=0;//port b as output
	while(1)
	{
		PORTB=0B11111111;
		__delay_ms(300);
		PORTB=0B00000000;
		__delay_ms(500);
		
		
		}
		
}		