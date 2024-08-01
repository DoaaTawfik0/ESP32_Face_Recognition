/*****************************************************/
/*****************************************************/
/**************   Author: Doaa_Tawfik  ***************/
/**************   Layer: LIBRARY       ***************/
/**************   Version: 1.00        ***************/
/*****************************************************/
/*****************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR , BIT_NUM) (VAR|=(1<<BIT_NUM))
#define CLEAR_BIT(VAR , BIT_NUM) (VAR&=(~(1<<BIT_NUM)))
#define TOGGLE_BIT(VAR , BIT_NUM) (VAR^=(1<<BIT_NUM))
#define GET_BIT(VAR , BIT_NUM) (1&(VAR>>BIT_NUM))

#endif
