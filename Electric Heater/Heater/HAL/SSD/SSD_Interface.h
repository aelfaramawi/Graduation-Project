/*
 * SSD_Interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_SSD_SSD_INTERFACE_H_
#define HAL_SSD_SSD_INTERFACE_H_

#include "SSD_Config.h"


void SSD_Init(void);
void SSD_WriteNum(uint8 FirstDigit,uint8 SecondDigit);


#endif /* HAL_SSD_SSD_INTERFACE_H_ */
