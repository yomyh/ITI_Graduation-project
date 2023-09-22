/*
 * buzzer.c
 *
 *  Created on: Sep 11, 2023
 *      Author: admin
 */

#include "DIO.h"
#include "buzzer.h"

void BUZZ_Init() {
	DIO_vsetPINDir('C',1,1 );

}

void BUZZ_On() {
	DIO_write('C',1,1);

}

void BUZZ_Off() {
	DIO_write('C',1,0);
}
