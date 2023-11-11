/*
 * CeramicHeater_Program.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "CeramicHeater_Interface.h"


void Heater_Init(void)
{
	DIO_ConfigureChannel(HEATER_Channel, Output);
	Heater_SetMode(HEATER_UNDEFINED_MODE);
}

void Heater_SetMode(Heater_ModeType HeaterMode)
{
	switch(HeaterMode)
	{
		case (HEATER_ON_MODE):
		{
			Relay_switchON(HEATER_Channel);
			break;
		}
		case (HEATER_OFF_MODE):
		{
			Relay_switchOFF(HEATER_Channel);
			break;
		}
		case (HEATER_UNDEFINED_MODE):
		{
			break;
		}
		default: {}
	}

}
