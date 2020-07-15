/*
 * Temp_sensor.h
 *
 * Created: 11/07/2020 06:05:57 م
 *  Author: compu
 */ 


#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

#include "ADC.h"
void Temp_sensor_Init (void) ;
void Temp_sensor_Read (uint16* Temp);



#endif /* TEMP_SENSOR_H_ */