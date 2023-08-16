#ifndef USOCIAL_H
#define USOCIAL_H
#include <iostream>
#include <map>
#include "User.h"

class User;

class USocial
{
	std::string m_userName;
	bool m_isPrimum = false;
	std::map<unsigned long,User*> m_users;
public:
	friend class User;
	User* registerUser(const std::string&, bool);
	User* registerUser(const std::string&);
	void removeUser(User*); 
	User* getUserById(unsigned long);
	
};
#endif