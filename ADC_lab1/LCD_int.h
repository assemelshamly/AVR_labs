/****************************************/
/*          Author: Khaled Mohsen       */        
/*          Date: 20-8-2022             */
/*          Version: 1.0                */
/*          Module: LCD                 */
/****************************************/
#ifndef LCD_INT_H_
#define LCD_INT_H_

void LCD_voidInit(void);
void LCD_voidSendData(u8 Copy_u8Data);
void LCD_voidSendCommand(u8 Copy_u8Data);
void LCD_voidSendString(s8* String);
void LCD_voidClearScreen(void);
#endif