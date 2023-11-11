/*
 * HeaterControl_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef APP_HEATER_CONTROL_HEATERCONTROL_CONFIG_H_
#define APP_HEATER_CONTROL_HEATERCONTROL_CONFIG_H_


#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../HAL/Button/Button_Interface.h"
#include "../../HAL/SSD/SSD_Interface.h"
#include "../../MCAL/TIMER/Timer_Interface.h"
#include "../../HAL/LM35/LM35_Interface.h"
#include "../../HAL/LED/Led_Interface.h"
#include "../../MCAL/EEPROM/EEPROM_Interface.h"
#include "../../HAL/Ceramic Heater/CeramicHeater_Interface.h"
#include "../../HAL/Peltier/Peltier_Interface.h"
#include "../../MCAL/GINT/GIE_Interface.h"


#define TEMP_CHANNEL ADC_Channel0
#define TEMP_CMP_NUM 5
#define TEMP_SETPOINT_OFFSET 5
#define TEMP_READCOUNT 10

#define UP_Button Button_0
#define DOWN_Button Button_1
#define Heater_LED LED_1

#define EEPROM_SP_Address 0

typedef enum {
	DEFAULT_MODE=0,
	TEMPERATURE_SETTING_MODE

}WaterHeater_ModeType;


#endif /* APP_HEATER_CONTROL_HEATERCONTROL_CONFIG_H_ */
