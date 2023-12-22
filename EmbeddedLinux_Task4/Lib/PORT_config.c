/*
 * PORT_config.c
 *
 * Created: 12/2/2023 6:58:15 PM
 *  Author: aml_ahraf
 */ 
#include "../Include/PORT_config.h"

#if (CONFIGURATION_TYPE == POST_BUILD_CONFIGURATION)

	#if (NUM_OF_PORTS==TWO_PORTS)
	/*Allocate an global array of NUM_OF_PORTS * NUM_OF_PINS(for each port)*/
	PORT_enumpin_opt_t PORT_PINcfg [16] =
	{
		PORT_enumINPUT_HI,/*PIN0*/
		PORT_enumINPUT_HI,/*PIN1*/
		PORT_enumINPUT_HI,/*PIN2*/
		PORT_enumINPUT_HI,/*PIN3*/
		PORT_enumINPUT_HI,/*PIN4*/
		PORT_enumINPUT_HI,/*PIN5*/
		PORT_enumINPUT_HI,/*PIN6*/
		PORT_enumINPUT_HI,/*PIN7*/
		PORT_enumINPUT_HI,/*PIN8*/
		PORT_enumINPUT_HI,/*PIN9*/
		PORT_enumINPUT_HI,/*PIN10*/
		PORT_enumINPUT_HI,/*PIN11*/
		PORT_enumINPUT_HI,/*PIN12*/
		PORT_enumINPUT_HI,/*PIN13*/
		PORT_enumINPUT_HI,/*PIN14*/
		PORT_enumINPUT_HI,/*PIN15*/
	};
	/**********************************************************THREE_PORTS Case**********************************************************/
	#elif (NUM_OF_PORTS==THREE_PORTS)
	/*Allocate an global array of NUM_OF_PORTS * NUM_OF_PINS(for each port)*/
	PORT_enumpin_opt_t PORT_PINcfg [24] =
	{
		PORT_enumINPUT_HI,/*PIN0*/
		PORT_enumINPUT_HI,/*PIN1*/
		PORT_enumINPUT_HI,/*PIN2*/
		PORT_enumINPUT_HI,/*PIN3*/
		PORT_enumINPUT_HI,/*PIN4*/
		PORT_enumINPUT_HI,/*PIN5*/
		PORT_enumINPUT_HI,/*PIN6*/
		PORT_enumINPUT_HI,/*PIN7*/
		PORT_enumINPUT_HI,/*PIN8*/
		PORT_enumINPUT_HI,/*PIN9*/
		PORT_enumINPUT_HI,/*PIN10*/
		PORT_enumINPUT_HI,/*PIN11*/
		PORT_enumINPUT_HI,/*PIN12*/
		PORT_enumINPUT_HI,/*PIN13*/
		PORT_enumINPUT_HI,/*PIN14*/
		PORT_enumINPUT_HI,/*PIN15*/
		PORT_enumINPUT_HI,/*PIN16*/
		PORT_enumINPUT_HI,/*PIN17*/
		PORT_enumINPUT_HI,/*PIN18*/
		PORT_enumINPUT_HI,/*PIN19*/
		PORT_enumINPUT_HI,/*PIN20*/
		PORT_enumINPUT_HI,/*PIN21*/
		PORT_enumINPUT_HI,/*PIN22*/
		PORT_enumINPUT_HI,/*PIN23*/
	};
	/**********************************************************FOUR_PORTS Case**********************************************************/
	#elif (NUM_OF_PORTS==FOUR_PORTS)
	/*Allocate an global array of NUM_OF_PORTS * NUM_OF_PINS(for each port)*/
	PORT_enumpin_opt_t PORT_PINcfg [32] =
	{
		PORT_enumINPUT_HI,/*PIN0*/
		PORT_enumINPUT_HI,/*PIN1*/
		PORT_enumINPUT_HI,/*PIN2*/
		PORT_enumINPUT_HI,/*PIN3*/
		PORT_enumINPUT_HI,/*PIN4*/
		PORT_enumINPUT_HI,/*PIN5*/
		PORT_enumINPUT_HI,/*PIN6*/
		PORT_enumINPUT_HI,/*PIN7*/
		PORT_enumINPUT_HI,/*PIN8*/
		PORT_enumINPUT_HI,/*PIN9*/
		PORT_enumOUTPUT_LOW,/*PIN10*/
		PORT_enumINPUT_HI,/*PIN11*/
		PORT_enumINPUT_HI,/*PIN12*/
		PORT_enumINPUT_HI,/*PIN13*/
		PORT_enumINPUT_HI,/*PIN14*/
		PORT_enumINPUT_HI,/*PIN15*/
		PORT_enumINPUT_HI,/*PIN16*/
		PORT_enumINPUT_HI,/*PIN17*/
		PORT_enumINPUT_HI,/*PIN18*/
		PORT_enumINPUT_HI,/*PIN19*/
		PORT_enumINPUT_HI,/*PIN20*/
		PORT_enumINPUT_HI,/*PIN21*/
		PORT_enumINPUT_HI,/*PIN22*/
		PORT_enumINPUT_HI,/*PIN23*/
		PORT_enumINPUT_HI,/*PIN24*/
		PORT_enumINPUT_HI,/*PIN25*/
		PORT_enumINPUT_HI,/*PIN26*/
		PORT_enumINPUT_HI,/*PIN27*/
		PORT_enumINPUT_HI,/*PIN28*/
		PORT_enumINPUT_HI,/*PIN29*/
		PORT_enumINPUT_HI,/*PIN30*/
		PORT_enumINPUT_HI,/*PIN31*/
	};

	#else
	#error "InvalidConfig"
	#endif
	




#endif
