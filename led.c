#include "led.h"
#include "general.h"
#include "mcal_gpio.h"
T_U8 cntapel=0;
T_U8 valPin=0;

/*void S1(){
    cntapel++;
    if (cntapel==20)
    {
        cntapel=0;
    }
 
    if ((cntapel%2==0) && (cntapel<10))
    {
        valPIN=!valPIN;
        GPIO_u8WritePortPin(PORT_A, 10, valPIN);
    }
   
}*/

void S2(T_U8 procentb)
{
    if(procentb>70)
    {
        GPIO_u8SetPortPin(PORT_A,10,DIGITAL,OUTPUT);
         GPIO_u8WritePortPin(PORT_A, 10, valPin);
         valPin = !valPin;
    }
    else
    {
        GPIO_u8SetPortPin(PORT_A,10,DIGITAL,OUTPUT);
         GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
    
}
