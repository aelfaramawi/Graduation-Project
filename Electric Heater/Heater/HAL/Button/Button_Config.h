/*
 * Button_Config.h
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#ifndef HAL_BUTTON_BUTTON_CONFIG_H_
#define HAL_BUTTON_BUTTON_CONFIG_H_


#define Button_0 DIO_ChannelB0
#define Button_1 DIO_ChannelD6
#define Button_2 DIO_ChannelD2

/* Button State according to its configuration PULL UP/Down */
#define BUTTON_PRESSED  STD_High
#define BUTTON_RELEASED STD_Low

#endif /* HAL_BUTTON_BUTTON_CONFIG_H_ */
