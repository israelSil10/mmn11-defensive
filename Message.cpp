#include <list>
#include <iostream>
#include "Message.h"

Message::Message(const char* text)
{
	this->m_text = text;
}

std::string Message::getText()
{
	return this->m_text;
}
