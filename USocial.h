#ifndef USOCIAL_H
#define USOCIAL_H
#include <iostream>
#include <map>

class User; //forward declaration

class USocial
{
	std::string m_userName;
	bool m_isPrimum = false;
	std::map<unsigned long,User*> m_users;
public:
	~USocial();
	friend class User;
	User* registerUser(const std::string&, bool);
	User* registerUser(const std::string&);
	void removeUser(User*); 
	User* getUserById(unsigned long);
	std::map<unsigned long, User*>  getMap();
	
};
#endif