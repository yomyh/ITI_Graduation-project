/*
 * LED.c
 *
 *  Created on: Sep 10, 2023
 *      Author: iamasd
 */
#include "DIO.h"
#include "LED.h"

void LED_Init() {
	DIO_vsetPINDir('D',LED_PIN_ID,LED_DIR);

}

void LED_On() {
	DIO_write('D',LED_PIN_ID,LED_HIGH);

}

void LED_Off() {
	DIO_write('D',LED_PIN_ID,LED_LOW);
}
