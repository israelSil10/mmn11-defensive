#ifndef BUISSNIESUSER_H
#define BUISSNIESUSER_H
#include <iostream>
#include "User.h"

class BuissniesUser : public User
{
public:
	virtual void sendMessage(User*, Message*);
};
#endif