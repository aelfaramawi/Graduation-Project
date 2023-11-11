/*
 * HeaterControl_Interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef APP_HEATER_CONTROL_HEATERCONTROL_INTERFACE_H_
#define APP_HEATER_CONTROL_HEATERCONTROL_INTERFACE_H_

#include "HeaterControl_Config.h"


void WaterHeater_Control_Init(void);
void WaterHeater_Control(void);
void Read_WaterTemperature(void);
void Blink_SetPointTemperature_and_HeaterLED(void);
void Stop_WaterHeater_Operation(void);



#endif /* APP_HEATER_CONTROL_HEATERCONTROL_INTERFACE_H_ */
