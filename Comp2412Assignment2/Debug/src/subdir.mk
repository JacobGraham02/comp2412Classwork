################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Problem1.cpp \
../src/Problem2.cpp \
../src/main.cpp 

CPP_DEPS += \
./src/Problem1.d \
./src/Problem2.d \
./src/main.d 

OBJS += \
./src/Problem1.o \
./src/Problem2.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Problem1.d ./src/Problem1.o ./src/Problem2.d ./src/Problem2.o ./src/main.d ./src/main.o

.PHONY: clean-src

