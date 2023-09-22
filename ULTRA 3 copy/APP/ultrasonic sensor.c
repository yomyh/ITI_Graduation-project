#include <avr/io.h>
#include "ULTRA.h"

#include <util/delay.h>
int main(void)
{
	LCD_vInit();
	BUZZ_Init();

	DIO_vsetPINDir('D',7,1);
    while(1)
    {	

        ULTEA_CON();

	}
}

