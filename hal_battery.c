#include "hal_battery.h"
#include "mcal_adc.h"

T_U16 hal_batteryRead()
{
    T_F16 x,r,y;
    T_U16 adc_val,sum=0,i;
    for( i=1;i<=5;i++)
{    

        adc_val=ADC_u16Read(0);
        sum=sum+adc_val;
}
    adc_val=sum/5;
    x=(adc_val*8.4)/4095;
    if(x<=8.4 && x>=7)
    {
        r=80/1.4;
        y=x*r+20;
    }
    else
        if(x<=7 && x>=6.5)
        {
            r=10/1.5;
            y=x*r+10;
        }
        else 
            if(x<=6.5 && x>=6)
            {
                r=10/0.5;
                y=x*r+0;
            }
    
    return y;
}