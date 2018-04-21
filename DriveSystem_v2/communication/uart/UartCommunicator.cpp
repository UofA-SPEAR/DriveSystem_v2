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
			break;
		case 2:
			break;
		case 3:
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
 * Inputs: None
 * Outputs: String representing the message that was received.
*/
std::string UartCommunicator::ReceiveMessage(void)
{
	//TODO: implement
}

/*
 * Name:
 * Description:
 * Inputs: 
 * Outputs:
*/
int UartCommunicator::SendMessage()
{
	//TODO: implement
}

#ifdef USART0_RECIEVE_VECTOR
ISR(USART0_RECIEVE_VECTOR)
{
	//TODO: Implement
}
#endif
