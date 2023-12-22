/*
 * PORT_config.h
 *
 * Created: 12/2/2023 6:55:03 PM
 *  Author: aml_ahraf
 */ 


#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

/*Number of ports options*/

#define TWO_PORTS		2
#define THREE_PORTS		3
#define FOUR_PORTS		4

/******/
#define  PIN_LOW		0
#define  PIN_HIGH		1

/*pin configuration options*/

#define INPUT_PU		1
#define INPUT_HI		2
#define OUTPUT_HIGHT	3
#define OUTPUT_LOW		4

/*pre_bulid OR post_build configuration options*/
#define PRE_BULID_CONFIGURATION		1
#define POST_BUILD_CONFIGURATION	2

/*set micro-controller configuration*/

#define NO_OF_PORTS				FOUR_PORTS/******************Set one of Number of ports options HERE*****************/
#define CONFIGURATION_TYPE		PRE_BULID_CONFIGURATION/**************SET pre_bulid OR post_build configuration HERE**************/
#define NUM_OF_PINS				8
#define TOTAL_NUM_OF_PINS		32

/*set pins configuration based on number of ports you have : every port = 8pins*/

#define DIO_PIN0		OUTPUT_HIGHT/*set one of pin configuration options here*/
#define DIO_PIN1		OUTPUT_HIGHT/*set one of pin configuration options here*/
#define DIO_PIN2		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN3		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN4		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN5		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN6		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN7		OUTPUT_LOW/*set one of pin configuration options here*/

#define DIO_PIN8		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN9		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN10		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN11		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN12		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN13		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN14		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN15		OUTPUT_LOW/*set one of pin configuration options here*/

#define DIO_PIN16		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN17		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN18		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN19		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN20		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN21		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN22		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN23		OUTPUT_LOW/*set one of pin configuration options here*/

#define DIO_PIN24		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN25		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN26		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN27		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN28		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN29		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN30		OUTPUT_LOW/*set one of pin configuration options here*/
#define DIO_PIN31		INPUT_PU/*set one of pin configuration options here*/


/**********************Post compile configuration**********************/
typedef enum
{
	PORT_enumINPUT_PU,
	PORT_enumINPUT_HI,
	PORT_enumOUTPUT_HIGH,
	PORT_enumOUTPUT_LOW,
}PORT_enumpin_opt_t;

typedef enum
{
	PORT_A =0,
	PORT_B,
	PORT_C,
	PORT_D,
}PORT_enumPortNum_t;


#endif /* INCFILE1_H_ */










