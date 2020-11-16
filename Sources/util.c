/*
 * util.c
 *
 *  Created on: 16.11.2020
 *      Author: nxf63339
 */

#include "util.h"
#include "string.h"
#include "stdlib.h"
#include "FreeRTOS.h"
#include "task.h"

#define IS_IRQ_MASKED()           (__get_PRIMASK() != 0U)
#define IS_IRQ_MODE()             (__get_IPSR() != 0U)
#define IS_IRQ()                  (IS_IRQ_MODE() || (IS_IRQ_MASKED() && (KernelState == osKernelRunning)))

static osKernelState_t KernelState = osKernelInactive;

/* Custom funciton to create a delay when using FreeRTOS.
 * @ return status message
 * */
osStatus_t osDelay (uint32_t ticks) {
  osStatus_t stat;

  if (IS_IRQ()) {
    stat = osErrorISR;
  }
  else {
    stat = osOK;

    if (ticks != 0U) {
      vTaskDelay(ticks);
    }
  }

  return (stat);
}
