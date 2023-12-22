/*
 * PORT_program.c
 *
 * Created: 12/2/2023 6:56:14 PM
 *  Author: aml_ahraf
 */ 
#include "../Include/STD_TYPES.h"
#include "../Include/Bit_Math.h"
#include "../Include/DIO_private.h"
#include "../Include/PORT_config.h"
#include "../Include/PORT_interface.h"

#define BINARY_HELPER(p7,p6,p5,p4,p3,p2,p1,p0) ((p7 << 7) | (p6 << 6) | (p5 << 5) | (p4 << 4) | (p3 << 3) | (p2 << 2) | (p1 << 1) | (p0))
#define CONCAT_HELPER(p7,p6,p5,p4,p3,p2,p1,p0) BINARY_HELPER(p7,p6,p5,p4,p3,p2,p1,p0)
#define CONCAT(p7,p6,p5,p4,p3,p2,p1,p0)	CONCAT_HELPER(p7,p6,p5,p4,p3,p2,p1,p0)

#if (CONFIGURATION_TYPE == POST_Compile_Configuration)
	#if(NUM_OF_PORTS==TWO_PORTS)
		/* Array of PORT_enumpinopt_t for two ports*/
		extern  PORT_enumpin_opt_t PORT_PINcfg[16];
	#elif (NUM_OF_PORTS==THREE_PORTS)
		/* Array of PORT_enumpinopt_t for three ports*/
		extern  PORT_enumpin_opt_t PORT_PINcfg[24];
	#elif(NUM_OF_PORTS==FOUR_PORTS)
		/* Array of PORT_enumpinopt_t for four ports*/
		extern  PORT_enumpin_opt_t PORT_PINcfg[32];
	#else
		/* Error if invalid number of ports*/
		#error "InvalidConfig"
	#endif
#endif


