#include "hal_linefollower.h"
#include "mcal_gpio.h"
#include "general.h"

void HAL_vSetDirLineFollower(BOOL bDir)
{

 GPIO_u8SetPortPin(PORT_C,0,DIGITAL,bDir);
 GPIO_u8SetPortPin(PORT_C,1,DIGITAL,bDir);
 GPIO_u8SetPortPin(PORT_C,2,DIGITAL,bDir);
 GPIO_u8SetPortPin(PORT_C,3,DIGITAL,bDir);
 GPIO_u8SetPortPin(PORT_C,4,DIGITAL,bDir);
 GPIO_u8SetPortPin(PORT_C,5,DIGITAL,bDir);
}
void HAL_vWriteLineFollower()
{
 
 GPIO_u8WritePortPin(PORT_C,0,1);
 GPIO_u8WritePortPin(PORT_C,1,1);
 GPIO_u8WritePortPin(PORT_C,2,1);
 GPIO_u8WritePortPin(PORT_C,3,1);
 GPIO_u8WritePortPin(PORT_C,4,1);
 GPIO_u8WritePortPin(PORT_C,5,1);
}

T_U8 HAL_u8GetValueLineFollower()
{
    T_U8 valculoare;
    HAL_vSetDirLineFollower(OUTPUT);
    HAL_vWriteLineFollower();
    __delay_us(10);
    HAL_vSetDirLineFollower(INPUT);
    __delay_us(1000);
    
    valculoare = GPIO_u16ReadPort(PORT_C) & 63;
    
    return valculoare;
}
