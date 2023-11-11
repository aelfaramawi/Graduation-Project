/*
 * SSD_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_SSD_SSD_CONFIG_H_
#define HAL_SSD_SSD_CONFIG_H_

#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../Common/Clock.h"

#define SSD_FirstDigit_DataPort DIO_PortA
#define SSD_SecondDigit_DataPort DIO_PortB

#define SSD_FirstDigit_En DIO_ChannelB2
#define SSD_SecondDigit_En DIO_ChannelB1

#endif /* HAL_SSD_SSD_CONFIG_H_ */
