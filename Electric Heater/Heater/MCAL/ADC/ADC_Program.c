/*
 * ADC_Program.c
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#include "ADC_Config.h"
#include "ADC_Interface.h"

void ADC_Init(void){
	SetBit(ADMUX_Reg,ADCMUX_REFS1_Bit);//Internal Vref
	SetBit(ADMUX_Reg,ADCMUX_REFS0_Bit);
	SetBit(ADCSRA_Reg,ADCSRA_ADPS0_Bit);//F_CPU/128
	SetBit(ADCSRA_Reg,ADCSRA_ADPS1_Bit);
	SetBit(ADCSRA_Reg,ADCSRA_ADPS2_Bit);
	SetBit(ADCSRA_Reg,ADCSRA_ADEN_Bit);//Enable ADC
}
int16 ADC_Read(ADC_ChannelType ChannelId){
	int16 temp = 0;
	ADMUX_Reg = (ADMUX_Reg & 0xE0) | (ChannelId & 0x1F);
	SetBit(ADCSRA_Reg,ADCSRA_ADSC_Bit);
	while(GetBit(ADCSRA_Reg,ADCSRA_ADIF_Bit) == 0);//wait finish conversion
	SetBit(ADCSRA_Reg,ADCSRA_ADIF_Bit);//clear the flag
	temp = ADCL_Reg;
	temp |= (ADCH_Reg << 8);
	return temp;
}

