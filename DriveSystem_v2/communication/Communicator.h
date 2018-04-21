/*
 * Communicator.h
 *
 * Defines communication interface API.
 * Author: Brad Ofrim
 */ 


#ifndef COMMUNICATOR_H_
#define COMMUNICATOR_H_

#include <string>

class Communicator
{
public:

	/* Constructor, only initializes message_. */
	Communicator(void);
	
	/* Implementation specific write.
	 * Return the number of bytes written.
	 */
	virtual int SendMessage(const char* send_message) = 0;
	
	/* Receives a message, updates internal state, and returns the message. */
	std::string GetNewMessage(void);
	
	/* Returns the most recent message. */
	std::string GetMessage(void);

protected:

	/* Most recently read message. */
	std::string message_;
	
	/* Implementation specific read. Does NOT need to store new message in
	 * message_ variable. Should not block.
	 * Returns a new message if there is one, otherwise, returns 0. 
	 */
	virtual std::string ReceiveMessage(void) = 0;
};


#endif /* COMMUNICATOR_H_ */