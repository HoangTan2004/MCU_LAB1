/*
 * ex1.c
 *
 *  Created on: Sep 20, 2024
 *      Author: HP
 */

#include "exercise_1.h"

//	@brief	Switch the LED for every 2 seconds
//	@param	None
void blinkLED() {
	HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
	HAL_Delay(2000);
}
