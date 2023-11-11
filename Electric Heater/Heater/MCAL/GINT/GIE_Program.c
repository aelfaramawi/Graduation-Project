/*
 * GIE_Program.c
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#include "GIE_Interface.h"

void GINT_Enable_AllInterrupts(){
	SetBit(SREG_R, GINT_I_Bit);
}
void GINT_Disable_AllInterrupts(){
	ClearBit(SREG_R, GINT_I_Bit);
}
