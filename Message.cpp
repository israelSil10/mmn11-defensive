#include <list>
#include <iostream>
#include "Message.h"

Message::Message(const char* text)
{
	this->m_text = text;
}

Message::~Message()
{
	delete(this);
}

std::string Message::getText()
{
	return this->m_text;
}
