/*
 * DIO_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "DIO_Config.h"

void DIO_Init (void);
void DIO_WriteChannel (DIO_ChannelType ChannelId, STD_LevelType Level);
STD_LevelType DIO_ReadChannel (DIO_ChannelType ChannelId);
void DIO_ToggleChannel (DIO_ChannelType ChannelId);
uint8 DIO_ReadPort (DIO_PortType PortId);
void DIO_WritePort (DIO_PortType PortId, uint8 PortValue);
void DIO_ConfigureChannel (DIO_ChannelType ChannelId, DIO_DirType Direction);


#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
