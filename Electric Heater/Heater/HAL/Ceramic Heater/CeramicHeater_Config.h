/*
 * CeramicHeater_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_CERAMIC_HEATER_CERAMICHEATER_CONFIG_H_
#define HAL_CERAMIC_HEATER_CERAMICHEATER_CONFIG_H_

#include "../Relay/Relay_Interface.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../Common/STD_Types.h"

#define HEATER_Channel RELAY_1

typedef enum
{
	HEATER_OFF_MODE = 0,
	HEATER_ON_MODE,
	HEATER_UNDEFINED_MODE
}Heater_ModeType;

#endif /* HAL_CERAMIC_HEATER_CERAMICHEATER_CONFIG_H_ */
