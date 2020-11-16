################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Programs/NXP/S32DS_ARM_v2.2/S32DS/software/S32SDK_S32K1xx_RTM_3.0.0/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.c 

OBJS += \
./SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.o 

C_DEPS += \
./SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.o: C:/Programs/NXP/S32DS_ARM_v2.2/S32DS/software/S32SDK_S32K1xx_RTM_3.0.0/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.args" -MMD -MP -MF"SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.d" -MT"SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


