#include"Wiper_Control_System.h"            
                             
#include<stdio.h>           

#include<stdint.h>        


int main(void)
{
uint32_t FUNCTIONALITY = 0;
uint32_t SWITCH_TRIGGER_EVENT = 0;
while (1)                                                           
{
GPIO_OUT(GPIOA, GPIO_PIN_NO_0, DISABLE);
if (GPIO_IN(GPIOA, GPIO_PIN_NO_0) == ENABLE)
{
			MAKE_A_DELAY();
			FUNCTIONALITY++;
			if ((FUNCTIONALITY == 1) && (SWITCH_TRIGGER != 1))
			{
				UNLOCK_CAR();
				SWITCH_TRIGGER = FUNCTIONALITY;
				FUNCTIONALITY = 0;
			}
			else if ((FUNCTIONALITY == 2) && (SWITCH_TRIGGER != 2))
			{
				LOCK_CAR();
				SWITCH_TRIGGER = FUNCTIONALITY;
				FUNCTIONALITY = 0;
			}
			else ((FUNCTIONALITY == 3) && (SWITCH_TRIGGER != 3))
			{
				WIPER_MOVEMENT();
				SWITCH_TRIGGER = FUNCTIONALITY;
				FUNCTIONALITY = 0;
			}
			else if (FUNCTIONALITY == 4)
			{
				WIPER_SYSTEM_OFF();
				SWITCH_TRIGGER = FUNCTIONALITY;
				FUNCTIONALITY = 0;
			}
}
}
}
void Delay_time(void)
{
	for (uint32_t j = 0; j < 30000000; j++)
		;
}
void on_wiper(void) 
{
	GPIO_toggle(GPIOD, PIN_NO_10);
	Delay_time();
	GPIO_Output(GPIOD, PIN_NO_10,0 );
	GPIO_toggle(GPIOD, PIN_NO_11);
	Delay_time();
	GPIO_Output(GPIOD, PIN_NO_11,0 );
	GPIO_toggle(GPIOD, PIN_NO_12);
	Delay_time();
	GPIO_Output(GPIOD, PIN_NO_12,0 );
}
void off_wiper(void) 
	GPIO_toggle(GPIOD, PIN_NO_15);
	Delay_time();
	GPIO_output(GPIOD , PIN_NO_15, 0 );
}
