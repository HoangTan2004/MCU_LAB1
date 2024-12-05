/*
 * exercise_2.c
 *
 *  Created on: Sep 20, 2024
 *      Author: HP
 */

#include "exercise_2.h"

//	@brief	Simulate the traffic light by blink the LED
//	@param	None
void blink3LED() {
	HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
	HAL_Delay(5000);
	HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN1_Pin);
	HAL_Delay(3000);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
}
