/*
 * hardware_interface.h
 *
 *  Created on: Sep 1, 2024
 *      Author: victus
 */

#ifndef INC_HARDWARE_INTERFACE_H_
#define INC_HARDWARE_INTERFACE_H_
#include "stm32f1xx_hal.h"
uint8_t I2C_Write(uint8_t sla ,uint8_t *Data, uint8_t Length);
uint8_t I2C_Read(uint8_t sla,uint8_t *Data, uint8_t Length);


#endif /* INC_HARDWARE_INTERFACE_H_ */
