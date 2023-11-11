/*
 * ATmega32_RegisterMap.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef COMMON_ATMEGA32_REGISTERMAP_H_
#define COMMON_ATMEGA32_REGISTERMAP_H_

#include "STD_Types.h"

/*************** ADC ***************/

#define ADCMUX_REFS1_Bit (7)
#define ADCMUX_REFS0_Bit (6)

#define ADCSRA_ADPS0_Bit (0)
#define ADCSRA_ADPS1_Bit (1)
#define ADCSRA_ADPS2_Bit (2)
#define ADCSRA_ADIF_Bit  (4)
#define ADCSRA_ADSC_Bit	 (6)
#define ADCSRA_ADEN_Bit  (7)

#define ADMUX_Reg (*(volatile uint8 *)0x27)
#define ADCSRA_Reg (*(volatile uint8 *)0x26)
#define ADCH_Reg (*(volatile uint8 *)0x25)
#define ADCL_Reg (*(volatile uint8 *)0x24)


/*************** DIO ***************/

#define PORTA_R *((volatile uint8*)0x3B)
#define DDRA_R *((volatile uint8*)0x3A)
#define PINA_R *((volatile uint8*)0x39)

#define PORTB_R *((volatile uint8*)0x38)
#define DDRB_R *((volatile uint8*)0x37)
#define PINB_R *((volatile uint8*)0x36)

#define PORTC_R *((volatile uint8*)0x35)
#define DDRC_R *((volatile uint8*)0x34)
#define PINC_R *((volatile uint8*)0x33)

#define PORTD_R *((volatile uint8*)0x32)
#define DDRD_R *((volatile uint8*)0x31)
#define PIND_R *((volatile uint8*)0x30)


/*************** EEPROM ***************/

#define EEARL_R *((volatile uint8*)0x3F)
#define EEARH_R *((volatile uint8*)0x3E)
#define EEDR_R *((volatile uint8*)0x3D)
#define EECR_R *((volatile uint8*)0x3C)


/*************** EINT ***************/

#define GICR_R *((volatile uint8*)0x5B)
#define GIFR_R *((volatile uint8*)0x5A)
#define MCUCR_R *((volatile uint8*)0x55)
#define MCUCSR_R *((volatile uint8*)0x54)

/*************** GINT ***************/

#define SREG_R *((volatile uint8*)0x5F)

				/*************** Timer ***************/
/**********************	COMMON TIMERS REGISTERS ********************/
#define TIMER_TIMSK_R *((volatile uint8*)0x59)
#define TIMER_TIFR_R  *((volatile uint8*)0x58)

/**********************	TIMER 0 REGISTERS ********************/
#define TIMER0_TCCR0_R *((volatile uint8*)0x53)
#define TIMER0_TCNT0_R *((volatile uint8*)0x52)
#define TIMER0_OCR0_R  *((volatile uint8*)0x5C)

/**********************	TIMER 2 REGISTERS ********************/
#define TIMER2_TCCR2_R *((volatile uint8*)0x45)
#define TIMER2_TCNT2_R *((volatile uint8*)0x44)
#define TIMER2_OCR2_R  *((volatile uint8*)0x43)

#endif /* COMMON_ATMEGA32_REGISTERMAP_H_ */
