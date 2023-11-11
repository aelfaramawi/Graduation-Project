/*
 * Led_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_


#include "../../MCAL/DIO/DIO_Interface.h"

#define LED_0 DIO_ChannelC2
#define LED_1 DIO_ChannelC7
#define LED_2 DIO_ChannelD3

void LED_Init(void);
void SetLED_ON (DIO_ChannelType ChannelId);
void SetLED_OFF (DIO_ChannelType ChannelId);
void Flip_LED (DIO_ChannelType ChannelId);

#endif /* HAL_LED_LED_INTERFACE_H_ */
