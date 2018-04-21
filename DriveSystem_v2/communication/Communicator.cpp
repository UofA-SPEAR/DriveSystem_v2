/*
 * Communicator.cpp
 *
 * Basic implementation of the communicator.
 * Author: Brad Ofrim
 */ 

#include "Communicator.h"
#include <string.h>

/* 
 * Name: Communicator Constructor
 * Description: Constructor for the Communicator class.
 * Inputs: None
 * Outputs: None
*/
Communicator::Communicator(void)
{
	message_ = 0;	
};

/* 
 * Name: GetNewMessage
 * Description: Receive a message and copy it into the message buffer.
 * Inputs:	char *buffer to copy data to.
 *			int buffer_size representing the size of the buffer.
 * Outputs: Int representing the number of bytes received.
*/
int Communicator::GetNewMessage(char *buffer, int buffer_size)
{
	int new_message_size = ReceiveMessage(buffer, buffer_size);
	strncpy(message_, buffer, sizeof(message_));
	message_[sizeof(message_)-1] = '\0'; // Guarantee null termination
	message_size_ = new_message_size;
	return new_message_size;
}

/* 
 * Name: GetMessage
 * Description: Get the most recently read message.
 * Inputs: None
 * Outputs: Int representing the number of bytes in the message.
*/
int Communicator::GetMessage(char *buffer, int buffer_size)
{
	strncpy(buffer, message_, sizeof(buffer))
	return message_size_;
}