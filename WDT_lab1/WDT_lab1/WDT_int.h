/*****************************************/
/*	Author : Assem ELshamly				 */
/*	Date   : 17-9-2022   		   		 */
/*	Version: 0.1				         */
/*	Driver : WDT		                 */
/*****************************************/
#ifndef _WDT_INT_H_
#define _WDT_INT_H_

#define  WDE    3    //Watchdog enable
#define  WDTOE  4   //Watchdog turn off enable


void WDT_voidEnable(void);
void WDT_voidDisable(void);
void WDT_voidSetTimeout(u8 Copy_u8Time);

#endif