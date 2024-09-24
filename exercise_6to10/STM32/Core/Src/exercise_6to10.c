/*
 * exercise_6to10.c
 *
 *  Created on: Sep 20, 2024
 *      Author: HP
 */

#include "exercise_6to10.h"

//	This is the function for exercise 7
//	@brief	Turn off all 12 LEDs
//	@param	None
void clearAllClock() {
	HAL_GPIO_WritePin(CLK_0_GPIO_Port, CLK_1_Pin, SET);
	HAL_GPIO_WritePin(CLK_1_GPIO_Port, CLK_1_Pin, SET);
	HAL_GPIO_WritePin(CLK_2_GPIO_Port, CLK_2_Pin, SET);
	HAL_GPIO_WritePin(CLK_3_GPIO_Port, CLK_3_Pin, SET);
	HAL_GPIO_WritePin(CLK_4_GPIO_Port, CLK_4_Pin, SET);
	HAL_GPIO_WritePin(CLK_5_GPIO_Port, CLK_5_Pin, SET);
	HAL_GPIO_WritePin(CLK_6_GPIO_Port, CLK_6_Pin, SET);
	HAL_GPIO_WritePin(CLK_7_GPIO_Port, CLK_7_Pin, SET);
	HAL_GPIO_WritePin(CLK_8_GPIO_Port, CLK_8_Pin, SET);
	HAL_GPIO_WritePin(CLK_9_GPIO_Port, CLK_9_Pin, SET);
	HAL_GPIO_WritePin(CLK_10_GPIO_Port, CLK_10_Pin, SET);
	HAL_GPIO_WritePin(CLK_11_GPIO_Port, CLK_11_Pin, SET);
}

//	This is the function for exercise 8
//	@brief	Turn on the LEDs
//	@param	The number of the LEDs from 0 to 11
void setNumberOnClock(int num) {
	if (num == 0) HAL_GPIO_WritePin(CLK_0_GPIO_Port, CLK_0_Pin, RESET);
	if (num == 1) HAL_GPIO_WritePin(CLK_1_GPIO_Port, CLK_1_Pin, RESET);
	if (num == 2) HAL_GPIO_WritePin(CLK_2_GPIO_Port, CLK_2_Pin, RESET);
	if (num == 3) HAL_GPIO_WritePin(CLK_3_GPIO_Port, CLK_3_Pin, RESET);
	if (num == 4) HAL_GPIO_WritePin(CLK_4_GPIO_Port, CLK_4_Pin, RESET);
	if (num == 5) HAL_GPIO_WritePin(CLK_5_GPIO_Port, CLK_5_Pin, RESET);
	if (num == 6) HAL_GPIO_WritePin(CLK_6_GPIO_Port, CLK_6_Pin, RESET);
	if (num == 7) HAL_GPIO_WritePin(CLK_7_GPIO_Port, CLK_7_Pin, RESET);
	if (num == 8) HAL_GPIO_WritePin(CLK_8_GPIO_Port, CLK_8_Pin, RESET);
	if (num == 9) HAL_GPIO_WritePin(CLK_9_GPIO_Port, CLK_9_Pin, RESET);
	if (num == 10) HAL_GPIO_WritePin(CLK_10_GPIO_Port, CLK_10_Pin, RESET);
	if (num == 11) HAL_GPIO_WritePin(CLK_11_GPIO_Port, CLK_11_Pin, RESET);
}

//	This is the function for exercise 9
//	@brief	Turn off the LEDs
//	@param	The number of the LEDs from 0 to 11
void clearNumberOnClock(int num) {
	if (num == 0) HAL_GPIO_WritePin(CLK_0_GPIO_Port, CLK_0_Pin, SET);
	if (num == 1) HAL_GPIO_WritePin(CLK_1_GPIO_Port, CLK_1_Pin, SET);
	if (num == 2) HAL_GPIO_WritePin(CLK_2_GPIO_Port, CLK_2_Pin, SET);
	if (num == 3) HAL_GPIO_WritePin(CLK_3_GPIO_Port, CLK_3_Pin, SET);
	if (num == 4) HAL_GPIO_WritePin(CLK_4_GPIO_Port, CLK_4_Pin, SET);
	if (num == 5) HAL_GPIO_WritePin(CLK_5_GPIO_Port, CLK_5_Pin, SET);
	if (num == 6) HAL_GPIO_WritePin(CLK_6_GPIO_Port, CLK_6_Pin, SET);
	if (num == 7) HAL_GPIO_WritePin(CLK_7_GPIO_Port, CLK_7_Pin, SET);
	if (num == 8) HAL_GPIO_WritePin(CLK_8_GPIO_Port, CLK_8_Pin, SET);
	if (num == 9) HAL_GPIO_WritePin(CLK_9_GPIO_Port, CLK_9_Pin, SET);
	if (num == 10) HAL_GPIO_WritePin(CLK_10_GPIO_Port, CLK_10_Pin, SET);
	if (num == 11) HAL_GPIO_WritePin(CLK_11_GPIO_Port, CLK_11_Pin, SET);
}

//	This initial for exercise 10
	int countSecond = 0;
	int countMinute = 0;
	int countHour = 0;

//	This is the function for exercise 10
//	@brief	Implement the analog clock
//	@param	None
void displayClock() {
	if (countSecond == 60) {
		clearNumberOnClock(countSecond/5 - 1);
		countSecond = 0;
		countMinute++;
	}
	setNumberOnClock(countSecond/5);
	if ((countSecond/5 != countMinute/5 + 1) && (countSecond/5 != countHour + 1)) {
		clearNumberOnClock(countSecond/5 - 1);
	}
	if (countMinute == 60) {
		clearNumberOnClock(countMinute/5 - 1);
		countMinute = 0;
		countHour++;
	}
	setNumberOnClock(countMinute/5);
	if ((countMinute/5 != countHour + 1) && (countMinute/5 != countSecond/5 + 1)) {
		clearNumberOnClock(countMinute/5 - 1);
	}
	if (countHour == 12) {
		clearNumberOnClock(countHour - 1);
		countHour = 0;
	}
	setNumberOnClock(countHour);
	if ((countHour != countSecond/5 + 1) && (countHour != countMinute/5 + 1)) {
		clearNumberOnClock(countHour - 1);
	}
	countSecond++;
}
