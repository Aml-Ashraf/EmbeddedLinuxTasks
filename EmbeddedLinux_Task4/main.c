/*
 * DIO_Assignment.c
 *
 * Created: 11/26/2023 1:21:08 AM
 * Author : aml_ahraf
 */ 

#define F_CPU		1000000u

#include "STD_TYPES.h"

#include "PORT_interface.h"
#include "DIO_interface.h"



int main(void)
{
	u8 counter = 0;
	u8 getValue;
	
	PORT_init();
    
	/*************************************************Task 1******************************************************/
		
		/*
		while(1)
		{
			DIO_enumSetPin(DIO_enumPortA,DIO_PIN_0,DIO_enumstateHight);
			DIO_enumSetPin(DIO_enumPortA,DIO_PIN_1,DIO_enumStateLow);
			delay_ms(1000);
	
			DIO_enumSetPin(DIO_enumPortA,DIO_PIN_1,DIO_enumstateHight);
			DIO_enumSetPin(DIO_enumPortA,DIO_PIN_0,DIO_enumStateLow);
			
			delay_ms(1000);
			
			
		}*/

		while (1)
		{
			DIO_enumGetPinValue(DIO_enumPortD, DIO_PIN_7, &getValue); 

			if( getValue == 0)
			{
				counter++;
			}
			
			delay_ms(200);
			if( counter > 15 )
			{
				counter = 0;
			}
			DIO_enumSetPortLowNib(DIO_enumPortC,counter);
		}
}
	
	
	
	
	

	
	
	
	
	
	
	
	
