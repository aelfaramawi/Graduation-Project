/*
 * Button_Interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_BUTTON_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"
#include "Button_Config.h"

void Button_Init(void);
uint8 Button_getState(DIO_ChannelType ButtonNo);

#endif /* HAL_BUTTON_BUTTON_INTERFACE_H_ */
