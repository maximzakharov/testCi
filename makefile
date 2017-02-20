################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

CPPUTEST_HOME = ../cpputest

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

INC_FOLDERS += \
  $(CPPUTEST_HOME)/include

LDFLAGS += -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: testCi

# Tool invocations
testCi: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: G++ C Linker'
	g++  -o "testCi" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) testCi
	-@echo ' '
test:
	./ad_parser

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
