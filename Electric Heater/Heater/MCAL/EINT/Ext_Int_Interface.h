/*
 * Ext_Int_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_EINT_EXT_INT_INTERFACE_H_
#define MCAL_EINT_EXT_INT_INTERFACE_H_

#include "../../Common/BitMath.h"
#include "../../Common/ATmega32_RegisterMap.h"
#include "Ext_Int_Config.h"

void Ext_INT_Enable(ExtINT_Type INTId);
void Ext_INT_Disable(ExtINT_Type INTId);
void Ext_INT_SnControl(ExtINT_Type INTId, ExtISC_Type mode);
void Ext_INT_SetCallBack ( void(*Ptr2Func)(void) );
void __vector_1(void) __attribute__ ((signal));	/*ISR Function Prototype for Ext INT0 */

#endif /* MCAL_EINT_EXT_INT_INTERFACE_H_ */
