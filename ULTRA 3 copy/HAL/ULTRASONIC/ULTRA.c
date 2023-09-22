/*
 * ULTRA.c
 *
 *  Created on: Sep 11, 2023
 *      Author: iamasd
 */
#include "ultra.h"
#include "LCD.h"
#include "LED.h"
#include "buzzer.h"
#include <avr/io.h>
#include <util/delay.h>
#include "std.h"
#define  F_CPU 1000000UL

u8 a,b,high,distance;

void ULTRA_IN(){
	TCCR1A = 0;
		TIFR = (1<<ICF1);  	/* Clear ICF (Input Capture flag)  */
		DIO_write('D',7,1);
		_delay_us(50);
		DIO_write('D',7,0);

	    TCCR1B = 0xc1;  	/* Rising edge, no prescaler , noise canceler*/
	    while ((TIFR&(1<<ICF1)) == 0);
	    a = ICR1;  		/* Take value of capture register */
	    TIFR = (1<<ICF1);  	/* Clear ICF flag */
	    TCCR1B = 0x81;  	/* Falling edge, no prescaler ,noise canceler*/
	    while ((TIFR&(1<<ICF1)) == 0);
	    b = ICR1;  		/* Take value of capture register */
	    TIFR = (1<<ICF1);  	/* Clear ICF flag */
		TCNT1=0;
	    TCCR1B = 0;  		/* Stop the timer */
		high=b-a;
		distance = ((high*34600)/(F_CPU*2)) ;


}
void ULTEA_CON(){
	   ULTRA_IN();
       if (distance<=50)
	  		{
				LCD_clearscreen();
				LCD_vSend_string("DANGER");
				LED_Init();
				LED_On();
				BUZZ_On();
				_delay_ms(500);
			}
	  else
			{
		    LCD_clearscreen();
			LED_Off();
			BUZZ_Off();
			LCD_vSend_string("distance=");
			LCD_vSend_char((distance/10)+48);
			LCD_vSend_char((distance%10)+48);
		    LCD_vSend_string("cm");
			_delay_ms(500);
			}
}
