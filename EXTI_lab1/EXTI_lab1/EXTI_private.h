/*****************************************/
/*	Author : Assem       				 */
/*	Date   : 1-7-2022   		   		 */
/*	Version: 0.1			 	         */
/*	File   : EXTI         	             */
/*****************************************/


#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

#define GICR     *((volatile u8*)0x5B)     /*General interrupt control register*/
#define GICR_INT1             7            /*INT1 PIE BIT*/
#define GICR_INT0             6            /*INT0 PIE BIT*/
#define GICR_INT2             5            /*INT2 PIE BIT*/
									       
#define MCUCR    *((volatile u8*)0x55)     /*MCU Control register*/
#define MCUCR_ISC11           3            /*Interrupt 1 sense control bit 1*/
#define MCUCR_ISC10           2            /*Interrupt 1 sense control bit 0*/
#define MCUCR_ISC01           1            /*Interrupt 0 sense control bit 1*/
#define MCUCR_ISC00           0            /*Interrupt 0 sense control bit 0*/
										   
										   
#define MCUCSR   *((volatile u8*)0x54)     /*MCU control and status register*/
#define MCUCSR_ISC2            6           /*Interrupt 2 sense control bit  */
     

#define	EXTI0_u8_RISING        0
#define	EXTI0_u8_FALLING       1
#define	EXTI0_u8_ANY_CHANGE    2
#define EXTI0_u8_LOW_LEVEL     3
#define EXTI0_u8_HIGH_LEVEL    4

#define	EXTI1_u8_RISING        0
#define	EXTI1_u8_FALLING       1
#define	EXTI1_u8_ANY_CHANGE    2
#define EXTI1_u8_LOW_LEVEL     3
#define EXTI1_u8_HIGH_LEVEL    4

#define EXTI2_u8_HIGH_LEVEL    1
#define EXTI2_u8_LOW_LEVEL     0

#define ENABLE                 1
#define DISABLE                2
		


#endif