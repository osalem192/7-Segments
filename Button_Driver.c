/*
 * Button_Driver.c
 *
 * Created: 2/10/2023 6:27:17 PM
 *  Author: osale
 */ 

#include "STD_TYPE.h"
uint8 Button_Init(uint8 port, uint8 pinnum)
{
	Set_Pin_Dir(port,pinnum, 0);

}

uint8 Button_state(uint8 port, uint8 pinnum)
{	uint8 z = Pin_Read(port,pinnum);
	return z;

}

uint8 Button_Port_Init(uint8 port, uint8 pinnum)
{
	Set_Port_Dir(port, 0);

}