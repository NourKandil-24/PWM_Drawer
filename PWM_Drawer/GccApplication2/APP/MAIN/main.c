/*
 * GccApplication2.c
 *
 * Created: 2/6/2025 2:41:24 PM
 * Author : ahmad
 */ 

#include <avr/io.h>

#include "CPU_Configuration.h"
#include "PWM_Drawerh.h"

#include <util/delay.h>

int main(void)
{
	PWMDrawer_Init();
	PWMDrawer_SignalAttributesType Signal_Data = {0, 0, 0, 0, 0};
	fint32_t Scale_ms = 0.25;
	while(1)
	{
		//TODO:: Please write your application code
		PWMDrawer_MeasureSignal(&Signal_Data);
		Scale_ms = (Signal_Data.Period_Time_ms) / 5;
		PWMDrawer_DrawSignal(&Signal_Data, Scale_ms);
		_delay_ms(100);
	}
}