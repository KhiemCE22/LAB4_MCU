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
#define EN1_Pin GPIO_PIN_1
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_2
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_3
#define EN3_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_4
#define EN4_GPIO_Port GPIOA
#define LED_BLINKY_Pin GPIO_PIN_5
#define LED_BLINKY_GPIO_Port GPIOA
#define RED_Y_Pin GPIO_PIN_7
#define RED_Y_GPIO_Port GPIOA
#define SEG0_Pin GPIO_PIN_0
#define SEG0_GPIO_Port GPIOB
#define SEG1_Pin GPIO_PIN_1
#define SEG1_GPIO_Port GPIOB
#define SEG2_Pin GPIO_PIN_2
#define SEG2_GPIO_Port GPIOB
#define BT3_Pin GPIO_PIN_10
#define BT3_GPIO_Port GPIOB
#define LED_TOGGLE_Pin GPIO_PIN_15
#define LED_TOGGLE_GPIO_Port GPIOB
#define YELLOW_Y_Pin GPIO_PIN_8
#define YELLOW_Y_GPIO_Port GPIOA
#define GREEN_Y_Pin GPIO_PIN_9
#define GREEN_Y_GPIO_Port GPIOA
#define RED_X_Pin GPIO_PIN_10
#define RED_X_GPIO_Port GPIOA
#define YELLOW_X_Pin GPIO_PIN_11
#define YELLOW_X_GPIO_Port GPIOA
#define GREEN_X_Pin GPIO_PIN_12
#define GREEN_X_GPIO_Port GPIOA
#define SEG3_Pin GPIO_PIN_3
#define SEG3_GPIO_Port GPIOB
#define SEG4_Pin GPIO_PIN_4
#define SEG4_GPIO_Port GPIOB
#define SEG5_Pin GPIO_PIN_5
#define SEG5_GPIO_Port GPIOB
#define SEG6_Pin GPIO_PIN_6
#define SEG6_GPIO_Port GPIOB
#define BT1_Pin GPIO_PIN_8
#define BT1_GPIO_Port GPIOB
#define BT2_Pin GPIO_PIN_9
#define BT2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
