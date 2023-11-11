/*
 * LM35_Program.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "LM35_Interface.h"


void LM35_Init(void){
	ADC_Init();
}

int16 LM35_Read(ADC_ChannelType ChannelId){
	int16 temp = 0;
	temp = (ADC_Read(ChannelId))/4;
	return temp;
}
