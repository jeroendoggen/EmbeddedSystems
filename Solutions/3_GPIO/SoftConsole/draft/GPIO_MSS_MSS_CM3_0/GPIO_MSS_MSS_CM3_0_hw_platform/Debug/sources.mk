################################################################################
# Automatically-generated file. Do not edit!
################################################################################

O_SRCS := 
C_SRCS := 
S_UPPER_SRCS := 
S_SRCS := 
OBJ_SRCS := 
OBJS := 
C_DEPS := 
ARCHIVES := 

# Every subdirectory with source files must be described here
SUBDIRS := \
hal/CortexM3 \
hal/CortexM3/GNU \
drivers_config/mss_ace \
drivers/mss_uart \
drivers/mss_gpio \
drivers/mss_ace \
CMSIS \
CMSIS/startup_gcc \

################################################################################
# Microsemi SoftConsole IDE Variables
################################################################################

BUILDCMD = arm-none-eabi-ar -r 
SHELL := cmd.exe
EXECUTABLE := GPIO_MSS_MSS_CM3_0_hw_platform.a

# Target-specific items to be cleaned up in the top directory.
clean::
	-$(RM) $(wildcard ./*.map) 
