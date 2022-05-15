#include <stdio.h>
#include <stdint.h>
#include "Wiper-Control-System.h"

void Blink_LED(void);
void Make_a_delay(volatile int time_sec);
int main(void)
{
  Blink_LED();
  static int Button_Press=0;     
  while(1)
  {
  if(Button_Press==1) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Make_a_delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Make_a_delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Make_a_delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Make_a_delay(10000);
  }
  if(Button_Press==2) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Make_a_delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Make_a_delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Make_a_delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Make_a_delay(2500); 
  }
  if(Button_Press==3) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Make_a_delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Make_a_delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Make_a_delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Make_a_delay(1250); 
}
}
}
void Blink_LED(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE();
	GPIO_InitTypeDef LEDs;
	LEDs.Mode = GPIO_MODE_OUTPUT_PP;
	LEDs.Pin = GPIO_PIN_14;
  LEDs.Pin = GPIO_PIN_15;
  LEDs.Pin = GPIO_PIN_12;
  LEDs.Pin = GPIO_PIN_13;
	HAL_GPIO_Init(GPIOD, &LEDs);
}
void Make_a_delay(volatile int time_sec)
{
	int j;
        for(j = 0; j < time_sec*5000; j++)
            {}
}
