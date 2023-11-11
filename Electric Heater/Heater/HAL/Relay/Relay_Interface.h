/*
 * Relay_Interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_RELAY_RELAY_INTERFACE_H_
#define HAL_RELAY_RELAY_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"

#define RELAY_1 DIO_ChannelA2
#define RELAY_2 DIO_ChannelC3


void Relay_Init(void);
void Relay_switchON(DIO_ChannelType RelayNo);
void Relay_switchOFF(DIO_ChannelType RelayNo);


#endif /* HAL_RELAY_RELAY_INTERFACE_H_ */
