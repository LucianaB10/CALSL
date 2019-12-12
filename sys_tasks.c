/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include "led.h"
#include "hal_linefollower.h"
#include "asw_move.h"
#include "hal_servo.h"
#include "rte.h"

//T_U16 a = 0;

void TASK_Inits()
{
    ASW_Init();
    MCAL_vInit();
    //GPIO_u8SetPortPin(PORT_A, 9, DIGITAL ,OUTPUT);
    ASW_Move(100,FORWARD);
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    //ASW_Move(50,FORWARD);
    //S1();
  // RTE_vsetAngle(90);
    //    PWM1_vSetDuty(4+(90-10)*0.04375,1);
   //RTE_u8GetValueLineFollower();
   
   //  if (RTE_u8GetValueLineFollower() == 0b111111)
   {
   //    ASW_Move(0,BACKWARD);
           
   }
   //else ASW_Move(0,BACKWARD);  
    
   //ASW_Move(0,0);

   
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    /*
    a = !a;
    GPIO_u8WritePortPin(PORT_A, 10, a);
     */

}