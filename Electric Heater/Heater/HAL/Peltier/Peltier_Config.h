/*
 * Peltier_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_PELTIER_PELTIER_CONFIG_H_
#define HAL_PELTIER_PELTIER_CONFIG_H_

#include "../Relay/Relay_Interface.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../Common/STD_Types.h"



#define PELTIER_Channel RELAY_2

typedef enum
{
	PELTIER_OFF_MODE = 0,
	PELTIER_ON_MODE,
	PELTIER_UNDEFINED_MODE
}Peltier_ModeType;

#endif /* HAL_PELTIER_PELTIER_CONFIG_H_ */
