/*
 * Timer_Config.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

#define TIMER0_OPERATION_MODE TIMER_MODE_INTERVAL
#define TIMER2_OPERATION_MODE TIMER_MODE_INTERVAL

#define TIMER0_TOP 256
#define TIMER2_TOP 256
#define TIMER0_FINAL_OVFCOUNT 6250
#define TIMER2_FINAL_OVFCOUNT 62500

typedef enum
{
	NoClkSrc=0,
	No_Prescaler,
	Prescaler_8,
	Prescaler_64,
	Prescaler_256,
	Prescaler_1024,
	ExtClk_FallingEdge,
	ExtClk_RisingEdge

}Timer_PrescalerType;


#define TIMER_MODE_NONE					-1
#define TIMER_MODE_INTERVAL				0
#define TIMER_MODE_CTC					1
#define TIMER_MODE_FAST_PWM				2
#define TIMER_MODE_PWM_PHASE_CORRECT	3


/* TIMER 0 BITS */
#define TCCR0_CS00_Bit 0
#define TCCR0_CS01_Bit 1
#define TCCR0_CS02_Bit 2
#define TCCR0_WGM00_Bit 3
#define TCCR0_COM00_Bit 4
#define TCCR0_COM01_Bit 5
#define TCCR0_WGM01_Bit 6


/* TIMER 2 BITS */
#define TCCR2_CS20_Bit 0
#define TCCR2_CS21_Bit 1
#define TCCR2_CS22_Bit 2
#define TCCR2_WGM21_Bit 3
#define TCCR2_COM20_Bit 4
#define TCCR2_COM21_Bit 5
#define TCCR2_WGM20_Bit 6

/* TIMSK REGISTER BITS */
#define TIMSK_TOIE0_Bit 0
#define TIMSK_OCIE0_Bit	1
#define TIMSK_TOIE2_Bit 6
#define TIMSK_OCIE2_Bit	7



#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
