/*
 * task_SPI_master.c
 *
 *  Created on: 13.11.2020
 *      Author: nxf63339
 */

/*System includes*/
#include "stdio.h"
#include "stdlib.h"
#include "FreeRTOS.h"

/* Personal includes*/
#include "task_SPI_master.h"
#include "lpspi_master_driver.h"
#include "lpspiCom1.h"
#include "lpspi_shared_function.h"
#include "defines.h"
#include "BoardDefines.h"
#include "util.h"

void SPITask_Master(void * argument){
	while(1){
		printf("I am in SPI task Master!\n");
		PINS_DRV_TogglePins(LED_External_GPIO, (1 << LED3_Anton));
//		OSIF_TimeDelay(2000);
		osDelay(2000);
	}
}


/* For GCC compiler revise _write() function for printf functionality */
//int _write(int file, char *ptr, int len)
//{
//    int i;
//    file = file;
//    for (i = 0; i < len; i++)
//    {
////        UART_PutByte(*ptr++);
//    }
//    return len;
//}

int _write(int file, char *ptr, int len)
{
//	HAL_UART_Transmit(&huart2,(uint8_t *)ptr,len, 100);
	return len;
}
