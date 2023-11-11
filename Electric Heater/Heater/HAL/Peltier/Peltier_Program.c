/*
 * Peltier_Program.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "Peltier_Interface.h"

void Peltier_Init(void)
{
	DIO_ConfigureChannel(PELTIER_Channel, Output);
	Peltier_SetMode(PELTIER_UNDEFINED_MODE);
}

void Peltier_SetMode(Peltier_ModeType PeltierMode)
{
	switch(PeltierMode)
	{
		case (PELTIER_ON_MODE):
		{
			Relay_switchON(PELTIER_Channel);
			break;
		}
		case (PELTIER_OFF_MODE):
		{
			Relay_switchOFF(PELTIER_Channel);
			break;
		}
		case (PELTIER_UNDEFINED_MODE):
		{
			break;
		}
		default: {}
	}

}
