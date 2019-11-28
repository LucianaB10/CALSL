#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"


void HAL_vInit()
{
    PWM1_vInit();
    GPIO_u8SetPortPin(PORT_A,9,ANALOG,OUTPUT);
}
void HAL_vSetMotorDir(){
    GPIO_u8WritePortPin(PORT_A,9,0);
}

void HAL_vSetMotorSpeed(T_U8 speed){
    PWM1_vSetDutyPeriod(speed,2);
}