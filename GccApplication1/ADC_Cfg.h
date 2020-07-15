/*
 * ADC_Cfg.h
 *
 * Created: 11/07/2020 04:53:06 م
 *  Author: compu
 */ 


#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#include "DIO.h"


#define ADC_VOLTAGE_REFRENCE     ADC_VREF_AVCC 
#define ADC_VOLTAGE_REFRENCE     ADC_AREF
#define ADC_VOLTAGE_REFRENCE     ADC_Reserved
#define ADC_VOLTAGE_REFRENCE     ADC_Internal_Voltage


//channels
#define ADCCHANNEL               ADCCHANNEL_1 
#define ADCCHANNEL               ADCCHANNEL_2
#define ADCCHANNEL               ADCCHANNEL_3
#define ADCCHANNEL               ADCCHANNEL_4
#define ADCCHANNEL               ADCCHANNEL_5
#define ADCCHANNEL               ADCCHANNEL_6
#define ADCCHANNEL               ADCCHANNEL_7
#define ADCCHANNEL               ADCCHANNEL_8


#define ADC_ADJUSCENT             ADC_RIGHT_ADJUST
#define ADC_ADJUSCENT             ADC_LEFT_ADJUST



#define ADC_CONVERSION_TRIGGER   ADC_Auto_TRIGGER  






#define ADC_PRESCALER            ADC_PRES_2
#define ADC_PRESCALER            ADC_PRES_4
#define ADC_PRESCALER            ADC_PRES_8
#define ADC_PRESCALER            ADC_PRES_16
#define ADC_PRESCALER            ADC_PRES_32
#define ADC_PRESCALER            ADC_PRES_64
#define ADC_PRESCALER            ADC_PRES_128








#define ADC_INTERRUPT    ADC_INTERRUPT_DISSABLE
#define ADC_INTERRUPT    ADC_INTERRUPT_ENABLE


#define ADC_SIFOR          Free_Running_Mode
#define ADC_SIFOR          Analog_Comparator
#define ADC_SIFOR          External_Interrupt_Request
#define ADC_SIFOR          Timer_Counter0_CompareMatch
#define ADC_SIFOR          Timer_Counter0_Overflow
#define ADC_SIFOR          Timer_Counter1_CompareMatchB
#define ADC_SIFOR          Timer_Counter1_Overflow
#define ADC_SIFOR          Timer_Counter1_CaptureEvent




#endif /* ADC_CFG_H_ */