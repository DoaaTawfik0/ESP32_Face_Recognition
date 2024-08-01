#include "../include/STD_TYPES.h"
#include "../include/ERROR_STATE.h"
#include "../include/BIT_MATH.h"

#include "../include/PIR_Interface.h"
#include <Arduino.h>


ES_t PIR_Init(void)
{
    ES_t Local_enuErrorState = ES_NOK;

    /*Set PIR Pin as INPUT */
    pinMode(PIR_PIN, INPUT);

    Local_enuErrorState = ES_OK;

    return Local_enuErrorState;
}

ES_t PIR_Get_Value(u8 *Copy_pu8PIR_Value)
{
    ES_t Local_enuErrorState = ES_NOK;

    if (Copy_pu8PIR_Value != NULL)
    {
        /*Read Value of PIR Pin*/
        *Copy_pu8PIR_Value = digitalRead(PIR_PIN);

        Local_enuErrorState = ES_OK;
    }
    else
    {
        Local_enuErrorState = ES_NULL_POINTER;
    }

    return Local_enuErrorState;
}
