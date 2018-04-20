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
protected:
	std::string message_;
public:
	Communicator(void);
	virtual bool SendMessage(const char* send_message) = 0;
	virtual std::string GetNewMessage(void) = 0;
	virtual std::string GetMessage(void) = 0;
};


#endif /* COMMUNICATOR_H_ */