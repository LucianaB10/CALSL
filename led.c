#include "led.h"
#include "general.h"
T_U8 cntapel=0;
T_U8 valPIN=0;

void S1(){
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
}
