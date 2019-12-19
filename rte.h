/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:18 PM
 */

#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_linefollower.h"
#ifndef RTE_H
#define	RTE_H


#define RTE_vInit HAL_vInit
#define RTE_vSetMotorDir HAL_vSetMotorDir
#define RTE_vSetMotorSpeed HAL_vSetMotorSpeed
#define RTE_vsetAngle Hal_setAngle

#define RTE_vSetDirLineFollower  HAL_vSetDirLineFollower
#define RTE_vWriteLineFollower   HAL_vWriteLineFollower
#define RTE_u8GetValueLineFollower HAL_u8GetValueLineFollower
#endif




