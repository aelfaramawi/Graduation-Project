/*
 * GIE_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_GINT_GIE_INTERFACE_H_
#define MCAL_GINT_GIE_INTERFACE_H_

#include "../../Common/ATmega32_RegisterMap.h"
#include "../../Common/BitMath.h"

#define GINT_I_Bit 7

void GINT_Enable_AllInterrupts();
void GINT_Disable_AllInterrupts();


#endif /* MCAL_GINT_GIE_INTERFACE_H_ */
