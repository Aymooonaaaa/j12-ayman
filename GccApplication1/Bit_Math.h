/*
 * Bit_Math.h
 *
 * Created: 11/07/2020 04:24:43 م
 *  Author: compu
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_



#define SET_BIT(REG,BIT)  (REG |= (1<<BIT))
#define CLR_BIT(REG,BIT)  (REG &=~ (1<<BIT))
#define Toggle_BIT(REG,BIT) (REG ^= (1<<BIT))
#define GET_BIT(REG,BIT)  ((REG >> BIT) & (0X01))


#endif /* BIT_MATH_H_ */