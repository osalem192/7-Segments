/*
 * main.c
 *
 * Created: 2/10/2023 10:36:53 PM
 *  Author: osale
 */ 

#include <xc.h>
#include "STD_TYPE.h"
#include "Button_Driver.h"
#include "GPIO_DRIVER.h"
#include "7_Seg.h"
#define F_CPU 8000000ul
#include <util/delay.h>

int main(void)
{	Set_Port_Dir('b',1);
	Set_Port_Dir('c',1);
	Set_Port_Dir('d',1);
	Set_Port_Dir('a',0);
//     uint8 i =1;             // for the first functoin
	while (1)
	{
// the code below for button counter		 

// 			if(Button_state('a',0) == 1){
//				{
// 						_delay_ms(300);
//  						Seven_Seg_Write('c',i);
// 					}
// 					i++;
// 					
// 					if(i==10) i=0;
// 				}
				
// the code below makes the animation		
	
// 			for (uint8 i=0 ; i < 6; i++)
// 			{
// 				Pin_Write('c',i,1);
// 				_delay_ms(100);
// 			}
// 			Port_Write('c',0);

// the code below counts from 0 to 9 then from 9 to 0 

// 			for (uint8 i =0 ; i < 10; i++)
// 			{
// 				Seven_Seg_Write('c',i);
// 				_delay_ms(250);
// 			}
// 
// 			for (sint8 i = 9; i > 0; i--)
// 			{
// 				Seven_Seg_Write('c',i);
// 				_delay_ms(250);
// 			}

// the code below display numbers from 0:9

//			Seven_Seg_Write_1_to_9('c');

//  the code below display numbers from 0:99 

// 			Seven_Seg_Write_1_to_99('d','c');

// the code below use BCD 

//			Seven_Segment_4BCD('b',9);			

	}
}
