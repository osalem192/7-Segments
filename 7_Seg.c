/*
 * _7_Seg.c
 *
 * Created: 2/10/2023 10:37:52 PM
 *  Author: osale
 */ 
#include "STD_TYPE.h"
#include "BIT_MATH.h"

void Seven_Seg_Init(uint8 port)
{
	Set_Port_Dir(port,1);
} 
uint8 Seven_Seg_Write(uint8 i)			// Change 'i' to the number u wanna display
{	
 uint8 arr[10] = {0b00111111,0b00110000,0b001011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	return arr[i];
}

