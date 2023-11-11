/*
 * StateMachine_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef APP_STATE_MACHINE_STATEMACHINE_CONFIG_H_
#define APP_STATE_MACHINE_STATEMACHINE_CONFIG_H_


#include "../../Common/STD_Types.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../HAL/Button/Button_Interface.h"
#include "../../HAL/SSD/SSD_Interface.h"
#include "../../MCAL/EINT/Ext_Int_Interface.h"
#include "../../MCAL/GINT/GIE_Interface.h"
#include "../Heater Control/HeaterControl_Interface.h"


#define OFF_State 0
#define ON_State  1

#define ON_OFF_Button Button_2


#endif /* APP_STATE_MACHINE_STATEMACHINE_CONFIG_H_ */
