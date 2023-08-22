#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include <map>

#include "USocial.h"
#include "User.h"
#include "BuissniesUser.h"


User* USocial::registerUser(const std::string& name, bool isPrimum)
{	
	User* user;
	if (isPrimum)
		user = new BuissniesUser();
	else user = new User();
	user->m_name = name;
	user->m_us = this;
	m_users.insert({ user->m_id ,user });//add user to Map
	return user;
}

User* USocial::registerUser(const std::string& name)
{
	return registerUser(name, false);
}

void USocial::removeUser(User* user)
{
	delete(m_users[user->getId()]);
}
	
User* USocial::getUserById(unsigned long id)
{
	User* user;
	user = this->m_users[id];
	return user;

}

std::map<unsigned long, User*>  USocial::getMap()
{
	return m_users;

}

USocial::~USocial()
{
	std::cout << "Dddd";
	for (std::pair<unsigned long, User*> user : this->m_users)
		delete(user.second);
}