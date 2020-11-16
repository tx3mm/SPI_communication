/*
 * init.h
 *
 *  Created on: 16.11.2020
 *      Author: nxf63339
 */

#ifndef INIT_H_
#define INIT_H_

/* Ports and Pins definitions. Need to be manually created for every project and after every change */
#define LED_External_Pin 3U
#define LED_External_Port PTE
#define LED_External_Base_Port PORTE


/*Function prototypes*/
void ClockConfig(void);
void GPIO_Init(void);
void DMA_Init(void);
void USART_Init(void);
void SPI_Init(void);

#endif /* INIT_H_ */
