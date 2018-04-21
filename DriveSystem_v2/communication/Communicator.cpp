/*
 * Communicator.cpp
 *
 * Basic implementation of the communicator.
 * Author: Brad Ofrim
 */ 

#include "Communicator.h"

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
 * Description: Receive a message, update state, and return the message.
 * Inputs: None
 * Outputs: String representing the received message, 0 if message not
 * available.
*/
std:string Communicator::GetNewMessage(void)
{
	std::string new_message = ReceiveMessage();
	if(new_message != 0)
		message_ = new_message;

	return new_message;
}

/* 
 * Name: GetMessage
 * Description: Get the most recently read message.
 * Inputs: None
 * Outputs: String representing the most recent valid message received.
*/
std:string Communicator::GetMessage(void)
{
	return message_;
}