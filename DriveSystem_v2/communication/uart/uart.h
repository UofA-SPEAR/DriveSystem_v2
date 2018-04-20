/*
 * uart.h
 *
 * Simple UART driver for Atmega.
 * Author: Brad & Brian Ofrim
 */ 


#ifndef UART_H_
#define UART_H_


#include <stdio.h>
#include "hardware_config.h"

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#ifndef BAUD
#define BAUD 9600
#endif

FILE uart_output;
FILE uart_input;

void uart_init();
void uart_set_io_streams();
void uart_putchar(char c, FILE *stream);
char uart_getchar(FILE *stream);


#endif /* UART_H_ */