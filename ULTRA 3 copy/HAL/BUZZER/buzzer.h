/*
 * buzzer.h
 *
 *  Created on: Sep 11, 2023
 *      Author: admin
 */

#ifndef HAL_BUZZER_BUZZER_H_
#define HAL_BUZZER_BUZZER_H_

#define BUZZ_DIR     1

#define BUZZ_HIGH    1
#define BUZZ_LOW     0

#define BUZZ_PIN_ID  1

void BUZZ_Init();
void BUZZ_On();
void BUZZ_Off();

#endif /* HAL_BUZZER_BUZZER_H_ */
