/*
 * GccApplication1.c
 *
 * Created: 11/07/2020 03:50:13 م
 * Author : compu
 */ 


#include "LCD.h"
#include "KeyPad.h"
#include "Temp_sensor.h"
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	/* Replace with your application code */
	uint8 Temp = 0;
   uint8 Pass ,x = 10 ; 	
	
	LCD_Init();
	Temp_sensor_Init(); 
	KeyPad_Init() ; 
	
	
	while (1)
	{
Temp_sensor_Read(&Temp); 

LCD_Clear () ;

 Temp = KeyPad_GetValue();

 if(Temp)
 {
	 LCD_WriteInteger(Temp);
 }



while (x!=0 )
{
	LCD_WriteString("PASSWORD PLEASE");
	if (Pass = 654321 )
	{
		LCD_WriteString("PASSWORD IS CORRECT ");
		Temp_sensor_Read ( &Temp ) ;
	}
	
	else
	{
		LCD_WriteString("PASSWORD IS INCORRECT ");
	}


}

	}
	
}


