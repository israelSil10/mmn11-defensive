#include <iostream>
#include "User.h"

class buissniesUser : public User
{
public:
	void sendMsg(User*, Message);
};