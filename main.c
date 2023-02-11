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
{	uint8 arr[] = {0b00111111,0b00110000,0b001011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	Set_Port_Dir('c',1);
	Set_Port_Dir('d',1);
	Set_Port_Dir('a',0);
    uint8 i =1;
	while (1)
	{
// 		 uint8 x = Button_state('a',0);
// 		if(x == 1){
// 			{
// 				_delay_ms(300);
// 				Port_Write('c',Seven_Seg_Write(i));
// 			}
// 			i++;
// 			
// 			if(i==10) i=0;
// 		}
		
// the code below makes the animation		
	
			for (uint8 i=0 ; i < 6; i++)
			{
				Pin_Write('c',i,1);
				_delay_ms(100);
			}
			Port_Write('c',0);
	}
}