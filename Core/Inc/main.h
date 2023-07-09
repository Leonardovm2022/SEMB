/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define GPIO_EXTI2_IRQ1_Pin GPIO_PIN_2
#define GPIO_EXTI2_IRQ1_GPIO_Port GPIOA
#define GPIO_EXTI2_IRQ1_EXTI_IRQn EXTI2_IRQn
#define GPIO_EXTI3_IRQ0_Pin GPIO_PIN_3
#define GPIO_EXTI3_IRQ0_GPIO_Port GPIOA
#define GPIO_EXTI3_IRQ0_EXTI_IRQn EXTI3_IRQn
#define GPIO_EXTI4_WARNOUT_Pin GPIO_PIN_4
#define GPIO_EXTI4_WARNOUT_GPIO_Port GPIOA
#define GPIO_EXTI4_WARNOUT_EXTI_IRQn EXTI4_IRQn
#define GPIO_Output_PM0_Pin GPIO_PIN_5
#define GPIO_Output_PM0_GPIO_Port GPIOA
#define GPIO_Output_PM1_Pin GPIO_PIN_6
#define GPIO_Output_PM1_GPIO_Port GPIOA
#define GPIO_Input_CF2_Pin GPIO_PIN_10
#define GPIO_Input_CF2_GPIO_Port GPIOB
#define GPIO_Input_CF1_Pin GPIO_PIN_12
#define GPIO_Input_CF1_GPIO_Port GPIOB
#define GPIO_Input_ZX2_Pin GPIO_PIN_13
#define GPIO_Input_ZX2_GPIO_Port GPIOB
#define GPIO_Input_ZX1_Pin GPIO_PIN_14
#define GPIO_Input_ZX1_GPIO_Port GPIOB
#define GPIO_Input_ZX0_Pin GPIO_PIN_15
#define GPIO_Input_ZX0_GPIO_Port GPIOB
#define GPIO_Output_DMA_Pin GPIO_PIN_8
#define GPIO_Output_DMA_GPIO_Port GPIOA
#define GPIO_Out_CS_Pin GPIO_PIN_9
#define GPIO_Out_CS_GPIO_Port GPIOA
#define GPIO_Input_CF4_Pin GPIO_PIN_8
#define GPIO_Input_CF4_GPIO_Port GPIOB
#define GPIO_Input_CF3_Pin GPIO_PIN_9
#define GPIO_Input_CF3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
