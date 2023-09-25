/******************************************************************/
/******************************************************************/
/***************   		Author : Hossam Medhat		***************/
/***************   		Layer : APP         		***************/
/***************   		SWC : LCD           		***************/
/***************   		Version : 1.00      		***************/
/******************************************************************/
/******************************************************************/

#include "STD_TYPES.h"
#include <util/delay.h>

#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "LCD_Cfg.h"

void main (void)
{
	DIO_u8SetPortDirection(LCD_DATA_PORT , DIO_PORT_OUTPUT);

	DIO_u8SetPinDirection(LCD_CTRL_PORT ,LCD_RS_PIN,DIO_OUTPUT );
	DIO_u8SetPinDirection(LCD_CTRL_PORT ,LCD_RW_PIN,DIO_OUTPUT );
	DIO_u8SetPinDirection(LCD_CTRL_PORT ,LCD_E_PIN,DIO_OUTPUT );

	LCD_voidInit();



	u8 ARR_u8FristArabicLetter[8]={
			0b00100,
			0b00100,
			0b01110,
			0b10101,
			0b00100,
			0b01010,
			0b10001,
			0b00000};
	u8 ARR_u8SecondArabicLetter[8]={
			0b00100,
			0b00101,
			0b00110,
			0b01100,
			0b10100,
			0b00011,
			0b00001,
			0b00000};
	u8 ARR_u8ThirdArabicLetter[8]={
			0b00100,
			0b00100,
			0b00110,
			0b00101,
			0b00100,
			0b01010,
			0b10001,
			0b00000};
	u8 ARR_u8FourthArabicLetter[8]={
			0b00100,
			0b00100,
			0b01100,
			0b10101,
			0b00100,
			0b01011,
			0b10001,
			0b00000};
	u8 ARR_u8FifthArabicLetter[8]={
			0b00100,
			0b00101,
			0b01100,
			0b10100,
			0b00100,
			0b01010,
			0b10010,
			0b00000};
	u8 ARR_u8SixthArabicLetter[8]={
			0b00000,
			0b00000,
			0b00000,
			0b11111,
			0b11000,
			0b10000,
			0b00000,
			0b00000};
	u8 ARR_u8SeventhArabicLetter[8]={
			0b00000,
			0b00000,
			0b10010,
			0b01111,
			0b10010,
			0b00000,
			0b00000,
			0b00000};
	u8 ARR_u8EighthArabicLetter[8]={
			0b00000,
			0b00000,
			0b00000,
			0b01100,
			0b00000,
			0b00000,
			0b00000,
			0b00000};
	u8 ARR_u8NinthArabicLetter[8]={
			0b00100,
			0b00100,
			0b11110,
			0b00110,
			0b00100,
			0b01010,
			0b01010,
			0b00000};






	while(1)
	{
		_delay_ms(400);
		LCD_voidGoToXY(0,0);
		LCD_voidSendString("Hello I am Hskaa");
		LCD_voidWriteSpecialCharacter(ARR_u8FristArabicLetter,1,1,0);
		_delay_ms(2000);
		LCD_voidClearLCD();
		LCD_voidSendString("I can do a lot");
		LCD_voidWriteSpecialCharacter(ARR_u8FristArabicLetter,1,1,0);
		_delay_ms(2000);
		LCD_voidClearLCD();
		LCD_voidSendString("I can RUN");
		_delay_ms(2000);
		LCD_voidClearLCD();
		u8 i ;
		for(i=0 ; i<13 ;i++ ){
			LCD_voidWriteSpecialCharacter(ARR_u8FristArabicLetter,0,1,i);
			_delay_ms(100);
			LCD_voidWriteSpecialCharacter(ARR_u8SecondArabicLetter,1,1,i);
			_delay_ms(150);
			LCD_voidClearLCD();
			i++;
			LCD_voidWriteSpecialCharacter(ARR_u8ThirdArabicLetter,2,1,i);
			_delay_ms(150);
			LCD_voidClearLCD();
			_delay_ms(150);

		}
		LCD_voidSendString("I love football");
		_delay_ms(2000);
		LCD_voidClearLCD();
		for(i=0 ; i<13 ;i++ ){
			LCD_voidWriteSpecialCharacter(ARR_u8FourthArabicLetter,0,1,i);
			_delay_ms(300);
			LCD_voidWriteSpecialCharacter(ARR_u8FifthArabicLetter,1,1,i);
			_delay_ms(300);
			LCD_voidClearLCD();
			i++;
			LCD_voidWriteSpecialCharacter(ARR_u8FourthArabicLetter,2,1,i);
			_delay_ms(300);
			LCD_voidClearLCD();
			_delay_ms(300);

		}
		LCD_voidClearLCD();
		LCD_voidSendString("I can dance");
		LCD_voidClearLCD();
		LCD_voidGoToXY(0,0);
		LCD_voidSendString("DON'T KILL MEEEE");
		_delay_ms(1000);
		LCD_voidWriteSpecialCharacter(ARR_u8SixthArabicLetter,0,1,0);

		LCD_voidWriteSpecialCharacter(ARR_u8NinthArabicLetter,1,1,12);
		_delay_ms(1000);
		for (i=2 ;i<12 ;i++ )
		{LCD_voidWriteSpecialCharacter(ARR_u8SixthArabicLetter,0,1,0);

		LCD_voidWriteSpecialCharacter(ARR_u8NinthArabicLetter,1,1,12);

		_delay_ms(200);
		LCD_voidWriteSpecialCharacter(ARR_u8EighthArabicLetter,2,1,i);
		_delay_ms(200);
		LCD_voidClearLCD();

		}
		_delay_ms(1000);
		LCD_voidWriteSpecialCharacter(ARR_u8SeventhArabicLetter,3,1,12);
		_delay_ms(1000);
		LCD_voidClearLCD();





	}
}





