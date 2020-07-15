/*
 * ADC.c
 *
 * Created: 11/07/2020 04:52:15 م
 *  Author: compu
 */ 
#include "ADC.h"

void ADC_Init (void)
{
	
//Reference Selection Bits
#if ADC_VOLTAGE_REFRENCE  ==   ADC_VREF_AVCC


SET_BIT (ADMUX , 6) ;

CLR_BIT (ADMUX , 7) ;




#endif

#if ADC_VOLTAGE_REFRENCE  ==   ADC_AREF


CLR_BIT (ADMUX , 6) ;

CLR_BIT (ADMUX , 7) ;




#endif

#if ADC_VOLTAGE_REFRENCE  ==   ADC_Reserved


CLR_BIT (ADMUX , 6) ;

SET_BIT (ADMUX , 7) ;




#endif

#if ADC_VOLTAGE_REFRENCE  ==   ADC_Internal_Voltage


SET_BIT (ADMUX , 6) ;

SET_BIT (ADMUX , 7) ;




#endif




// SELECT CHANNELS


#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 0 ) ; 

#endif


#if ADCCHANNEL     ==          ADCCHANNEL_2


SET_BIT (ADMUX , 1 ) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 2) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 3 ) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 4 ) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 5 ) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 6 ) ;

#endif

#if ADCCHANNEL     ==          ADCCHANNEL_1


SET_BIT (ADMUX , 7 ) ;

#endif











//ADC ADUSENT 

#if ADC_ADJUSCENT      ==       ADC_RIGHT_ADJUST

CLR_BIT(ADMUX , 5 ) ; 


#endif


#if ADC_ADJUSCENT      ==       ADC_LEFT_ADJUST

SET_BIT(ADMUX , 5 ) ;

#endif



















//MODE
#if ADC_CONVERSION_TRIGGER ==   ADC_Auto_TRIGGER


SET_BIT ( ADCSRA, 5 );

#endif





//PRESCALER


#if ADC_PRESCALER     ==        ADC_PRES_2

SET_BIT(ADCSRA , 0);


#endif

#if ADC_PRESCALER     ==        ADC_PRES_4

SET_BIT(ADCSRA , 1 );

#endif

#if ADC_PRESCALER     ==        ADC_PRES_8

SET_BIT(ADCSRA , 0);
SET_BIT(ADCSRA , 1);


#endif

#if ADC_PRESCALER     ==        ADC_PRES_16

SET_BIT(ADCSRA , 2);


#endif

#if ADC_PRESCALER     ==        ADC_PRES_32

SET_BIT(ADCSRA , 0);
SET_BIT(ADCSRA , 2);


#endif
#if ADC_PRESCALER     ==        ADC_PRES_64

SET_BIT(ADCSRA , 1);
SET_BIT(ADCSRA , 2);


#endif

#if ADC_PRESCALER     ==        ADC_PRES_128

SET_BIT(ADCSRA , 0);

SET_BIT(ADCSRA , 1);

SET_BIT(ADCSRA , 2);


#endif








#if ADC_INTERRUPT ==  ADC_INTERRUPT_DISSABLE

CLR_BIT(ADCSRA,3);

#endif 



#if ADC_INTERRUPT ==  ADC_INTERRUPT_ENABLE

SET_BIT (ADCSRA,3);

#endif




// SIFOR ADC AUTO TRIGGER SOURCE 

#if ADC_SIFOR    ==      Free_Running_Mode

(SIFOR,0);

#endif


#if ADC_SIFOR    ==      Analog_Comparator

(SIFOR,1);

#endif


#if ADC_SIFOR    ==      External_Interrupt_Request

(SIFOR,2);

#endif


#if ADC_SIFOR    ==      Timer_Counter0_CompareMatch

(SIFOR,3);

#endif


#if ADC_SIFOR    ==      Timer_Counter0_Overflow

(SIFOR,4);

#endif


#if ADC_SIFOR    ==      Timer_Counter1_CompareMatchB

(SIFOR,5);

#endif


#if ADC_SIFOR    ==      Timer_Counter1_Overflow

(SIFOR,6);

#endif


#if ADC_SIFOR    ==      Timer_Counter1_CaptureEvent

(SIFOR,7);

#endif






















//ADC ENABLE 
SET_BIT (ADCSRA , 7 ); 

}


void ADC_Read (uint16* value )
{
	uint16 Digital_Value = 0 ; 	
  
  // START CONVERSION 
  SET_BIT(ADCSRA , 6 );
  
  #if ADC_INTERRUPT_DISABLE == ADC_INTERRUPT_DISSABLE 
while ( ! GET_BIT (ADCSRA , 4)) ; 

// ACESS 16 BIT NOT USING BITWISE 
Digital_Value = ADC_Adjust ;

*value = ((Digital_Value * 500) / 1024 ) ; 

#endif	
	
}