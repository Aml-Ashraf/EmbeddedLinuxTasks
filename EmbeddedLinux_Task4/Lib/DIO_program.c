#include "../Include/STD_TYPES.h"
#include "../Include/Bit_Math.h"
#include "../Include/DIO_private.h"
#include "../Include/PORT_config.h"
#include "../Include/DIO_interface.h"


DIO_enumErrorStatus DIO_enumSetPinConfiguration(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, DIO_enumConfigration Copy_enumPinConfiguration)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok; 
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else if (Copy_enumPinNum > NUM_OF_PINS || Copy_enumPinNum < DIO_PIN0)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else if (Copy_enumPinConfiguration > DIO_enumInputExternalPullDown || Copy_enumPinConfiguration < DIO_enumOutput)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
				switch(Copy_enumPinConfiguration)
				{
					case DIO_enumOutput:
						SET_BIT(DDRA, Copy_enumPinNum);
						break;
						
					case DIO_enumInputInternalPullUp:
						CLR_BIT(DDRA, Copy_enumPinNum);
						SET_BIT(PORTA, Copy_enumPinNum);
						break;
					
					case DIO_enumInputExternalPullDown:
						CLR_BIT(DDRA, Copy_enumPinNum);
						CLR_BIT(PORTA, Copy_enumPinNum);
						break;
				}
			break;
			
			case DIO_enumPortB:
			switch(Copy_enumPinConfiguration)
			{
				case DIO_enumOutput:
				SET_BIT(DDRB, Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPullUp:
				CLR_BIT(DDRB, Copy_enumPinNum);
				SET_BIT(PORTB, Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPullDown:
				CLR_BIT(DDRB, Copy_enumPinNum);
				CLR_BIT(PORTB, Copy_enumPinNum);
				break;
			}
			break;
			
			case DIO_enumPortC:
			switch(Copy_enumPinConfiguration)
			{
				case DIO_enumOutput:
				SET_BIT(DDRC, Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPullUp:
				CLR_BIT(DDRC, Copy_enumPinNum);
				SET_BIT(PORTC, Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPullDown:
				CLR_BIT(DDRC, Copy_enumPinNum);
				CLR_BIT(PORTC, Copy_enumPinNum);
				break;
			}
			break;
			
			case DIO_enumPortD:
			switch(Copy_enumPinConfiguration)
			{
				case DIO_enumOutput:
				SET_BIT(DDRD, Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPullUp:
				CLR_BIT(DDRD, Copy_enumPinNum);
				SET_BIT(PORTD, Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPullDown:
				CLR_BIT(DDRD, Copy_enumPinNum);
				CLR_BIT(PORTD, Copy_enumPinNum);
				break;
			}
			break;
		}
	}	
	return Ret_enumErrorStatus;	
}

DIO_enumErrorStatus DIO_enumSetPortConfiguration(DIO_enumPortName Copy_enumPortNum, DIO_enumConfigration Copy_enumPortConfiguration)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok; 
	
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok; 
	}
	else if (Copy_enumPortConfiguration > DIO_enumInputExternalPullDown || Copy_enumPortConfiguration < DIO_enumOutput)
	{
		Ret_enumErrorStatus = DIO_enumNok; 
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk; 
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
				switch(Copy_enumPortConfiguration)
				{
					case DIO_enumOutput:
						DDRA = 0xFF;
						break;
						
					case DIO_enumInputInternalPullUp:
						DDRA = 0x00;
						PORTA = 0xFF;
						break;
					
					case DIO_enumInputExternalPullDown:
						DDRA = 0x00;
						PORTA = 0x00;
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortB:
				switch(Copy_enumPortConfiguration)
				{
					case DIO_enumOutput:
					DDRB = 0xFF;
					break;
					
					case DIO_enumInputInternalPullUp:
					DDRB = 0x00;
					PORTB = 0xFF;
					break;
					
					case DIO_enumInputExternalPullDown:
					DDRB = 0x00;
					PORTB = 0x00;
					break;
					default:
					break;
				}
				break;
			
			case DIO_enumPortC:
				switch(Copy_enumPortConfiguration)
				{
					case DIO_enumOutput:
					DDRC = 0xFF;
					break;
					
					case DIO_enumInputInternalPullUp:
					DDRC = 0x00;
					PORTC = 0xFF;
					break;
					
					case DIO_enumInputExternalPullDown:
					DDRC = 0x00;
					PORTC = 0x00;
					break;
					default:
					break;
				}
				break;
			
			case DIO_enumPortD:
				switch(Copy_enumPortConfiguration)
				{
					case DIO_enumOutput:
					DDRD = 0xFF;
					break;
					
					case DIO_enumInputInternalPullUp:
					DDRD = 0x00;
					PORTD = 0xFF;
					break;
					
					case DIO_enumInputExternalPullDown:
					DDRD = 0x00;
					PORTD = 0x00;
					break;
					default:
					break;
				}
				break;
		}
	}
		return Ret_enumErrorStatus;
}

DIO_enumErrorStatus DIO_enumSetPortValue(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok;
	
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
				ASSIGN_REG(PORTA, Copy_u32PortValue);
				break;
			
			case DIO_enumPortB:
				ASSIGN_REG(PORTB, Copy_u32PortValue);
				break;
			
			case DIO_enumPortC:
				ASSIGN_REG(PORTC, Copy_u32PortValue);
				break;
			
			case DIO_enumPortD:
				ASSIGN_REG(PORTD, Copy_u32PortValue);
				break;
			
		}
	}
	
	return Ret_enumErrorStatus;
}


