#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H


typedef enum
{
	DIO_enumPortA=0,
	DIO_enumPortB,
	DIO_enumPortC,	
	DIO_enumPortD
}DIO_enumPortName;

typedef enum
{
	DIO_enumOutput=0,
	DIO_enumInputInternalPullUp,
	DIO_enumInputExternalPullDown
}DIO_enumConfigration;

typedef enum
{
	DIO_PIN_0,
	DIO_PIN_1,
	DIO_PIN_2,
	DIO_PIN_3,
	DIO_PIN_4,
	DIO_PIN_5,
	DIO_PIN_6,
	DIO_PIN_7
}DIO_enumPinNum;

typedef enum
{
	DIO_enumNok=0,
	DIO_enumOk
}DIO_enumErrorStatus;

typedef enum
{
	DIO_enumStateLow=0,
	DIO_enumstateHight
}DIO_enumState;

DIO_enumErrorStatus DIO_enumSetPinConfiguration(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, DIO_enumConfigration Copy_enumPinConfiguration);

DIO_enumErrorStatus DIO_enumSetPortConfiguration(DIO_enumPortName Copy_enumPortNum, DIO_enumConfigration Copy_enumPortConfiguration);

DIO_enumErrorStatus DIO_enumSetPortValue(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue);

DIO_enumErrorStatus DIO_enumSetPortLowNib(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue);
DIO_enumErrorStatus DIO_enumSetPortHighNib(DIO_enumPortName Copy_enumPortNum, u32 Copy_u32PortValue); 

DIO_enumErrorStatus DIO_enumSetPin(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, DIO_enumState Copy_enumPinState);

DIO_enumErrorStatus DIO_enumGetPinValue(DIO_enumPortName Copy_enumPortNum, DIO_enumPinNum Copy_enumPinNum, u8* Add_u8PinValue);

DIO_enumErrorStatus DIO_enumSetPort(DIO_enumPortName Copy_enumPortNum, DIO_enumState Copy_enumPinState);

void delay_ms(u32 Copy_u32DelayMs);

#endif




