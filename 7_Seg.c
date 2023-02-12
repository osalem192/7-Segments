/*
 * _7_Seg.c
 *
 * Created: 2/10/2023 10:37:52 PM
 *  Author: osale
 */ 
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#define F_CPU 8000000ul
#include <util/delay.h>

void Seven_Seg_Init(uint8 port)
{
	Set_Port_Dir(port,1);
} 

void Seven_Seg_Write(uint8 port,uint8 i)			// Change 'i' to the number u wanna display
{	
 uint8 arr[10] = {0b00111111,0b00110000,0b001011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	Port_Write(port,arr[i]);
}

void Seven_Seg_Write_1_to_9(uint8 port)	
{
	for (uint8 i=0 ; i<10; i++)
	{
		Seven_Seg_Write(port, i);
		_delay_ms(300);
	}
}

void Seven_Seg_Write_1_to_99(uint8 port1, uint8 port2) 
{
	for(uint8 i=0 ; i < 10 ; i++)
	{	Seven_Seg_Write(port1, i);
		for (uint8 j=0; j < 10; j++)
		{
			Seven_Seg_Write(port2, j);
			_delay_ms(300);
		}
	}
}

void Seven_Segment_4BCD(uint8 port, uint8 number)
{
	switch (number)
	{
		case 0: Pin_Write(port,0,0);
		break;
		case 1: Pin_Write(port,0,1);
		break;
		case 2: Pin_Write(port,1,1);
		break;	
		case 3: Pin_Write(port,0,1); Pin_Write(port,1,1);
		break;
		case 4: Pin_Write(port,2,1);
		break;
		case 5: Pin_Write(port,0,1); Pin_Write(port,2,1);
		break;
		case 6: Pin_Write(port,1,1); Pin_Write(port,2,1);
		break;
		case 7: Pin_Write(port,0,1); Pin_Write(port,1,1); Pin_Write(port,2,1);
		break;
		case 8: Pin_Write(port,3,1); 
		break;
		case 9: Pin_Write(port,0,1); Pin_Write(port,3,1);
		break;
		}
}

