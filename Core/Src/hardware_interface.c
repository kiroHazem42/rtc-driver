/*
 * hardware_interface.c
 *
 *  Created on: Sep 1, 2024
 *      Author: victus
 */
#include "hardware_interface.h"

extern I2C_HandleTypeDef hi2c1; //dy ana sheltaha mn config struct fel hal
//3ashan teb2a independent 3ala el mcu


uint8_t I2C_Write(uint8_t sla ,uint8_t *Data, uint8_t Length){
	HAL_StatusTypeDef ok = HAL_I2C_Master_Transmit(&hi2c1, sla << 1,
	 Data, Length, 100);
	 return (ok == HAL_OK) ? 1 : 0;
}
uint8_t I2C_Read(uint8_t sla,uint8_t *Data, uint8_t Length){
	HAL_StatusTypeDef ok = HAL_I2C_Master_Receive(&hi2c1, sla << 1,
	 Data, Length, 100);
	 return (ok == HAL_OK) ? 1 : 0;
}


