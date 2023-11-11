/*
 * ADC_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_

#include "../../Common/ATmega32_RegisterMap.h"
#include "../../Common/BitMath.h"
#include "ADC_Config.h"

void ADC_Init(void);
int16 ADC_Read(ADC_ChannelType ChannelId);

#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
