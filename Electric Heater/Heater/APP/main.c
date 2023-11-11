/*
 * main.c
 *
 *  Created on: Nov 2, 2023
 *      Author: elash
 */

#include "Heater Control/HeaterControl_Interface.h"
#include "State Machine/StateMachine_Interface.h"

int main(void)
{
	WaterHeater_Control_Init();
	SM_Init();

    while (1)
    {
		SM();
    }
}

