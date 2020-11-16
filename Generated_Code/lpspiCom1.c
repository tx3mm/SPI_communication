/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : lpspiCom1.c
**     Project     : freertos_s32k144
**     Processor   : S32K144_100
**     Component   : lpspi
**     Version     : Component 1.0.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-11-16, 14:47, # CodeGen: 2
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file lpspiCom1.c
** @version 01.00
*/         
/*!
**  @addtogroup lpspiCom1_module lpspiCom1 module documentation
**  @{
*/         

/* lpspiCom1. */
/* MODULE lpspiCom1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source file that user initialize
 * to use this module.
 */
#include "lpspiCom1.h"

/*! @brief State structure for LPSPI0 */
lpspi_state_t lpspiCom1State;



const lpspi_master_config_t lpspiCom1_MasterConfig0 = {
  .bitsPerSec = 500000U,
  .whichPcs = LPSPI_PCS0,
  .pcsPolarity = LPSPI_ACTIVE_HIGH,
  .isPcsContinuous = false,
  .bitcount = 8U,
  .lpspiSrcClk = 8000000U,
  .clkPhase = LPSPI_CLOCK_PHASE_1ST_EDGE,
  .clkPolarity = LPSPI_SCK_ACTIVE_HIGH,
  .lsbFirst = false,
  .transferType = LPSPI_USING_INTERRUPTS,
  .rxDMAChannel = 255,
  .txDMAChannel = 255,
  .callback = NULL,
  .callbackParam = NULL,
};

const lpspi_slave_config_t lpspiCom1_SlaveConfig0 = {
  .pcsPolarity = LPSPI_ACTIVE_HIGH,
  .bitcount = 8U,
  .clkPhase = LPSPI_CLOCK_PHASE_1ST_EDGE,
  .whichPcs = LPSPI_PCS0,
  .clkPolarity = LPSPI_SCK_ACTIVE_HIGH,
  .lsbFirst = false,
  .transferType = LPSPI_USING_INTERRUPTS,
  .rxDMAChannel = 255,
  .txDMAChannel = 255,
  .callback = NULL,
  .callbackParam = NULL,
};


/* END lpspiCom1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
