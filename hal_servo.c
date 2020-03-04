#include "hal_servo.h"
#include "mcal_pwm.h"

T_F16 PWM_angle;

void Hal_setAngle(T_F16 angle)
{
    if(angle>=10 && angle<=170)
    {
        if(angle<65)
        {
            angle=65;
        }
        if(angle>115)
        {
            angle=115;
        }
    }
    else
    {
        angle=90;
    }
        PWM_angle=4+(angle-10)*0.04375;
        PWM1_vSetDuty(PWM_angle,1);
    
}
