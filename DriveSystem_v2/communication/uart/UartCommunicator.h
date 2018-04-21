/*
 * UartCommunicator.h
 *
 * Header for a UART based Communicator class.
 * NOTE: Only possible to use 4 UARTs at the moment. I don't for see the need
 * for more right now, but more defines can be added to the HW config, more 
 * buffers can be allocated, and more ISRs can be written if we need more.
 * Author: Brad Ofrim
 */ 


#ifndef UARTCOMMUNICATOR_H_
#define UARTCOMMUNICATOR_H_

#include <string>

#ifdef USART0_RECIEVE_VECTOR
char uart0_message_buffer[MAX_MESSAGE] = {0};
#endif

#ifdef USART1_RECIEVE_VECTOR
char uart1_message_buffer[MAX_MESSAGE] = {0};
#endif

#ifdef USART2_RECIEVE_VECTOR
char uart2_message_buffer[MAX_MESSAGE] = {0};
#endif

#ifdef USART3_RECIEVE_VECTOR
char uart3_message_buffer[MAX_MESSAGE] = {0};
#endif


class UartCommunicator: public Communicator
{
public:
	UartCommunicator(int uart_number);
	void Init(void);
	int SendMessage(const char* send_message);
	
protected:
	int ReceiveMessage(char *buffer, int buffer_size);
	
private:
	char* message_buffer;
	int transmit_register;
};


#endif /* UARTCOMMUNICATOR_H_ */