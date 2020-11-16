/*
 * init.c
 *	This file is used to manually initialise clocks, ports and peripheralls. Needs to be updated for every project manually
 *	TODO: Find a way to manually select the different parameters
 *  Created on: 16.11.2020
 *      Author: nxf63339
 */

#include "Cpu.h"
#include "pin_mux.h"
#include "init.h"
#include "Send.h"
#include "Receive.h"


void ClockConfig(void){
	CLOCK_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT,
			g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
	CLOCK_SYS_UpdateConfiguration(0U, CLOCK_MANAGER_POLICY_AGREEMENT);
}

void GPIO_Init(void){
	PINS_DRV_SetMuxModeSel(PORTE, (1 << LED_External_Pin), PORT_MUX_AS_GPIO);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS, g_pin_mux_InitConfigArr);
	PINS_DRV_SetPinsDirection(LED_External_Port, (1 << LED_External_Pin));
	PINS_DRV_SetPins(LED_External_Port, (1 << LED_External_Pin));
	PINS_DRV_ClearPins(LED_External_Port, (1 << LED_External_Pin));
}

//TODO: Needs to be implemented
void DMA_Init(void){

}

//TODO: Needs to be implemented
void USART_Init(void){

}


//TODO: Needs to be implemented
void SPI_Init(lpspi_state_t masterState, lpspi_state_t slaveState){
	  /* Initialize LPSPI0 (Send)*/
	  LPSPI_DRV_MasterInit(SEND, &masterState, &Send_MasterConfig0);
	  /* Initialize LPSPI1 (Receive)*/
	  LPSPI_DRV_SlaveInit(RECEIVE, &slaveState, &Receive_SlaveConfig0);
}
