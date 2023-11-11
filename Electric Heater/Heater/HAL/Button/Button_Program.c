/*
 * Button_Program.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "Button_Interface.h"

void Button_Init(void)
{
	DIO_ConfigureChannel(Button_0, Input);
	DIO_ConfigureChannel(Button_1, Input);
	DIO_ConfigureChannel(Button_2, Input);
}
uint8 Button_getState(DIO_ChannelType ButtonNo)
{
	uint8 buttonState = 0;
	buttonState = DIO_ReadChannel(ButtonNo);
	return buttonState;
}
