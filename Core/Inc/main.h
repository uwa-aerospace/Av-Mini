/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32l0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AXL_INT1_Pin GPIO_PIN_1
#define AXL_INT1_GPIO_Port GPIOA
#define AXL_INT1_EXTI_IRQn EXTI0_1_IRQn
#define AXL_INT2_Pin GPIO_PIN_2
#define AXL_INT2_GPIO_Port GPIOA
#define AXL_INT2_EXTI_IRQn EXTI2_3_IRQn
#define SS_AXL_Pin GPIO_PIN_3
#define SS_AXL_GPIO_Port GPIOA
#define DRDY_Pin GPIO_PIN_0
#define DRDY_GPIO_Port GPIOB
#define DRDY_EXTI_IRQn EXTI0_1_IRQn
#define SS_ABP_Pin GPIO_PIN_2
#define SS_ABP_GPIO_Port GPIOB
#define LED_PWM_Pin GPIO_PIN_4
#define LED_PWM_GPIO_Port GPIOB
#define LED_USB_Pin GPIO_PIN_6
#define LED_USB_GPIO_Port GPIOB
#define LED_BAT_Pin GPIO_PIN_7
#define LED_BAT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
