/*
 * Communicator.h
 *
 * Defines communication interface API.
 * Author: Brad Ofrim
 */ 


#ifndef COMMUNICATOR_H_
#define COMMUNICATOR_H_


class Communicator
{
public:

	/* Constructor, only initializes message_. */
	Communicator(void);
	
	/* Implementation specific write.
	 * Return the number of bytes written.
	 */
	virtual int SendMessage(const char* send_message) = 0;
	
	/* Receives a message, updates internal state, and returns the message.
	 * Returns the number of bytes copied into the buffer 
	 */
	int GetNewMessage(char *buffer, int buffer_size);
	
	/* Copies the most recent message into the buffer and returns its size. */
	int GetMessage(char *buffer, int buffer_size);

protected:

	/* Most recently read message. */
	char[MAX_MESSAGE] message_ = {0};
	
	/* Size of most recently read message. */
	int message_size_ = 0;
	
	/* Implementation specific read. Does NOT need to store new message in
	 * message_ variable. Should not block unless implementation uses tasks.
	 * Returns the number of bytes received and copies message to the buffer. 
	 */
	virtual int ReceiveMessage(char *buffer, int buffer_size) = 0;
};


#endif /* COMMUNICATOR_H_ */