void PORT_init(void)
{
/***********************************************if the user choose PRE_BULID_CONFIGURATION*******************************************************/
#if (CONFIGURATION_TYPE == PRE_BULID_CONFIGURATION)

	#if (NO_OF_PORTS == TWO_PORTS)
		
			#if (DIO_PIN0 == INPUT_PU)
				#define	PIN0_DIR	PIN_LOW
				#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == INPUT_HI)
				#define	PIN0_DIR	PIN_LOW
				#define	PIN0_PORT	PIN_LOW
			#elif (DIO_PIN0 == OUTPUT_HIGHT)
				#define	PIN0_DIR	PIN_HIGH
				#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == OUTPUT_LOW)
				#define	PIN0_DIR	PIN_HIGH
				#define	PIN0_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN1 == INPUT_PU)
				#define	PIN1_DIR	PIN_LOW
				#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == INPUT_HI)
				#define	PIN1_DIR	PIN_LOW
				#define	PIN1_PORT	PIN_LOW
			#elif (DIO_PIN1 == OUTPUT_HIGHT)
				#define	PIN1_DIR	PIN_HIGH
				#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == OUTPUT_LOW)
				#define	PIN1_DIR	PIN_HIGH
				#define	PIN1_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN2 == INPUT_PU)
				#define	PIN2_DIR	PIN_LOW
				#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == INPUT_HI)
				#define	PIN2_DIR	PIN_LOW
				#define	PIN2_PORT	PIN_LOW
			#elif (DIO_PIN2 == OUTPUT_HIGHT)
				#define	PIN2_DIR	PIN_HIGH
				#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == OUTPUT_LOW)
				#define	PIN2_DIR	PIN_HIGH
				#define	PIN2_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN3 == INPUT_PU)
				#define	PIN3_DIR	PIN_LOW
				#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == INPUT_HI)
				#define	PIN3_DIR	PIN_LOW
				#define	PIN3_PORT	PIN_LOW
			#elif (DIO_PIN3 == OUTPUT_HIGHT)
				#define	PIN3_DIR	PIN_HIGH
				#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == OUTPUT_LOW)
				#define	PIN3_DIR	PIN_HIGH
				#define	PIN3_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN4 == INPUT_PU)
				#define	PIN4_DIR	PIN_LOW
				#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == INPUT_HI)
				#define	PIN4_DIR	PIN_LOW
				#define	PIN4_PORT	PIN_LOW
			#elif (DIO_PIN4 == OUTPUT_HIGHT)
				#define	PIN4_DIR	PIN_HIGH
				#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == OUTPUT_LOW)
				#define	PIN4_DIR	PIN_HIGH
				#define	PIN4_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN5 == INPUT_PU)
				#define	PIN5_DIR	PIN_LOW
				#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == INPUT_HI)
				#define	PIN5_DIR	PIN_LOW
				#define	PIN5_PORT	PIN_LOW
			#elif (DIO_PIN5 == OUTPUT_HIGHT)
				#define	PIN5_DIR	PIN_HIGH
				#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == OUTPUT_LOW)
				#define	PIN5_DIR	PIN_HIGH
				#define	PIN5_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN6 == INPUT_PU)
				#define	PIN6_DIR	PIN_LOW
				#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == INPUT_HI)
				#define	PIN6_DIR	PIN_LOW
				#define	PIN6_PORT	PIN_LOW
			#elif (DIO_PIN6 == OUTPUT_HIGHT)
				#define	PIN6_DIR	PIN_HIGH
				#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == OUTPUT_LOW)
				#define	PIN6_DIR	PIN_HIGH
				#define	PIN6_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN7 == INPUT_PU)
				#define	PIN7_DIR	PIN_LOW
				#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == INPUT_HI)
				#define	PIN7_DIR	PIN_LOW
				#define	PIN7_PORT	PIN_LOW
			#elif (DIO_PIN7 == OUTPUT_HIGHT)
				#define	PIN7_DIR	PIN_HIGH
				#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == OUTPUT_LOW)
				#define	PIN7_DIR	PIN_HIGH
				#define	PIN7_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN8 == INPUT_PU)
				#define	PIN8_DIR	PIN_LOW
				#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == INPUT_HI)
				#define	PIN8_DIR	PIN_LOW
				#define	PIN8_PORT	PIN_LOW
			#elif (DIO_PIN8 == OUTPUT_HIGHT)
				#define	PIN8_DIR	PIN_HIGH
				#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == OUTPUT_LOW)
				#define	PIN8_DIR	PIN_HIGH
				#define	PIN8_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN9 == INPUT_PU)
				#define	PIN9_DIR	PIN_LOW
				#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == INPUT_HI)
				#define	PIN9_DIR	PIN_LOW
				#define	PIN9_PORT	PIN_LOW
			#elif (DIO_PIN9 == OUTPUT_HIGHT)
				#define	PIN9_DIR	PIN_HIGH
				#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == OUTPUT_LOW)
				#define	PIN9_DIR	PIN_HIGH
				#define	PIN9_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN10 == INPUT_PU)
				#define	PIN10_DIR	PIN_LOW
				#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == INPUT_HI)
				#define	PIN10_DIR	PIN_LOW
				#define	PIN10_PORT	PIN_LOW
			#elif (DIO_PIN10 == OUTPUT_HIGHT)
				#define	PIN10_DIR	PIN_HIGH
				#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == OUTPUT_LOW)
				#define	PIN10_DIR	PIN_HIGH
				#define	PIN10_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN11 == INPUT_PU)
				#define	PIN11_DIR	PIN_LOW
				#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == INPUT_HI)
				#define	PIN11_DIR	PIN_LOW
				#define	PIN11_PORT	PIN_LOW
			#elif (DIO_PIN11 == OUTPUT_HIGHT)
				#define	PIN11_DIR	PIN_HIGH
				#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == OUTPUT_LOW)
				#define	PIN11_DIR	PIN_HIGH
				#define	PIN11_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN12 == INPUT_PU)
				#define	PIN12_DIR	PIN_LOW
				#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == INPUT_HI)
				#define	PIN12_DIR	PIN_LOW
				#define	PIN12_PORT	PIN_LOW
			#elif (DIO_PIN12 == OUTPUT_HIGHT)
				#define	PIN12_DIR	PIN_HIGH
				#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == OUTPUT_LOW)
				#define	PIN12_DIR	PIN_HIGH
				#define	PIN12_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN13 == INPUT_PU)
				#define	PIN13_DIR	PIN_LOW
				#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == INPUT_HI)
				#define	PIN13_DIR	PIN_LOW
				#define	PIN13_PORT	PIN_LOW
			#elif (DIO_PIN13 == OUTPUT_HIGHT)
				#define	PIN13_DIR	PIN_HIGH
				#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == OUTPUT_LOW)
				#define	PIN13_DIR	PIN_HIGH
				#define	PIN13_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN14 == INPUT_PU)
				#define	PIN14_DIR	PIN_LOW
				#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == INPUT_HI)
				#define	PIN14_DIR	PIN_LOW
				#define	PIN14_PORT	PIN_LOW
			#elif (DIO_PIN14 == OUTPUT_HIGHT)
				#define	PIN14_DIR	PIN_HIGH
				#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == OUTPUT_LOW)
				#define	PIN14_DIR	PIN_HIGH
				#define	PIN14_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN15 == INPUT_PU)
				#define	PIN15_DIR	PIN_LOW
				#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == INPUT_HI)
				#define	PIN15_DIR	PIN_LOW
				#define	PIN15_PORT	PIN_LOW
			#elif (DIO_PIN15 == OUTPUT_HIGHT)
				#define	PIN15_DIR	PIN_HIGH
				#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == OUTPUT_LOW)
				#define	PIN15_DIR	PIN_HIGH
				#define	PIN15_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
		
		
	#elif (NO_OF_PORTS == THREE_PORTS)
	
			#if (DIO_PIN0 == INPUT_PU)
				#define	PIN0_DIR	PIN_LOW
				#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == INPUT_HI)
				#define	PIN0_DIR	PIN_LOW
				#define	PIN0_PORT	PIN_LOW
			#elif (DIO_PIN0 == OUTPUT_HIGHT)
				#define	PIN0_DIR	PIN_HIGH
				#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == OUTPUT_LOW)
				#define	PIN0_DIR	PIN_HIGH
				#define	PIN0_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN1 == INPUT_PU)
				#define	PIN1_DIR	PIN_LOW
				#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == INPUT_HI)
				#define	PIN1_DIR	PIN_LOW
				#define	PIN1_PORT	PIN_LOW
			#elif (DIO_PIN1 == OUTPUT_HIGHT)
				#define	PIN1_DIR	PIN_HIGH
				#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == OUTPUT_LOW)
				#define	PIN1_DIR	PIN_HIGH
				#define	PIN1_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN2 == INPUT_PU)
				#define	PIN2_DIR	PIN_LOW
				#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == INPUT_HI)
				#define	PIN2_DIR	PIN_LOW
				#define	PIN2_PORT	PIN_LOW
			#elif (DIO_PIN2 == OUTPUT_HIGHT)
				#define	PIN2_DIR	PIN_HIGH
				#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == OUTPUT_LOW)
				#define	PIN2_DIR	PIN_HIGH
				#define	PIN2_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN3 == INPUT_PU)
				#define	PIN3_DIR	PIN_LOW
				#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == INPUT_HI)
				#define	PIN3_DIR	PIN_LOW
				#define	PIN3_PORT	PIN_LOW
			#elif (DIO_PIN3 == OUTPUT_HIGHT)
				#define	PIN3_DIR	PIN_HIGH
				#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == OUTPUT_LOW)
				#define	PIN3_DIR	PIN_HIGH
				#define	PIN3_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN4 == INPUT_PU)
				#define	PIN4_DIR	PIN_LOW
				#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == INPUT_HI)
				#define	PIN4_DIR	PIN_LOW
				#define	PIN4_PORT	PIN_LOW
			#elif (DIO_PIN4 == OUTPUT_HIGHT)
				#define	PIN4_DIR	PIN_HIGH
				#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == OUTPUT_LOW)
				#define	PIN4_DIR	PIN_HIGH
				#define	PIN4_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN5 == INPUT_PU)
				#define	PIN5_DIR	PIN_LOW
				#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == INPUT_HI)
				#define	PIN5_DIR	PIN_LOW
				#define	PIN5_PORT	PIN_LOW
			#elif (DIO_PIN5 == OUTPUT_HIGHT)
				#define	PIN5_DIR	PIN_HIGH
				#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == OUTPUT_LOW)
				#define	PIN5_DIR	PIN_HIGH
				#define	PIN5_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN6 == INPUT_PU)
				#define	PIN6_DIR	PIN_LOW
				#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == INPUT_HI)
				#define	PIN6_DIR	PIN_LOW
				#define	PIN6_PORT	PIN_LOW
			#elif (DIO_PIN6 == OUTPUT_HIGHT)
				#define	PIN6_DIR	PIN_HIGH
				#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == OUTPUT_LOW)
				#define	PIN6_DIR	PIN_HIGH
				#define	PIN6_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN7 == INPUT_PU)
				#define	PIN7_DIR	PIN_LOW
				#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == INPUT_HI)
				#define	PIN7_DIR	PIN_LOW
				#define	PIN7_PORT	PIN_LOW
			#elif (DIO_PIN7 == OUTPUT_HIGHT)
				#define	PIN7_DIR	PIN_HIGH
				#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == OUTPUT_LOW)
				#define	PIN7_DIR	PIN_HIGH
				#define	PIN7_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN8 == INPUT_PU)
				#define	PIN8_DIR	PIN_LOW
				#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == INPUT_HI)
				#define	PIN8_DIR	PIN_LOW
				#define	PIN8_PORT	PIN_LOW
			#elif (DIO_PIN8 == OUTPUT_HIGHT)
				#define	PIN8_DIR	PIN_HIGH
				#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == OUTPUT_LOW)
				#define	PIN8_DIR	PIN_HIGH
				#define	PIN8_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN9 == INPUT_PU)
				#define	PIN9_DIR	PIN_LOW
				#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == INPUT_HI)
				#define	PIN9_DIR	PIN_LOW
				#define	PIN9_PORT	PIN_LOW
			#elif (DIO_PIN9 == OUTPUT_HIGHT)
				#define	PIN9_DIR	PIN_HIGH
				#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == OUTPUT_LOW)
				#define	PIN9_DIR	PIN_HIGH
				#define	PIN9_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN10 == INPUT_PU)
				#define	PIN10_DIR	PIN_LOW
				#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == INPUT_HI)
				#define	PIN10_DIR	PIN_LOW
				#define	PIN10_PORT	PIN_LOW
			#elif (DIO_PIN10 == OUTPUT_HIGHT)
				#define	PIN10_DIR	PIN_HIGH
				#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == OUTPUT_LOW)
				#define	PIN10_DIR	PIN_HIGH
				#define	PIN10_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN11 == INPUT_PU)
				#define	PIN11_DIR	PIN_LOW
				#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == INPUT_HI)
				#define	PIN11_DIR	PIN_LOW
				#define	PIN11_PORT	PIN_LOW
			#elif (DIO_PIN11 == OUTPUT_HIGHT)
				#define	PIN11_DIR	PIN_HIGH
				#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == OUTPUT_LOW)
				#define	PIN11_DIR	PIN_HIGH
				#define	PIN11_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN12 == INPUT_PU)
				#define	PIN12_DIR	PIN_LOW
				#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == INPUT_HI)
				#define	PIN12_DIR	PIN_LOW
				#define	PIN12_PORT	PIN_LOW
			#elif (DIO_PIN12 == OUTPUT_HIGHT)
				#define	PIN12_DIR	PIN_HIGH
				#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == OUTPUT_LOW)
				#define	PIN12_DIR	PIN_HIGH
				#define	PIN12_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN13 == INPUT_PU)
				#define	PIN13_DIR	PIN_LOW
				#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == INPUT_HI)
				#define	PIN13_DIR	PIN_LOW
				#define	PIN13_PORT	PIN_LOW
			#elif (DIO_PIN13 == OUTPUT_HIGHT)
				#define	PIN13_DIR	PIN_HIGH
				#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == OUTPUT_LOW)
				#define	PIN13_DIR	PIN_HIGH
				#define	PIN13_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN14 == INPUT_PU)
				#define	PIN14_DIR	PIN_LOW
				#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == INPUT_HI)
				#define	PIN14_DIR	PIN_LOW
				#define	PIN14_PORT	PIN_LOW
			#elif (DIO_PIN14 == OUTPUT_HIGHT)
				#define	PIN14_DIR	PIN_HIGH
				#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == OUTPUT_LOW)
				#define	PIN14_DIR	PIN_HIGH
				#define	PIN14_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN15 == INPUT_PU)
				#define	PIN15_DIR	PIN_LOW
				#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == INPUT_HI)
				#define	PIN15_DIR	PIN_LOW
				#define	PIN15_PORT	PIN_LOW
			#elif (DIO_PIN15 == OUTPUT_HIGHT)
				#define	PIN15_DIR	PIN_HIGH
				#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == OUTPUT_LOW)
				#define	PIN15_DIR	PIN_HIGH
				#define	PIN15_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN16 == INPUT_PU)
				#define	PIN16_DIR	PIN_LOW
				#define	PIN16_PORT	PIN_HIGH
			#elif (DIO_PIN16 == INPUT_HI)
				#define	PIN16_DIR	PIN_LOW
				#define	PIN16_PORT	PIN_LOW
			#elif (DIO_PIN16 == OUTPUT_HIGHT)
				#define	PIN16_DIR	PIN_HIGH
				#define	PIN16_PORT	PIN_HIGH
			#elif (DIO_PIN16 == OUTPUT_LOW)
				#define	PIN16_DIR	PIN_HIGH
				#define	PIN16_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN17 == INPUT_PU)
				#define	PIN17_DIR	PIN_LOW
				#define	PIN17_PORT	PIN_HIGH
			#elif (DIO_PIN17 == INPUT_HI)
				#define	PIN17_DIR	PIN_LOW
				#define	PIN17_PORT	PIN_LOW
			#elif (DIO_PIN17 == OUTPUT_HIGHT)
				#define	PIN17_DIR	PIN_HIGH
				#define	PIN17_PORT	PIN_HIGH
			#elif (DIO_PIN17 == OUTPUT_LOW)
				#define	PIN17_DIR	PIN_HIGH
				#define	PIN17_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN18 == INPUT_PU)
				#define	PIN18_DIR	PIN_LOW
				#define	PIN18_PORT	PIN_HIGH
			#elif (DIO_PIN18 == INPUT_HI)
				#define	PIN18_DIR	PIN_LOW
				#define	PIN18_PORT	PIN_LOW
			#elif (DIO_PIN18 == OUTPUT_HIGHT)
				#define	PIN18_DIR	PIN_HIGH
				#define	PIN18_PORT	PIN_HIGH
			#elif (DIO_PIN18 == OUTPUT_LOW)
				#define	PIN18_DIR	PIN_HIGH
				#define	PIN18_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN19 == INPUT_PU)
				#define	PIN19_DIR	PIN_LOW
				#define	PIN19_PORT	PIN_HIGH
			#elif (DIO_PIN19 == INPUT_HI)
				#define	PIN19_DIR	PIN_LOW
				#define	PIN19_PORT	PIN_LOW
			#elif (DIO_PIN19 == OUTPUT_HIGHT)
				#define	PIN19_DIR	PIN_HIGH
				#define	PIN19_PORT	PIN_HIGH
			#elif (DIO_PIN19 == OUTPUT_LOW)
				#define	PIN19_DIR	PIN_HIGH
				#define	PIN19_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN20 == INPUT_PU)
				#define	PIN20_DIR	PIN_LOW
				#define	PIN20_PORT	PIN_HIGH
			#elif (DIO_PIN20 == INPUT_HI)
				#define	PIN20_DIR	PIN_LOW
				#define	PIN20_PORT	PIN_LOW
			#elif (DIO_PIN20 == OUTPUT_HIGHT)
				#define	PIN20_DIR	PIN_HIGH
				#define	PIN20_PORT	PIN_HIGH
			#elif (DIO_PIN20 == OUTPUT_LOW)
				#define	PIN20_DIR	PIN_HIGH
				#define	PIN20_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN21 == INPUT_PU)
				#define	PIN21_DIR	PIN_LOW
				#define	PIN21_PORT	PIN_HIGH
			#elif (DIO_PIN21 == INPUT_HI)
				#define	PIN21_DIR	PIN_LOW
				#define	PIN21_PORT	PIN_LOW
			#elif (DIO_PIN21 == OUTPUT_HIGHT)
				#define	PIN21_DIR	PIN_HIGH
				#define	PIN21_PORT	PIN_HIGH
			#elif (DIO_PIN21 == OUTPUT_LOW)
				#define	PIN21_DIR	PIN_HIGH
				#define	PIN21_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN22 == INPUT_PU)
				#define	PIN22_DIR	PIN_LOW
				#define	PIN22_PORT	PIN_HIGH
			#elif (DIO_PIN22 == INPUT_HI)
				#define	PIN22_DIR	PIN_LOW
				#define	PIN22_PORT	PIN_LOW
			#elif (DIO_PIN22 == OUTPUT_HIGHT)
				#define	PIN22_DIR	PIN_HIGH
				#define	PIN22_PORT	PIN_HIGH
			#elif (DIO_PIN22 == OUTPUT_LOW)
				#define	PIN22_DIR	PIN_HIGH
				#define	PIN22_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN23 == INPUT_PU)
				#define	PIN23_DIR	PIN_LOW
				#define	PIN23_PORT	PIN_HIGH
			#elif (DIO_PIN23 == INPUT_HI)
				#define	PIN23_DIR	PIN_LOW
				#define	PIN23_PORT	PIN_LOW
			#elif (DIO_PIN23 == OUTPUT_HIGHT)
				#define	PIN23_DIR	PIN_HIGH
				#define	PIN23_PORT	PIN_HIGH
			#elif (DIO_PIN23 == OUTPUT_LOW)
				#define	PIN23_DIR	PIN_HIGH
				#define	PIN23_PORT	PIN_LOW
			#else
				#error "invalid Pin configuration"
			#endif
	
	#elif (NO_OF_PORTS == FOUR_PORTS)
	
			#if (DIO_PIN0 == INPUT_PU)
			#define	PIN0_DIR	PIN_LOW
			#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == INPUT_HI)
			#define	PIN0_DIR	PIN_LOW
			#define	PIN0_PORT	PIN_LOW
			#elif (DIO_PIN0 == OUTPUT_HIGHT)
			#define	PIN0_DIR	PIN_HIGH
			#define	PIN0_PORT	PIN_HIGH
			#elif (DIO_PIN0 == OUTPUT_LOW)
			#define	PIN0_DIR	PIN_HIGH
			#define	PIN0_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN1 == INPUT_PU)
			#define	PIN1_DIR	PIN_LOW
			#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == INPUT_HI)
			#define	PIN1_DIR	PIN_LOW
			#define	PIN1_PORT	PIN_LOW
			#elif (DIO_PIN1 == OUTPUT_HIGHT)
			#define	PIN1_DIR	PIN_HIGH
			#define	PIN1_PORT	PIN_HIGH
			#elif (DIO_PIN1 == OUTPUT_LOW)
			#define	PIN1_DIR	PIN_HIGH
			#define	PIN1_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN2 == INPUT_PU)
			#define	PIN2_DIR	PIN_LOW
			#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == INPUT_HI)
			#define	PIN2_DIR	PIN_LOW
			#define	PIN2_PORT	PIN_LOW
			#elif (DIO_PIN2 == OUTPUT_HIGHT)
			#define	PIN2_DIR	PIN_HIGH
			#define	PIN2_PORT	PIN_HIGH
			#elif (DIO_PIN2 == OUTPUT_LOW)
			#define	PIN2_DIR	PIN_HIGH
			#define	PIN2_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN3 == INPUT_PU)
			#define	PIN3_DIR	PIN_LOW
			#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == INPUT_HI)
			#define	PIN3_DIR	PIN_LOW
			#define	PIN3_PORT	PIN_LOW
			#elif (DIO_PIN3 == OUTPUT_HIGHT)
			#define	PIN3_DIR	PIN_HIGH
			#define	PIN3_PORT	PIN_HIGH
			#elif (DIO_PIN3 == OUTPUT_LOW)
			#define	PIN3_DIR	PIN_HIGH
			#define	PIN3_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN4 == INPUT_PU)
			#define	PIN4_DIR	PIN_LOW
			#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == INPUT_HI)
			#define	PIN4_DIR	PIN_LOW
			#define	PIN4_PORT	PIN_LOW
			#elif (DIO_PIN4 == OUTPUT_HIGHT)
			#define	PIN4_DIR	PIN_HIGH
			#define	PIN4_PORT	PIN_HIGH
			#elif (DIO_PIN4 == OUTPUT_LOW)
			#define	PIN4_DIR	PIN_HIGH
			#define	PIN4_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN5 == INPUT_PU)
			#define	PIN5_DIR	PIN_LOW
			#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == INPUT_HI)
			#define	PIN5_DIR	PIN_LOW
			#define	PIN5_PORT	PIN_LOW
			#elif (DIO_PIN5 == OUTPUT_HIGHT)
			#define	PIN5_DIR	PIN_HIGH
			#define	PIN5_PORT	PIN_HIGH
			#elif (DIO_PIN5 == OUTPUT_LOW)
			#define	PIN5_DIR	PIN_HIGH
			#define	PIN5_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN6 == INPUT_PU)
			#define	PIN6_DIR	PIN_LOW
			#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == INPUT_HI)
			#define	PIN6_DIR	PIN_LOW
			#define	PIN6_PORT	PIN_LOW
			#elif (DIO_PIN6 == OUTPUT_HIGHT)
			#define	PIN6_DIR	PIN_HIGH
			#define	PIN6_PORT	PIN_HIGH
			#elif (DIO_PIN6 == OUTPUT_LOW)
			#define	PIN6_DIR	PIN_HIGH
			#define	PIN6_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN7 == INPUT_PU)
			#define	PIN7_DIR	PIN_LOW
			#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == INPUT_HI)
			#define	PIN7_DIR	PIN_LOW
			#define	PIN7_PORT	PIN_LOW
			#elif (DIO_PIN7 == OUTPUT_HIGHT)
			#define	PIN7_DIR	PIN_HIGH
			#define	PIN7_PORT	PIN_HIGH
			#elif (DIO_PIN7 == OUTPUT_LOW)
			#define	PIN7_DIR	PIN_HIGH
			#define	PIN7_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN8 == INPUT_PU)
			#define	PIN8_DIR	PIN_LOW
			#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == INPUT_HI)
			#define	PIN8_DIR	PIN_LOW
			#define	PIN8_PORT	PIN_LOW
			#elif (DIO_PIN8 == OUTPUT_HIGHT)
			#define	PIN8_DIR	PIN_HIGH
			#define	PIN8_PORT	PIN_HIGH
			#elif (DIO_PIN8 == OUTPUT_LOW)
			#define	PIN8_DIR	PIN_HIGH
			#define	PIN8_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN9 == INPUT_PU)
			#define	PIN9_DIR	PIN_LOW
			#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == INPUT_HI)
			#define	PIN9_DIR	PIN_LOW
			#define	PIN9_PORT	PIN_LOW
			#elif (DIO_PIN9 == OUTPUT_HIGHT)
			#define	PIN9_DIR	PIN_HIGH
			#define	PIN9_PORT	PIN_HIGH
			#elif (DIO_PIN9 == OUTPUT_LOW)
			#define	PIN9_DIR	PIN_HIGH
			#define	PIN9_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN10 == INPUT_PU)
			#define	PIN10_DIR	PIN_LOW
			#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == INPUT_HI)
			#define	PIN10_DIR	PIN_LOW
			#define	PIN10_PORT	PIN_LOW
			#elif (DIO_PIN10 == OUTPUT_HIGHT)
			#define	PIN10_DIR	PIN_HIGH
			#define	PIN10_PORT	PIN_HIGH
			#elif (DIO_PIN10 == OUTPUT_LOW)
			#define	PIN10_DIR	PIN_HIGH
			#define	PIN10_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN11 == INPUT_PU)
			#define	PIN11_DIR	PIN_LOW
			#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == INPUT_HI)
			#define	PIN11_DIR	PIN_LOW
			#define	PIN11_PORT	PIN_LOW
			#elif (DIO_PIN11 == OUTPUT_HIGHT)
			#define	PIN11_DIR	PIN_HIGH
			#define	PIN11_PORT	PIN_HIGH
			#elif (DIO_PIN11 == OUTPUT_LOW)
			#define	PIN11_DIR	PIN_HIGH
			#define	PIN11_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN12 == INPUT_PU)
			#define	PIN12_DIR	PIN_LOW
			#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == INPUT_HI)
			#define	PIN12_DIR	PIN_LOW
			#define	PIN12_PORT	PIN_LOW
			#elif (DIO_PIN12 == OUTPUT_HIGHT)
			#define	PIN12_DIR	PIN_HIGH
			#define	PIN12_PORT	PIN_HIGH
			#elif (DIO_PIN12 == OUTPUT_LOW)
			#define	PIN12_DIR	PIN_HIGH
			#define	PIN12_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN13 == INPUT_PU)
			#define	PIN13_DIR	PIN_LOW
			#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == INPUT_HI)
			#define	PIN13_DIR	PIN_LOW
			#define	PIN13_PORT	PIN_LOW
			#elif (DIO_PIN13 == OUTPUT_HIGHT)
			#define	PIN13_DIR	PIN_HIGH
			#define	PIN13_PORT	PIN_HIGH
			#elif (DIO_PIN13 == OUTPUT_LOW)
			#define	PIN13_DIR	PIN_HIGH
			#define	PIN13_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN14 == INPUT_PU)
			#define	PIN14_DIR	PIN_LOW
			#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == INPUT_HI)
			#define	PIN14_DIR	PIN_LOW
			#define	PIN14_PORT	PIN_LOW
			#elif (DIO_PIN14 == OUTPUT_HIGHT)
			#define	PIN14_DIR	PIN_HIGH
			#define	PIN14_PORT	PIN_HIGH
			#elif (DIO_PIN14 == OUTPUT_LOW)
			#define	PIN14_DIR	PIN_HIGH
			#define	PIN14_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN15 == INPUT_PU)
			#define	PIN15_DIR	PIN_LOW
			#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == INPUT_HI)
			#define	PIN15_DIR	PIN_LOW
			#define	PIN15_PORT	PIN_LOW
			#elif (DIO_PIN15 == OUTPUT_HIGHT)
			#define	PIN15_DIR	PIN_HIGH
			#define	PIN15_PORT	PIN_HIGH
			#elif (DIO_PIN15 == OUTPUT_LOW)
			#define	PIN15_DIR	PIN_HIGH
			#define	PIN15_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN16 == INPUT_PU)
			#define	PIN16_DIR	PIN_LOW
			#define	PIN16_PORT	PIN_HIGH
			#elif (DIO_PIN16 == INPUT_HI)
			#define	PIN16_DIR	PIN_LOW
			#define	PIN16_PORT	PIN_LOW
			#elif (DIO_PIN16 == OUTPUT_HIGHT)
			#define	PIN16_DIR	PIN_HIGH
			#define	PIN16_PORT	PIN_HIGH
			#elif (DIO_PIN16 == OUTPUT_LOW)
			#define	PIN16_DIR	PIN_HIGH
			#define	PIN16_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN17 == INPUT_PU)
			#define	PIN17_DIR	PIN_LOW
			#define	PIN17_PORT	PIN_HIGH
			#elif (DIO_PIN17 == INPUT_HI)
			#define	PIN17_DIR	PIN_LOW
			#define	PIN17_PORT	PIN_LOW
			#elif (DIO_PIN17 == OUTPUT_HIGHT)
			#define	PIN17_DIR	PIN_HIGH
			#define	PIN17_PORT	PIN_HIGH
			#elif (DIO_PIN17 == OUTPUT_LOW)
			#define	PIN17_DIR	PIN_HIGH
			#define	PIN17_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN18 == INPUT_PU)
			#define	PIN18_DIR	PIN_LOW
			#define	PIN18_PORT	PIN_HIGH
			#elif (DIO_PIN18 == INPUT_HI)
			#define	PIN18_DIR	PIN_LOW
			#define	PIN18_PORT	PIN_LOW
			#elif (DIO_PIN18 == OUTPUT_HIGHT)
			#define	PIN18_DIR	PIN_HIGH
			#define	PIN18_PORT	PIN_HIGH
			#elif (DIO_PIN18 == OUTPUT_LOW)
			#define	PIN18_DIR	PIN_HIGH
			#define	PIN18_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN19 == INPUT_PU)
			#define	PIN19_DIR	PIN_LOW
			#define	PIN19_PORT	PIN_HIGH
			#elif (DIO_PIN19 == INPUT_HI)
			#define	PIN19_DIR	PIN_LOW
			#define	PIN19_PORT	PIN_LOW
			#elif (DIO_PIN19 == OUTPUT_HIGHT)
			#define	PIN19_DIR	PIN_HIGH
			#define	PIN19_PORT	PIN_HIGH
			#elif (DIO_PIN19 == OUTPUT_LOW)
			#define	PIN19_DIR	PIN_HIGH
			#define	PIN19_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN20 == INPUT_PU)
			#define	PIN20_DIR	PIN_LOW
			#define	PIN20_PORT	PIN_HIGH
			#elif (DIO_PIN20 == INPUT_HI)
			#define	PIN20_DIR	PIN_LOW
			#define	PIN20_PORT	PIN_LOW
			#elif (DIO_PIN20 == OUTPUT_HIGHT)
			#define	PIN20_DIR	PIN_HIGH
			#define	PIN20_PORT	PIN_HIGH
			#elif (DIO_PIN20 == OUTPUT_LOW)
			#define	PIN20_DIR	PIN_HIGH
			#define	PIN20_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN21 == INPUT_PU)
			#define	PIN21_DIR	PIN_LOW
			#define	PIN21_PORT	PIN_HIGH
			#elif (DIO_PIN21 == INPUT_HI)
			#define	PIN21_DIR	PIN_LOW
			#define	PIN21_PORT	PIN_LOW
			#elif (DIO_PIN21 == OUTPUT_HIGHT)
			#define	PIN21_DIR	PIN_HIGH
			#define	PIN21_PORT	PIN_HIGH
			#elif (DIO_PIN21 == OUTPUT_LOW)
			#define	PIN21_DIR	PIN_HIGH
			#define	PIN21_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN22 == INPUT_PU)
			#define	PIN22_DIR	PIN_LOW
			#define	PIN22_PORT	PIN_HIGH
			#elif (DIO_PIN22 == INPUT_HI)
			#define	PIN22_DIR	PIN_LOW
			#define	PIN22_PORT	PIN_LOW
			#elif (DIO_PIN22 == OUTPUT_HIGHT)
			#define	PIN22_DIR	PIN_HIGH
			#define	PIN22_PORT	PIN_HIGH
			#elif (DIO_PIN22 == OUTPUT_LOW)
			#define	PIN22_DIR	PIN_HIGH
			#define	PIN22_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN23 == INPUT_PU)
			#define	PIN23_DIR	PIN_LOW
			#define	PIN23_PORT	PIN_HIGH
			#elif (DIO_PIN23 == INPUT_HI)
			#define	PIN23_DIR	PIN_LOW
			#define	PIN23_PORT	PIN_LOW
			#elif (DIO_PIN23 == OUTPUT_HIGHT)
			#define	PIN23_DIR	PIN_HIGH
			#define	PIN23_PORT	PIN_HIGH
			#elif (DIO_PIN23 == OUTPUT_LOW)
			#define	PIN23_DIR	PIN_HIGH
			#define	PIN23_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN24 == INPUT_PU)
			#define	PIN24_DIR	PIN_LOW
			#define	PIN24_PORT	PIN_HIGH
			#elif (DIO_PIN24 == INPUT_HI)
			#define	PIN24_DIR	PIN_LOW
			#define	PIN24_PORT	PIN_LOW
			#elif (DIO_PIN24 == OUTPUT_HIGHT)
			#define	PIN24_DIR	PIN_HIGH
			#define	PIN24_PORT	PIN_HIGH
			#elif (DIO_PIN24 == OUTPUT_LOW)
			#define	PIN24_DIR	PIN_HIGH
			#define	PIN24_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN25 == INPUT_PU)
			#define	PIN25_DIR	PIN_LOW
			#define	PIN25_PORT	PIN_HIGH
			#elif (DIO_PIN25 == INPUT_HI)
			#define	PIN25_DIR	PIN_LOW
			#define	PIN25_PORT	PIN_LOW
			#elif (DIO_PIN25 == OUTPUT_HIGHT)
			#define	PIN25_DIR	PIN_HIGH
			#define	PIN25_PORT	PIN_HIGH
			#elif (DIO_PIN25 == OUTPUT_LOW)
			#define	PIN25_DIR	PIN_HIGH
			#define	PIN25_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN26 == INPUT_PU)
			#define	PIN26_DIR	PIN_LOW
			#define	PIN26_PORT	PIN_HIGH
			#elif (DIO_PIN26 == INPUT_HI)
			#define	PIN26_DIR	PIN_LOW
			#define	PIN26_PORT	PIN_LOW
			#elif (DIO_PIN26 == OUTPUT_HIGHT)
			#define	PIN26_DIR	PIN_HIGH
			#define	PIN26_PORT	PIN_HIGH
			#elif (DIO_PIN26 == OUTPUT_LOW)
			#define	PIN26_DIR	PIN_HIGH
			#define	PIN26_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN27 == INPUT_PU)
			#define	PIN27_DIR	PIN_LOW
			#define	PIN27_PORT	PIN_HIGH
			#elif (DIO_PIN27 == INPUT_HI)
			#define	PIN27_DIR	PIN_LOW
			#define	PIN27_PORT	PIN_LOW
			#elif (DIO_PIN27 == OUTPUT_HIGHT)
			#define	PIN27_DIR	PIN_HIGH
			#define	PIN27_PORT	PIN_HIGH
			#elif (DIO_PIN27 == OUTPUT_LOW)
			#define	PIN27_DIR	PIN_HIGH
			#define	PIN27_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN28 == INPUT_PU)
			#define	PIN28_DIR	PIN_LOW
			#define	PIN28_PORT	PIN_HIGH
			#elif (DIO_PIN28 == INPUT_HI)
			#define	PIN28_DIR	PIN_LOW
			#define	PIN28_PORT	PIN_LOW
			#elif (DIO_PIN28 == OUTPUT_HIGHT)
			#define	PIN28_DIR	PIN_HIGH
			#define	PIN28_PORT	PIN_HIGH
			#elif (DIO_PIN28 == OUTPUT_LOW)
			#define	PIN28_DIR	PIN_HIGH
			#define	PIN28_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN29 == INPUT_PU)
			#define	PIN29_DIR	PIN_LOW
			#define	PIN29_PORT	PIN_HIGH
			#elif (DIO_PIN29 == INPUT_HI)
			#define	PIN29_DIR	PIN_LOW
			#define	PIN29_PORT	PIN_LOW
			#elif (DIO_PIN29 == OUTPUT_HIGHT)
			#define	PIN29_DIR	PIN_HIGH
			#define	PIN29_PORT	PIN_HIGH
			#elif (DIO_PIN29 == OUTPUT_LOW)
			#define	PIN29_DIR	PIN_HIGH
			#define	PIN29_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN30 == INPUT_PU)
			#define	PIN30_DIR	PIN_LOW
			#define	PIN30_PORT	PIN_HIGH
			#elif (DIO_PIN30 == INPUT_HI)
			#define	PIN30_DIR	PIN_LOW
			#define	PIN30_PORT	PIN_LOW
			#elif (DIO_PIN30 == OUTPUT_HIGHT)
			#define	PIN30_DIR	PIN_HIGH
			#define	PIN30_PORT	PIN_HIGH
			#elif (DIO_PIN30 == OUTPUT_LOW)
			#define	PIN30_DIR	PIN_HIGH
			#define	PIN30_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
			
			#if (DIO_PIN31 == INPUT_PU)
			#define	PIN31_DIR	PIN_LOW
			#define	PIN31_PORT	PIN_HIGH
			#elif (DIO_PIN31 == INPUT_HI)
			#define	PIN31_DIR	PIN_LOW
			#define	PIN31_PORT	PIN_LOW
			#elif (DIO_PIN31 == OUTPUT_HIGHT)
			#define	PIN31_DIR	PIN_HIGH
			#define	PIN31_PORT	PIN_HIGH
			#elif (DIO_PIN31 == OUTPUT_LOW)
			#define	PIN31_DIR	PIN_HIGH
			#define	PIN31_PORT	PIN_LOW
			#else
			#error "invalid Pin configuration"
			#endif
	
	#else
		#error "invalid Number of Ports Configuration"
	#endif
	
		#if (NO_OF_PORTS == TWO_PORTS)
		{
			DDRA =  CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR) ;
			PORTA = CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT) ;

			DDRB =  CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR) ;
			PORTB = CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT) ;
		}
		/**********************************************************THREE_PORTS Case**********************************************************/
		#elif (NO_OF_PORTS == THREE_PORTS)
		{
			DDRA =  CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR) ;
			PORTA = CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT) ;

			DDRB =  CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR) ;
			PORTB = CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT) ;

			DDRC = CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR) ;
			PORTC =  CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT) ;
		}
		/**********************************************************FOUR_PORTS Case**********************************************************/
		#elif (NO_OF_PORTS == FOUR_PORTS)
		{
			DDRA =  CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR) ;
			PORTA = CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT) ;

			DDRB =  CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR) ;
			PORTB = CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT) ;

			DDRC = CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR) ;
			PORTC =  CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT) ;

			DDRD = CONCAT(PIN31_DIR,PIN30_DIR,PIN23_DIR,PIN28_DIR,PIN27_DIR,PIN26_DIR,PIN25_DIR,PIN24_DIR) ;
			PORTD = CONCAT(PIN31_PORT,PIN30_PORT,PIN23_PORT,PIN28_PORT,PIN27_PORT,PIN26_PORT,PIN25_PORT,PIN24_PORT) ;
		}
		
		#else
		{
			/* Error for an invalid configuration for SET PORT & DDR  Registers*/
			#error "Invalid num of ports Config"
		}
		#endif
	
