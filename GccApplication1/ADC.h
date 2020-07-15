/*
 * ADC.h
 *
 * Created: 11/07/2020 04:52:40 م
 *  Author: compu
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "ADC_Cfg.h"
#include "ATMEGA32_Regs.h"
#include "Bit_Math.h"

// VREF = VCC = 5V
#define ADC_VREF_AVCC           0
#define ADC_AREF                1
#define ADC_Reserved            2
#define ADC_Internal_Voltage    3


// ADCL
#define   ADC_RIGHT_ADJUST   0
#define   ADC_LEFT_ADJUST    1

// DEFINE OUR FIRST CHANNEL


#define  ADCCHANNEL_1        1
#define  ADCCHANNEL_2        2
#define  ADCCHANNEL_3        3
#define  ADCCHANNEL_4        4
#define  ADCCHANNEL_5        5
#define  ADCCHANNEL_6        6
#define  ADCCHANNEL_7        7
#define  ADCCHANNEL_8        8




// FREE RUNNING MODE
#define ADC_Auto_TRIGGER     0

//Prescaler

#define ADC_PRES_2         1
#define ADC_PRES_4         2
#define ADC_PRES_8         3
#define ADC_PRES_16        4
#define ADC_PRES_32        5
#define ADC_PRES_64        6
#define ADC_PRES_128       7


//DIABLE INTERRUPT
#define ADC_INTERRUPT_DISSABLE 0
#define ADC_INTERRUPT_ENABLE   1

#define Free_Running_Mode             0
#define Analog_Comparator             1
#define External_Interrupt_Request    2 
#define Timer_Counter0_CompareMatch   3
#define Timer_Counter0_Overflow       4
#define Timer_Counter1_CompareMatchB  5
#define Timer_Counter1_Overflow       6
#define Timer_Counter1_CaptureEvent   7

    /************ APIs **************/
void ADC_Init (void) ; 
void ADC_Read (uint16* value );
#endif /* ADC_H_ */