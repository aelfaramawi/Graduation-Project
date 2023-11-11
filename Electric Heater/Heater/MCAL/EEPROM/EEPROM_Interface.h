/*
 * EEPROM_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_EEPROM_EEPROM_INTERFACE_H_
#define MCAL_EEPROM_EEPROM_INTERFACE_H_

#include "../../Common/ATmega32_RegisterMap.h"
#include "../../Common/BitMath.h"
#include "EEPROM_Config.h"


void EEPROM_write(uint16 uiAddress, uint8 ucData);
uint8 EEPROM_read(uint16 uiAddress);


#endif /* MCAL_EEPROM_EEPROM_INTERFACE_H_ */
