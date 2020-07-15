/*
 * PASS.c
 *
 * Created: 13/07/2020 04:49:10 م
 *  Author: compu
 */ 
#include <string.h>
#include "PASS.h"

void PASS_Init (uint8 password) 
{ 	
char a[100],ch ;

uint8 c=0;

LCD_WriteString("ENTER YOUR PASSWORD :");

while (1)

{

	ch = getchar();

	if (ch==10){

//a[c] == NULL 
		a[c]='\0';

		break;

		}
		 else
		 {

		a[c]=ch;

LCD_WriteString("*") ; 

		c++;

	}

}

if (strcmp (a,password) == 0 )
{
	LCD_WriteString("PASSWORD IS CORRECT :"); 
	Temp_sensor_Read ();
	
}

else 
{
	LCD_WriteString("PASSWORD IS INCORRECT ") ; 
	
}

}
	


