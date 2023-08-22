#include <iostream>
#include "BuissniesUser.h"
#include "user.h"
#include "Message.h"


void BuissniesUser::sendMessage(User* user, Message* msg)
{
	user->receiveMsg(msg);
}