/*
 * _7_Seg.h
 *
 * Created: 2/10/2023 10:38:10 PM
 *  Author: osale
 */ 


#ifndef _7_SEG_H_
#define _7_SEG_H_

void Seven_Seg_Init(uint8 port);
void Seven_Seg_Write(uint8 port,uint8 i);
void Seven_Seg_Write_1_to_9(uint8 port);
void Seven_Seg_Write_1_to_99(uint8 port1, uint8 port2);
void Seven_Segment_4BCD(uint8 port, uint8 number);





#endif /* 7_SEG_H_ */
