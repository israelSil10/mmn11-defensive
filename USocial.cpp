#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include <map>

#include "USocial.h"
#include "User.h"


User* USocial::registerUser(const std::string& name, bool isPrimum)
{	
	User* user = new User();
	user->name = name;
	user->id=user->generateID();
	m_users.insert({ user->id ,user });
	return user;
}

User* USocial::registerUser(const std::string& name)
{
	return registerUser(name, false);
}

void USocial::removeUser(User*)
{

}
	
User* USocial::getUserById(unsigned long id)
{
	User* user;
	user = m_users[id];
	return user;

}
