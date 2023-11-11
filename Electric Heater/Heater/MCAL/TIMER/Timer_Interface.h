/*
 * Timer_Interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_

#include "../../Common/BitMath.h"
#include "Timer_Config.h"
#include "../../Common/ATmega32_RegisterMap.h"

			/***   TIMER 0 	***/

void Timer0_Init(Timer_PrescalerType prescaler, uint8 Value, boolean InterruptEnable);
void Timer0_Start(Timer_PrescalerType prescaler);
void Timer0_Stop (void);
void Timer0_SetPreload(uint8 preloadValue);
void __vector_11(void) __attribute__ ((signal));
void Timer0_SetCompareValue(uint8 compareValue);
void __vector_10(void) __attribute__ ((signal));
uint8 Timer0_GetPreload(void);
void Timer0_EnableInterrupt(void);
void Timer0_DisableInterrupt(void);
void Timer0_SetCallBack ( void(*Ptr2Func)(void) );
void Timer0_PWM(uint16 freq, uint8 dutyCycle);


			/***    TIMER 2 	***/

void Timer2_Init(Timer_PrescalerType prescaler, uint8 Value, boolean InterruptEnable);
void Timer2_Start(Timer_PrescalerType prescaler);
void Timer2_Stop (void);
void Timer2_SetPreload(uint8 preloadValue);
void __vector_5(void) __attribute__ ((signal));
void Timer2_SetCompareValue(uint8 compareValue);
void __vector_4(void) __attribute__ ((signal));
uint8 Timer2_GetPreload(void);
void Timer2_EnableInterrupt(void);
void Timer2_DisableInterrupt(void);
void Timer2_SetCallBack ( void(*Ptr2Func)(void) );
void Timer2_PWM(uint16 freq, uint8 dutyCycle);


#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
