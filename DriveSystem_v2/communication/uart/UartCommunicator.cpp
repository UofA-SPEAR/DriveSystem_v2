/*
 * UartCommunicator.cpp
 *
 * Implementation of UART Communicator.
 *  Author: Brad Ofrim
 */ 

#include <assert.h>
#include "config.h"

/* 
 * Name: UartCommunicator Constructor
 * Description: Associate this instance with the correct UART ports.
 * Inputs: int representing the UART register to associate this object with.
 * NOTE: Nothing is done to ensure register exclusivity. Do NOT create two 
 * UartCommunicators on the same register.
 * Outputs: None
*/
UartCommunicator::UartCommunicator(int uart_number) 
{
	assert(uart_number >= 0 && uart_number <= MAX_UART_NUMBER);
	switch uart_number
	{
		case 0:
			break;
		case 1:
			assert(0) // Drivers not implemented yet
			break;
		case 2:
			assert(0) // Drivers not implemented yet
			break;
		case 3:
			assert(0) // Drivers not implemented yet
			break;
		default:
			assert(0) // Invalid UART number
			break;
	}
};
	
/*
 * Name: Init
 * Description: Initialize buffer space and enable interrupts
 * Inputs: None
 * Outputs: None
 */
UartCommunicator::Init()
{
	//TODO: implement
}
	
/*
 * Name: ReciveMessage
 * Description: Read buffered bytes received over UART.
 * Inputs:	char *buffer to copy data to.
 *			int buffer_size representing the size of the buffer.
 * Outputs: int representing number of bytes received.
*/
int UartCommunicator::ReceiveMessage(char *buffer, int buffer_size)
{
	//TODO: implement
}

/*
 * Name:
 * Description:
 * Inputs: 
 * Outputs:
*/
int UartCommunicator::SendMessage(const char* send_message)
{
	//TODO: implement
}

#ifdef USART0_RECIEVE_VECTOR
ISR(USART0_RECIEVE_VECTOR)
{
	//TODO: Implement
}
#endif
