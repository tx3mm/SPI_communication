################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Programs/NXP/S32DS_ARM_v2.2/S32DS/software/S32SDK_S32K1xx_RTM_3.0.0/rtos/osif/osif_freertos.c 

OBJS += \
./SDK/rtos/osif/osif_freertos.o 

C_DEPS += \
./SDK/rtos/osif/osif_freertos.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/osif/osif_freertos.o: C:/Programs/NXP/S32DS_ARM_v2.2/S32DS/software/S32SDK_S32K1xx_RTM_3.0.0/rtos/osif/osif_freertos.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/rtos/osif/osif_freertos.args" -MMD -MP -MF"SDK/rtos/osif/osif_freertos.d" -MT"SDK/rtos/osif/osif_freertos.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


