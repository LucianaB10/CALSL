#include "asw_move.h"
#include "sys_tasks.h"
#include "rte.h"
#include "hal_encoderdist.h"
#include "general_types.h"





void ASW_Init(){
    RTE_vInit();
}

void ASW_Move(){
    RTE_vSetMotorDir();
    RTE_vSetMotorSpeed(50);
}

void bateryLed()
{
    T_U8 batPrc = hal_batteryRead();
    S2(batPrc);
}

T_F16 HAL_CmSTOP(void)
{
    static T_F16 y=0;
    y+=HAL_F16distanceMoved();
    if (y<10)
    {
        RTE_vSetMotorSpeed(50);
    }
    else
    {
         RTE_vSetMotorSpeed(0);
    }
        
    
        return y;
}



