/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CLK_0_Pin GPIO_PIN_0
#define CLK_0_GPIO_Port GPIOA
#define CLK_1_Pin GPIO_PIN_1
#define CLK_1_GPIO_Port GPIOA
#define CLK_2_Pin GPIO_PIN_2
#define CLK_2_GPIO_Port GPIOA
#define CLK_3_Pin GPIO_PIN_3
#define CLK_3_GPIO_Port GPIOA
#define CLK_4_Pin GPIO_PIN_4
#define CLK_4_GPIO_Port GPIOA
#define LED_RED1_Pin GPIO_PIN_5
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_6
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_7
#define LED_GREEN1_GPIO_Port GPIOA
#define LED7_a1_Pin GPIO_PIN_0
#define LED7_a1_GPIO_Port GPIOB
#define LED7_b1_Pin GPIO_PIN_1
#define LED7_b1_GPIO_Port GPIOB
#define LED7_c1_Pin GPIO_PIN_2
#define LED7_c1_GPIO_Port GPIOB
#define LED7_d2_Pin GPIO_PIN_10
#define LED7_d2_GPIO_Port GPIOB
#define LED7_e2_Pin GPIO_PIN_11
#define LED7_e2_GPIO_Port GPIOB
#define LED7_f2_Pin GPIO_PIN_12
#define LED7_f2_GPIO_Port GPIOB
#define LED7_g2_Pin GPIO_PIN_13
#define LED7_g2_GPIO_Port GPIOB
#define CLK_5_Pin GPIO_PIN_14
#define CLK_5_GPIO_Port GPIOB
#define CLK_6_Pin GPIO_PIN_15
#define CLK_6_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_8
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_9
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_10
#define LED_GREEN2_GPIO_Port GPIOA
#define CLK_7_Pin GPIO_PIN_11
#define CLK_7_GPIO_Port GPIOA
#define CLK_8_Pin GPIO_PIN_12
#define CLK_8_GPIO_Port GPIOA
#define CLK_9_Pin GPIO_PIN_13
#define CLK_9_GPIO_Port GPIOA
#define CLK_10_Pin GPIO_PIN_14
#define CLK_10_GPIO_Port GPIOA
#define CLK_11_Pin GPIO_PIN_15
#define CLK_11_GPIO_Port GPIOA
#define LED7_d1_Pin GPIO_PIN_3
#define LED7_d1_GPIO_Port GPIOB
#define LED7_e1_Pin GPIO_PIN_4
#define LED7_e1_GPIO_Port GPIOB
#define LED7_f1_Pin GPIO_PIN_5
#define LED7_f1_GPIO_Port GPIOB
#define LED7_g1_Pin GPIO_PIN_6
#define LED7_g1_GPIO_Port GPIOB
#define LED7_a2_Pin GPIO_PIN_7
#define LED7_a2_GPIO_Port GPIOB
#define LED7_b2_Pin GPIO_PIN_8
#define LED7_b2_GPIO_Port GPIOB
#define LED7_c2_Pin GPIO_PIN_9
#define LED7_c2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
