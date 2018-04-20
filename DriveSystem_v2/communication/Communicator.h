/*
 * Communicator.h
 *
 * Created: 2018-04-20 3:00:29 PM
 *  Author: spear
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
	virtual bool HasPendingMessage(void) = 0;
	virtual const char* GetMessage(void) = 0;
	virtual const char* GetPendingMessage(void) = 0;
};


#endif /* COMMUNICATOR_H_ */