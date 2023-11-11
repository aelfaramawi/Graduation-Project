/*
 * LM35_Interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_LM35_LM35_INTERFACE_H_
#define HAL_LM35_LM35_INTERFACE_H_

#include "../../MCAL/ADC/ADC_Interface.h"

void LM35_Init();
int16 LM35_Read(ADC_ChannelType ChannelId);

#endif /* HAL_LM35_LM35_INTERFACE_H_ */
