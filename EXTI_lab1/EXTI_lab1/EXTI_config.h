/*****************************************/
/*	Author : Assem       				 */
/*	Date   : 1-7-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : EXTI         	             */
/*****************************************/
#ifndef _EXTI_CONFIG_H_
#define _EXTI_CONFIG_H_

/*
options:
        ENABLE
		DISABLE
*/
#define EXTI0_u8_Enable ENABLE
#define EXTI1_u8_Enable DISABLE
#define EXTI2_u8_Enable DISABLE


/*
options:

	EXTI0_u8_RISING
	
	EXTI0_u8_FALLING
	
	EXTI0_u8_ANY_CHANGE
	
	EXTI0_u8_LOW_LEVEL
	
*/
#define EXTI0_u8_ISC   EXTI0_u8_FALLING
/*
options:

	EXTI1_u8_RISING
	
	EXTI1_u8_FALLING
	
	EXTI1_u8_ANY_CHANGE
	
	EXTI1_u8_LOW_LEVEL
	
*/
#define EXTI1_u8_ISC   EXTI1_u8_FALLING
/*
options:

	EXTI2_u8_HIGH_LEVEL
	
	EXTI2_u8_LOW_LEVEL
	
*/
#define EXTI2_u8_ISC   EXTI2_u8_FALLING
#endif
	
