#include "main.h"
#include "stm32f4xx.h"                  
#include "stm32f4xx_conf.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

//*******************************************************
//*******************************************************

int main(void)
{    
  //  ?????????????? ????? 
  GPIO_init();    
  //  ?????????????? ??????    
  button_ini();
  while (1)
  {      
        /* USER CODE END WHILE */

   HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);

   HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);  

   HAL_Delay(1000);

    /* USER CODE BEGIN 3 */     
   }     
}