DIO_enumErrorStatus DIO_enumSetPortLowNib(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok;
	
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			ASSIGN_LOW_NIB(PORTA, Copy_u32PortValue);
			break;
			
			case DIO_enumPortB:
			ASSIGN_LOW_NIB(PORTB, Copy_u32PortValue);
			break;
			
			case DIO_enumPortC:
			ASSIGN_LOW_NIB(PORTC, Copy_u32PortValue);
			break;
			
			case DIO_enumPortD:
			ASSIGN_LOW_NIB(PORTD, Copy_u32PortValue);
			break;
			
		}
	}
	
	return Ret_enumErrorStatus;
}


DIO_enumErrorStatus DIO_enumSetPortHighNib(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok;
	
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			ASSIGN_HIGH_NIB(PORTA, Copy_u32PortValue);
			break;
			
			case DIO_enumPortB:
			ASSIGN_HIGH_NIB(PORTB, Copy_u32PortValue);
			break;
			
			case DIO_enumPortC:
			ASSIGN_HIGH_NIB(PORTC, Copy_u32PortValue);
			break;
			
			case DIO_enumPortD:
			ASSIGN_HIGH_NIB(PORTD, Copy_u32PortValue);
			break;
			
		}
	}
	
	return Ret_enumErrorStatus;
}

DIO_enumErrorStatus DIO_enumSetPin(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, DIO_enumState Copy_enumPinState)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok;
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else if (Copy_enumPinNum > NUM_OF_PINS || Copy_enumPinNum < DIO_PIN_0)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else if (Copy_enumPinState > DIO_enumstateHight || Copy_enumPinState < DIO_enumStateLow)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			switch(Copy_enumPinState)
			{
				case DIO_enumStateLow:
				CLR_BIT(PORTA,Copy_enumPinNum);
				break;
				
				case DIO_enumstateHight:
				SET_BIT(PORTA,Copy_enumPinNum);
				break;
			}
			break;
			
			case DIO_enumPortB:
			switch(Copy_enumPinState)
			{
				case DIO_enumStateLow:
				CLR_BIT(PORTB,Copy_enumPinNum);
				break;
				
				case DIO_enumstateHight:
				SET_BIT(PORTB,Copy_enumPinNum);
				break;
			}
			break;
			
			case DIO_enumPortC:
			switch(Copy_enumPinState)
			{
				case DIO_enumStateLow:
				CLR_BIT(PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumstateHight:
				SET_BIT(PORTC,Copy_enumPinNum);
				break;
			}
			break;
			
			case DIO_enumPortD:
			switch(Copy_enumPinState)
			{
				case DIO_enumStateLow:
				CLR_BIT(PORTD,Copy_enumPinNum);
				break;
				
				case DIO_enumstateHight:
				SET_BIT(PORTD,Copy_enumPinNum);
				break;
			}
			break;
			default:
			break;
		}
	}
	return Ret_enumErrorStatus;	
}

DIO_enumErrorStatus DIO_enumGetPinValue(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, u8* Add_u8PinValue)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok; 
	
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}

	else if (Copy_enumPinNum > NUM_OF_PINS || Copy_enumPinNum < DIO_PIN_0)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	
	else if (Add_u8PinValue == NULL)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
				*Add_u8PinValue = GET_BIT(PINA, Copy_enumPinNum);
				break;
			
			case DIO_enumPortB:
				*Add_u8PinValue = GET_BIT(PINB, Copy_enumPinNum);
				break;
			
			case DIO_enumPortC:
				*Add_u8PinValue = GET_BIT(PINC, Copy_enumPinNum);
				break;
			
			case DIO_enumPortD:
				*Add_u8PinValue = GET_BIT(PIND, Copy_enumPinNum);
				break;
			default:
				break;
		}
		
	}
	
	return Ret_enumErrorStatus;
}

DIO_enumErrorStatus DIO_enumSetPort(DIO_enumPortName Copy_enumPortNum, DIO_enumState Copy_enumPinState)
{
	DIO_enumErrorStatus Ret_enumErrorStatus = DIO_enumNok; 
	if(Copy_enumPortNum > NO_OF_PORTS ||  Copy_enumPortNum < DIO_enumPortA)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	
	else if (Copy_enumPinState > DIO_enumstateHight || Copy_enumPinState < DIO_enumStateLow)
	{
		Ret_enumErrorStatus = DIO_enumNok;
	}
	else
	{
		 Ret_enumErrorStatus = DIO_enumOk;
		 switch(Copy_enumPortNum)
		 {
			 case DIO_enumPortA:
				switch(Copy_enumPinState)
				{
					case DIO_enumStateLow:
						PORTA = 0x00;
						break;
					
					case DIO_enumstateHight:
						PORTA = 0xFF;
						break;
				}
				break;
			 
			 case DIO_enumPortB:
				switch(Copy_enumPinState)
				{
					case DIO_enumStateLow:
					PORTB = 0x00;
					break;
					
					case DIO_enumstateHight:
					PORTB = 0xFF;
					break;
				}
				break;
			 
			 case DIO_enumPortC:
				switch(Copy_enumPinState)
				{
					case DIO_enumStateLow:
					PORTC = 0x00;
					break;
					
					case DIO_enumstateHight:
					PORTC = 0xFF;
					break;
				}
				break;
			 
			 case DIO_enumPortD:
				switch(Copy_enumPinState)
				{
					case DIO_enumStateLow:
					PORTD = 0x00;
					break;
					
					case DIO_enumstateHight:
					PORTD = 0xFF;
					break;
				}
			
				break;
			 default:
				break;
		 } 	
	}
	return Ret_enumErrorStatus;
}

void delay_ms(u32 Copy_u32DelayMs)
{
	u32 i;
	for (i = 0; i< Copy_u32DelayMs*100; i++)
	{
		asm("NOP");
		
	}
	
}






