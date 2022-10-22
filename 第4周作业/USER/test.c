#include "sys.h"
#include "delay.h"
#include "led.h"
int main(void)
{ 
	Stm32_Clock_Init(9); //??????
	delay_init(72); //?????
	LED_Init(); //???? LED ???????
	while(1)
	{
		LED0=0;
		LED1=1;
		LED2=1;
		delay_ms(1000);
		LED0=1;
		LED1=0;
		LED2=1;
		delay_ms(1000);
		LED0=1;
		LED1=1;
		LED2=0;
		delay_ms(1000);
	} 
}