/***********************************************if the user choose POST_BULID_CONFIGURATION*******************************************************/
#elif (CONFIGURATION_TYPE == POST_BUILD_CONFIGURATION)
{
	/* Iterate through all pins*/
	for (int i =0 ; i < TOTAL_NUM_OF_PINS ; i++ )
	{
		/* Determine the port number and pin number from the index*/
		PORT_enumPortNum_t Loc_enumPortNum = (PORT_enumPortNum_t)(i / NUM_OF_PINS) ;
		/* Determine the pin number and pin number from the index*/
		u8 Loc_U8PinNum = (u8)(i % NUM_OF_PINS) ;
		/*Switch based on the port number*/
		switch(Loc_enumPortNum)
		{
			case PORT_A:
			{
				/*Switch based on the pin configuration*/
				switch (PORT_PINcfg[i])
				{
					case PORT_enumINPUT_PU:
					{
						/*Set the pin as an input with pull-up enabled*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumINPUT_HI:
					{
						/*Set the pin as an input with high impedance*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_HIGH:
					{
						/*Set the pin as an output with high value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_LOW:
					{
						/*Set the pin as an output with low value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					default :
					break ;
				}
				break ;
			}
			case PORT_B:
			{
				/*Switch based on the pin configuration*/
				switch (PORT_PINcfg[i])
				{
					case PORT_enumINPUT_PU:
					{
						/*Set the pin as an input with pull-up enabled*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumINPUT_HI:
					{
						/*Set the pin as an input with high impedance*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_HIGH:
					{
						/*Set the pin as an output with high value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_LOW:
					{
						/*Set the pin as an output with low value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					default :
					break ;
				}
				break ;
			}
			case PORT_C:
			{
				/*Switch based on the pin configuration*/
				switch (PORT_PINcfg[i])
				{
					case PORT_enumINPUT_PU:
					{
						/*Set the pin as an input with pull-up enabled*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumINPUT_HI:
					{
						/*Set the pin as an input with high impedance*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_HIGH:
					{
						/*Set the pin as an output with high value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_LOW:
					{
						/*Set the pin as an output with low value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					default :
					break ;
				}
				break ;
			}
			case PORT_D:
			{
				/*Switch based on the pin configuration*/
				switch (PORT_PINcfg[i])
				{
					case PORT_enumINPUT_PU:
					{
						/*Set the pin as an input with pull-up enabled*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumINPUT_HI:
					{
						/*Set the pin as an input with high impedance*/
						CLR_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_HIGH:
					{
						/*Set the pin as an output with high value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						SET_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					case PORT_enumOUTPUT_LOW:
					{
						/*Set the pin as an output with low value*/
						SET_BIT(DDRA,Loc_U8PinNum);
						CLR_BIT(PORTA,Loc_U8PinNum);
						break;
					}
					default :
					break ;
				}
				break ;
			}
			default:
			break;
		}
	}
	
/******************************************if the user not choose POST OR PRE BULID_CONFIGURATION*************************************************/
#else
	#error "error in CONFIGURATION_TYPE"


/*****/
#endif
	
}


