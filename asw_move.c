#include "asw_move.h"
#include "sys_tasks.h"
#include "rte.h"





void ASW_Init(){
    RTE_vInit();
}

void ASW_Move(){
    RTE_vSetMotorDir();
    RTE_vSetMotorSpeed(50);
}




