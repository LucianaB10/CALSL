/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:18 PM
 */

#include "hal_dc.h"
#include "hal_servo.h"
#include "led.h"
#include "hal_battery.h"
#ifndef RTE_H
#define	RTE_H


#define RTE_vInit HAL_vInit
#define RTE_vSetMotorDir HAL_vSetMotorDir
#define RTE_vSetMotorSpeed HAL_vSetMotorSpeed
#define RTE_vsetAngle Hal_setAngle
#define RTE_batteryRead  hal_batteryRead 
#define RTE_test test
#define RTE_S2 S2
#define RTE_HAL_F16distanceMoved HAL_F16distanceMoved
#define RTE_HAL_CmSTOP  HAL_CmSTOP
#endif




