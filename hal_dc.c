#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"


void HAL_vInit()
{
    PWM1_vInit();
    GPIO_u8SetPortPin(PORT_A,9,DIGITAL,OUTPUT);
}
void HAL_vSetMotorDir(BOOL dir){
    GPIO_u8WritePortPin(PORT_A,9,dir);
}

void HAL_vSetMotorSpeed(T_U8 speed){
    PWM1_vSetDuty(speed,2);
}