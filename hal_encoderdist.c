#include "hal_encoderdist.h"
#include "mcal_encoder.h"
#include "general_types.h"


T_F16 HAL_F16distanceMoved(void)
{
    T_F16 x;
    x=QEI_S16getElapsed();
    x=x/100;
    return x;
    
}

