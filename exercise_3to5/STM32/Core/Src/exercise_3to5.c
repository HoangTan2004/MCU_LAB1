/*
 * exercise_3to5.c
 *
 *  Created on: Sep 20, 2024
 *      Author: HP
 */

#include "exercise_3to5.h"

//	@brief	Implement the first 7-segment LED
//	@param	Integer number from 0 to 9
void display7SEG1(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_RESET);
		break;
	default:
		HAL_GPIO_WritePin(LED7_a1_GPIO_Port, LED7_a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b1_GPIO_Port, LED7_b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c1_GPIO_Port, LED7_c1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_d1_GPIO_Port, LED7_d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e1_GPIO_Port, LED7_e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f1_GPIO_Port, LED7_f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g1_GPIO_Port, LED7_g1_Pin, GPIO_PIN_SET);
		break;
	}
}

//	@brief	Implement the second 7-segment LED
//	@param	Integer number from 0 to 9
void display7SEG2(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_RESET);
		break;
	default:
		HAL_GPIO_WritePin(LED7_a2_GPIO_Port, LED7_a2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_b2_GPIO_Port, LED7_b2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_c2_GPIO_Port, LED7_c2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_d2_GPIO_Port, LED7_d2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_e2_GPIO_Port, LED7_e2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_f2_GPIO_Port, LED7_f2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED7_g2_GPIO_Port, LED7_g2_Pin, GPIO_PIN_SET);
		break;
	}
}

//	Initial for group LED 1
int YellowCount1 = 3;
int RedCount1 = 5;
int GreenCount1 = 3;

int YellowStatus1 = 0;
int RedStatus1 = 0;
int GreenStatus1 = 1;

//	Initial for group LED 2
int YellowCount2 = 8;
int RedCount2 = 5;
int GreenCount2 = 5;

int YellowStatus2 = 0;
int RedStatus2 = 1;
int GreenStatus2 = 0;

//	@brief	Simulate the 4-way traffic light
//	@param	None
void trafficLight() {
	switch(RedStatus1) {
	case 0:
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
		if (RedCount1 <= 0) {
			RedStatus1 = 1;
			RedCount1 = 5;
		}
		RedCount1--;
		break;
	case 1:
		display7SEG1(RedCount1);
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
		if (RedCount1 <= 0) {
			RedStatus1 = 0;
			RedCount1 = 5;
		}
		RedCount1--;
		break;
	}

	switch(YellowStatus1) {
	case 0:
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
		if (YellowCount1 <= 0) {
			YellowStatus1 = 1;
			YellowCount1 = 2;
		}
		YellowCount1--;
		break;
	case 1:
		display7SEG1(YellowCount1);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
		if (YellowCount1 <= 0) {
			YellowStatus1 = 0;
			YellowCount1 = 8;
		}
		YellowCount1--;
		break;
	}

	switch(GreenStatus1) {
	case 0:
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
		if (GreenCount1 <= 0) {
			GreenStatus1 = 1;
			GreenCount1 = 3;
		}
		GreenCount1--;
		break;
	case 1:
		display7SEG1(GreenCount1);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
		if (GreenCount1 <= 0) {
			GreenStatus1 = 0;
			GreenCount1 = 7;
		}
		GreenCount1--;
		break;
	}

	switch(RedStatus2) {
	case 0:
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		if (RedCount2 <= 0) {
			RedStatus2 = 1;
			RedCount2 = 5;
		}
		RedCount2--;
		break;
	case 1:
		display7SEG2(RedCount2);
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		if (RedCount2 <= 0) {
			RedStatus2 = 0;
			RedCount2 = 5;
		}
		RedCount2--;
		break;
	}

	switch(YellowStatus2) {
	case 0:
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if (YellowCount2 <= 0) {
			YellowStatus2 = 1;
			YellowCount2 = 2;
		}
		YellowCount2--;
		break;
	case 1:
		display7SEG2(YellowCount2);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		if (YellowCount2 <= 0) {
			YellowStatus2 = 0;
			YellowCount2 = 8;
		}
		YellowCount2--;
		break;
	}

	switch(GreenStatus2) {
	case 0:
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		if (GreenCount2 <= 0) {
			GreenStatus2 = 1;
			GreenCount2 = 3;
		}
		GreenCount2--;
		break;
	case 1:
		display7SEG2(GreenCount2);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
		if (GreenCount2 <= 0) {
			GreenStatus2 = 0;
			GreenCount2 = 7;
		}
		GreenCount2--;
		break;
	}
}

