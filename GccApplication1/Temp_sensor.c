/*
 * Temp_sensor.c
 *
 * Created: 11/07/2020 06:05:39 م
 *  Author: compu
 */ 
#include "Temp_sensor.h"

void Temp_sensor_Init (void) 
{
	ADC_Init(); 
}
void Temp_sensor_Read (uint16* Temp)
{
	ADC_Read(Temp);
}

