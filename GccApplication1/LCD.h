/*
 * LCD.h
 *
 * Created: 11/07/2020 04:27:26 م
 *  Author: compu
 */ 


#ifndef LCD_H_
#define LCD_H_


#include "LCD_Cfg.h"
#include "BIT_Math.h"
#include "DIO.h"



void LCD_Init(void);

void LCD_WriteCommand(uint8 cmd);

void LCD_WriteChar(uint8 data);

void LCD_GoTo(uint8 row, uint8 col);

void LCD_WriteString(uint8* str);

void LCD_Clear(void);

void LCD_WriteInteger (sint32 num ) ; 




#endif /* LCD_H_ */