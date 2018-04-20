/*
 * hardware_config.h
 *
 * Used to pick the desired hardware configurations to be used in the project.
 * In order to port to a different board (with equal or greater functionality
 * than the Atmega2560, create a specific hardware configuration file and 
 * include it.
 * Author: Brad Ofrim
 */ 


#ifndef HARDWARE_CONFIG_H_
#define HARDWARE_CONFIG_H_

// NOTE: Only one file should ever be used to configure registers.
// Otherwise re-definitions may occur. (Make sure to only include one file)

#include "atmega2560_config.h"


#endif /* HARDWARE_CONFIG_H_ */