/*****************************************/
/*	Author : Assem       				 */
/*	Date   : 1-7-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : EXTI         	             */
/*****************************************/
#include "STD_types.h"
#include "BIT_MATH.h"
#include "EXTI_int.h"
#include "EXTI_private.h"
#include "EXTI_config.h"

void EXTI0_voidInit(void)
{
	#if EXTI0_u8_ISC == EXTI0_u8_LOW_LEVEL
	CLEAR_BIT(MCUCR,MCUCR_ISC00);
	CLEAR_BIT(MCUCR,MCUCR_ISC01);
	#elif EXTI0_u8_ISC == EXTI0_u8_RISING
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);	
	#elif EXTI0_u8_ISC == EXTI0_u8_FALLING
	CLEAR_BIT(MCUCR , MCUCR_ISC00);
	SET_BIT(MCUCR ,  MCUCR_ISC01);	
	#elif EXTI0_u8_ISC == EXTI0_u8_ANY_CHANGE
	SET_BIT(MCUCR ,  MCUCR_ISC00);
	CLEAR_BIT(MCUCR , MCUCR_ISC01);	
	#endif
	
	#if   EXTI0_u8_Enable == ENABLE
	SET_BIT(GICR , GICR_INT0);
	#elif EXTI0_u8_Enable == DISABLE
	CLEAR_BIT(GICR , GICR_INT0);
	#endif
	
	
}
void EXTI1_voidInit(void)
{
	#if EXTI1_u8_ISC == EXTI1_u8_LOW_LEVEL
	CLEAR_BIT(MCUCR,MCUCR_ISC00);
	CLEAR_BIT(MCUCR,MCUCR_ISC01);
	#elif EXTI1_u8_ISC == EXTI1_u8_RISING
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);	
	#elif EXTI1_u8_ISC == EXTI1_u8_FALLING
	CLEAR_BIT(MCUCR , MCUCR_ISC00);
	SET_BIT(MCUCR ,  MCUCR_ISC01);	
	#elif EXTI1_u8_ISC == EXTI1_u8_ANY_CHANGE
	SET_BIT(MCUCR ,  MCUCR_ISC00);
	CLEAR_BIT(MCUCR , MCUCR_ISC01);	
	#endif
	
	#if   EXTI1_u8_Enable == ENABLE
	SET_BIT(GICR , GICR_INT1);
	#elif EXTI1_u8_Enable == DISABLE
	CLEAR_BIT(GICR , GICR_INT1);
	#endif

}
void EXTI2_voidInit(void)
{
	#if EXTI0_u8_ISC == EXTI0_u8_LOW_LEVEL
	CLEAR_BIT(MCUCSR,MCUCSR_ISC2);
	#elif EXTI0_u8_ISC == EXTI0_u8_HIGH_LEVEL
	SET_BIT(MCUCSR,MCUCSR_ISC2);
	#endif
	
	#if   EXTI2_u8_Enable == ENABLE
	SET_BIT(GICR , GICR_INT2);
	#elif EXTI2_u8_Enable == DISABLE
	CLEAR_BIT(GICR , GICR_INT2);
	#endif

}

