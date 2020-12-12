/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "string.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
char Nonsense[] =
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam eget \
lacus at velit \egestas molestie nec eget eros. Praesent consectetur \
tortor in nisi laoreet scelerisque. Vestibulum quis mi libero. Praesent \
quis accumsan sapien. Sed vitae lectus efficitur, laoreet tellus ut, \
blandit eros. In hac habitasse platea dictumst. Fusce lobortis leo a leo \
semper tempor. Aenean ut justo velit. Fusce vel volutpat enim, a \
pulvinar nunc. Integer a nisl felis. Aliquam erat volutpat. Etiam congue \
efficitur massa lobortis facilisis. Vestibulum purus magna, scelerisque \
at felis sit amet, auctor efficitur diam. Quisque consequat lacinia \
consectetur. Nullam a vulputate purus. Vestibulum sed vehicula mi. \n\
Pellentesque tristique congue diam sed fermentum. Donec iaculis \
feugiat sapien, eget gravida magna malesuada vel. Donec laoreet, \
ligula tristique auctor cursus, orci justo vulputate massa, sed finibus \
enim orci id mi. Nulla dignissim leo scelerisque, consequat tortor et, \
facilisis quam. In tincidunt ac arcu ut venenatis. Vestibulum sit amet \
consequat ipsum, ac lobortis arcu. Pellentesque lobortis porta nulla \
vitae pellentesque. Nunc vulputate arcu ex, semper pharetra felis \
porta at. Pellentesque viverra facilisis nibh, sed rutrum enim aliquet \
ac. Vestibulum ante sapien, pretium ut elementum quis, egestas quis \
risus. Nulla facilisi. \n\
Vestibulum a nisi mi. Phasellus eget nisi metus. Phasellus scelerisque \
accumsan massa, quis euismod ligula consequat id. Fusce a odio ut \
libero semper rhoncus. Etiam elementum lobortis rutrum. Donec nec \
felis pulvinar, venenatis odio vitae, ultrices ligula. Sed a leo venenatis, \
pulvinar sem a, accumsan massa. Fusce vitae odio a velit aliquam \
malesuada dictum suscipit arcu. Nullam in cursus mi. \n\
Pellentesque tincidunt libero at nibh ultricies volutpat. Sed sit amet \
lacus eu mi euismod vehicula. Aliquam in condimentum purus. Fusce \
egestas mauris id vulputate pulvinar. In faucibus eros orci, eget \
imperdiet nibh rhoncus in. Donec facilisis eros ut felis vehicula, at \
auctor justo lobortis. Nullam semper fermentum tempus. Vivamus nec \
ipsum in nunc condimentum gravida non et leo. Fusce eleifend \
interdum enim, eu mattis sem rhoncus at. Aliquam sed elit at eros \
tincidunt venenatis. Vivamus vel nulla facilisis, bibendum orci id, \
semper risus. Nulla pretium justo nec lacus rutrum ornare. Vivamus ut \
dolor vestibulum, suscipit urna quis, porta mi. Praesent vestibulum \
bibendum elementum. Suspendisse vitae fringilla mi, ac mattis nisl. \n\
Fusce at semper lorem. Suspendisse aliquam in dolor et fringilla. Ut \
ornare nunc non arcu lobortis, consequat rutrum quam egestas. \
Aenean eu felis id turpis imperdiet bibendum sed vel arcu. Maecenas \
facilisis pellentesque ipsum, consectetur cursus nunc sollicitudin et. \
Aliquam pellentesque felis quis mi dignissim laoreet. In eget velit nec \
felis mattis posuere. Aliquam cursus gravida feugiat. Nulla dignissim \
urna vel pulvinar eleifend. \n\
Vestibulum in mauris non tortor maximus luctus eget et ipsum. Nulla \
consectetur a urna id convallis. Curabitur sit amet elit eget nisl sodales \
tempor. Suspendisse potenti. Fusce a mollis dolor. Integer in sapien et \
magna accumsan pharetra ac pulvinar velit. Nunc eros neque, \
consectetur in sagittis eget, volutpat ut ipsum. \n\
Cras lobortis rhoncus massa ac iaculis. Nulla non elit aliquet, \
accumsan ante id, consectetur est. Mauris euismod mollis dui ut \
mattis. Suspendisse et pellentesque urna, sagittis consequat arcu. In \
pharetra molestie dolor at molestie. Integer aliquam nulla quis \
lobortis tincidunt. Morbi mollis, nisi non finibus convallis, elit leo luctus \
neque, eu gravida est tortor placerat tellus. Nulla eu dignissim mi. Ut \
gravida dictum cursus. Suspendisse sit amet fringilla nisl. Aliquam eu \
libero et orci ullamcorper tempus eu et justo. Ut cursus vehicula lacus \
id pretium. \n\
Ut in orci purus. Proin blandit enim nec sapien auctor ultrices. Aenean \
a efficitur nisi. Ut a commodo elit. Nulla in lacinia lorem. Donec erat \
ligula, hendrerit egestas lectus eu, dignissim ullamcorper metus. \
Quisque fringilla non urna in condimentum. Curabitur pulvinar massa \
eget sapien molestie.";
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
  HAL_UART_Transmit_DMA(&huart2, (uint8_t *)Nonsense, sizeof(Nonsense));
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
