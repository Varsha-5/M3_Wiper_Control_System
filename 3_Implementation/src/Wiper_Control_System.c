#include"wiper.h"            
                             
#include<stdio.h>           

#include<stdint.h>        
 

int main(void)
{
uint32_t TARGET = 0;
uint32_t SWITCH_ON = 0;
uint32_t SWITCH_OFF =0;
uint32_t INDICATOR= 0 ;
while (1)                                                           
{
GPIO_OUT(GPIOA, GPIO_PIN_NO_0, DISABLE);
if (GPIO_IN(GPIOA, GPIO_PIN_NO_0) == ENABLE)
{
			DELAY();
			TARGET++;
			if ((TARGET == 1) && (SWITCH_ON != 1) && (SWITCH_ON != 2) && SWITCH_ON != 3)
			{
				UNLOCK_CAR();
				SWITCH_ON = TARGET;
				TARGET = 0;
			}
			else if ((TARGET == 2) && (BUTTON_ON != 2) && BUTTON_ON != 3)
			{
				LOCK_CAR();
				SWITCH_ON = TARGET;
				TARGET = 0;
			}
			else ((ifTARGET == 3) && (SWITCH_ON != 3))
			{
				WIPER_MOVEMENT();
				SWITCH_ON = TARGET;
				TARGET = 0;
			}
			else if (TARGET == 4)
			{
				WIPER_SYSTEM_OFF();
				SWITCH_ON = TARGET;
				TARGET = 0;
			}
}
}
}
void DELAY(void)
{
	for (uint32_t j = 0; j < 30000000; j++)
		;
}
void WIPER_SYSTEM_ON(void) 
{
	GPIO_toggle(GPIOD, PIN_NO_12);
	DELAY();
	GPIO_Output(GPIOD, PIN_NO_12,0 );
}
void WIPER_SYSTEM_OFF(void) 
	GPIO_toggle(GPIOD, PIN_NO_12);
	DELAY();
	GPIO_output(GPIOD , PIN_NO_12, 0 );
}
