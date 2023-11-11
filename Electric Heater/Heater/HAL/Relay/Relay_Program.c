/*
 * Relay_Program.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "Relay_Interface.h"


void Relay_Init(void)
{
	DIO_ConfigureChannel(RELAY_1, Output);
	DIO_ConfigureChannel(RELAY_2, Output);
	DIO_WriteChannel(RELAY_1, STD_Low);
	DIO_WriteChannel(RELAY_2, STD_Low);
}
void Relay_switchON(DIO_ChannelType RelayNo)
{
	DIO_WriteChannel(RelayNo, STD_High);
}
void Relay_switchOFF(DIO_ChannelType RelayNo)
{
	DIO_WriteChannel(RelayNo, STD_Low);
}
