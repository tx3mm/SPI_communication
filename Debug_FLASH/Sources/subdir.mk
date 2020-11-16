################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/init.c \
../Sources/main.c \
../Sources/rtos.c \
../Sources/task_SPI_master.c \
../Sources/task_SPI_slave.c \
../Sources/util.c 

OBJS += \
./Sources/init.o \
./Sources/main.o \
./Sources/rtos.o \
./Sources/task_SPI_master.o \
./Sources/task_SPI_slave.o \
./Sources/util.o 

C_DEPS += \
./Sources/init.d \
./Sources/main.d \
./Sources/rtos.d \
./Sources/task_SPI_master.d \
./Sources/task_SPI_slave.d \
./Sources/util.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


