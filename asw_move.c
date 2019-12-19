#include "sys_tasks.h"
#include "rte.h"
#include "asw_move.h"




void ASW_Init(){
    RTE_vInit();
}

void ASW_Move(T_U8 speedV, BOOL dir){
    T_U8 val;
    RTE_vSetMotorDir(dir);
    RTE_vSetMotorSpeed(speedV);
    
    val = RTE_u8GetValueLineFollower();
   if (val > 50 )
   {
       RTE_vsetAngle(70);
           
   }
   else 
   {
       RTE_vsetAngle(110);  
   }
}






