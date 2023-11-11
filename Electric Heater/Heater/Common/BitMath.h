/*
 * BitMath.h
 *
 *  Created on: Nov 1, 2023
 *      Author: elash
 */

#ifndef COMMON_BITMATH_H_
#define COMMON_BITMATH_H_

#define SetBit(Reg,BitNo) Reg |= (1<<BitNo)
#define ClearBit(Reg,BitNo) Reg &= ~(1<<BitNo)
#define ToggleBit(Reg,BitNo) Reg ^= (1<<BitNo)
#define GetBit(Reg,BitNo) ((Reg>>BitNo)&1)
#define IS_BIT_SET(REG,BIT)      REG & (1 << BIT)
#define IS_BIT_CLEARED(REG,BIT)  !(REG & (1 << BIT))
#define GET_BIT(REG,BIT)         1 & (REG >> BIT)


#endif /* COMMON_BITMATH_H_ */
