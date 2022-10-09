/****************************************/
/* Author : Prasanna */
/* Date   : 29-09-2022 */
/* Filename:running led blink  using decimal number led blink*/
/* Description : running led blink led blink  */
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
		PORTB=255;
		__delay_ms(300);
		PORTB=0;
		__delay_ms(500);
		
	}	
		
}		