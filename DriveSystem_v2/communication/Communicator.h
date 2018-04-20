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
protected:
	char* message_;
public:
	Communicator(void);
	virtual bool SendMessage(const char* send_message) = 0;
	virtual const char* GetMessage(void) = 0;
	virtual const char* GetNewMessage(void) = 0;
};


#endif /* COMMUNICATOR_H_ */