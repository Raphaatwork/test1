/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPO_TCXO_EN_Pin GPIO_PIN_4
#define GPO_TCXO_EN_GPIO_Port GPIOA
#define GPO_XTAL_EN_Pin GPIO_PIN_4
#define GPO_XTAL_EN_GPIO_Port GPIOA
#define GPO_BUTTON_PULL_Pin GPIO_PIN_5
#define GPO_BUTTON_PULL_GPIO_Port GPIOA
#define GPI_TEST_MODE_Pin GPIO_PIN_6
#define GPI_TEST_MODE_GPIO_Port GPIOA
#define GPO_T20_GATE_Pin GPIO_PIN_7
#define GPO_T20_GATE_GPIO_Port GPIOA
#define GPO_RSL_RESET_Pin GPIO_PIN_0
#define GPO_RSL_RESET_GPIO_Port GPIOB
#define GPO_RSL_WAKE_UP_Pin GPIO_PIN_1
#define GPO_RSL_WAKE_UP_GPIO_Port GPIOB
#define GPO_LED_RED_Pin GPIO_PIN_8
#define GPO_LED_RED_GPIO_Port GPIOA
#define USART1_TX_RSL10_Pin GPIO_PIN_9
#define USART1_TX_RSL10_GPIO_Port GPIOA
#define USART1_RX_RSL10_Pin GPIO_PIN_10
#define USART1_RX_RSL10_GPIO_Port GPIOA
#define GPO_2_S2LP_Pin GPIO_PIN_11
#define GPO_2_S2LP_GPIO_Port GPIOA
#define GPO_1_S2LP_Pin GPIO_PIN_12
#define GPO_1_S2LP_GPIO_Port GPIOA
#define GPO_S2LP_CS_Pin GPIO_PIN_15
#define GPO_S2LP_CS_GPIO_Port GPIOA
#define SPI1_SCK_S2LP_Pin GPIO_PIN_3
#define SPI1_SCK_S2LP_GPIO_Port GPIOB
#define SPI1_MISO_S2LP_Pin GPIO_PIN_4
#define SPI1_MISO_S2LP_GPIO_Port GPIOB
#define SPI1_MOSI_S2LP_Pin GPIO_PIN_5
#define SPI1_MOSI_S2LP_GPIO_Port GPIOB
#define GPO_LED_GREEN_Pin GPIO_PIN_6
#define GPO_LED_GREEN_GPIO_Port GPIOB
#define GPO_LED_BLUE_Pin GPIO_PIN_7
#define GPO_LED_BLUE_GPIO_Port GPIOB
#define GPO_S2LP_SHDWN_Pin GPIO_PIN_8
#define GPO_S2LP_SHDWN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
