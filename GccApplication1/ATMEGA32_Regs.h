/*
 * ATMEGA32_Regs.h
 *
 * Created: 11/07/2020 04:23:43 م
 *  Author: compu
 */ 


#ifndef ATMEGA32_REGS_H_
#define ATMEGA32_REGS_H_


#include "STD.h"

#define SREG (*(volatile uint8*)(0x5F))
#define GICR  (*(volatile uint8*)(0x5B))
#define GIFR  (*(volatile uint8*)(0x5A))
#define MCUCR (*(volatile uint8*)(0x55))
#define MCUCSR  (*(volatile uint8*)(0x54))


#define PORTA (*(volatile uint8*)(0x3B))
#define PINA  (*(volatile uint8*)(0x39))
#define DDRA  (*(volatile uint8*)(0x3A))

#define PORTB (*(volatile uint8*)(0x38))
#define PINB  (*(volatile uint8*)(0x36))
#define DDRB  (*(volatile uint8*)(0x37))

#define PORTC (*((volatile uint8*)(0x35)))
#define PINC  (*((volatile uint8*)(0x33)))
#define DDRC  (*((volatile uint8*)(0x34)))

#define PORTD (*(volatile uint8*)(0x32))
#define PIND  (*(volatile uint8*)(0x30))
#define DDRD  (*(volatile uint8*)(0x31))

#define ADMUX       (*(volatile uint8*)(0x27))
#define ADCSRA      (*(volatile uint8*)(0x26))
#define ADCH        (*(volatile uint8*)(0x25))
#define ADCL        (*(volatile uint8*)(0x24))
#define ADC_Adjust  (*(volatile uint8*)(0x24))
#define SIFOR       (*(volatile uint8*)(0x50))


#endif /* ATMEGA32_REGS_H_ */