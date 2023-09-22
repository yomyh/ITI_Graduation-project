/*
 * LED.h
 *
 *  Created on: Sep 10, 2023
 *      Author: iamasd
 */

#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_


#include "std_macros.h"
#include "DIO.h"




#define LED_DIR     1

#define LED_HIGH    1
#define LED_LOW     0

#define LED_PIN_ID  0


void LED_Init();
void LED_On();
void LED_Off();

#endif /* HAL_LED_LED_H_ */
