#include "sys_tasks.h"
#include "rte.h"
#include "asw_move.h"




void ASW_Init(){
    RTE_vInit();
}

void ASW_Move(T_U8 speedV, BOOL dir){
    RTE_vSetMotorDir(dir);
    RTE_vSetMotorSpeed(speedV);
}




