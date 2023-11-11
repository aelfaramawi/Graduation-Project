/*
 * Ext_Int_Config.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef MCAL_EINT_EXT_INT_CONFIG_H_
#define MCAL_EINT_EXT_INT_CONFIG_H_


#define GICR_INT0_Bit 6
#define GICR_INT1_Bit 7
#define GICR_INT2_Bit 8

#define MCUCSR_INT2_ISC2_Bit 6

typedef enum{
	Ext_INT0=0,
	Ext_INT1,
	Ext_INT2
}ExtINT_Type;


typedef enum{
	Low_Level=0,
	Both_Edge,
	Rising_Edge,
	Falling_Edge
}ExtISC_Type;



#endif /* MCAL_EINT_EXT_INT_CONFIG_H_ */
