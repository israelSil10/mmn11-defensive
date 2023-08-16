#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

class Message
{
	std::string m_text;

public:
	Message(const char*);
	~Message();
	std::string getText();
};

#endif 
