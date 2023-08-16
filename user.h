#ifndef USER_H
#define USER_H

#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include "Post.h"
#include "Message.h"
#include "Media.h"
#include "USocial.h"

class Usocial;

class User
{
	unsigned long generateID();
protected:
	USocial* us;
	unsigned long id = -1;
	std::string name;
	std::list<unsigned long> friends;
	std::list<Message*> receivedMsgs;
	std::list<Post*> posts;
	User();
	~User();

public:
	friend class USocial;
	unsigned long getId();
	std::string getName();
	std::list<Post*> getPosts();
	void addFriend(User*);
	void removeFriend(User*);
	void post(const std::string&);
	void post(const std::string&, Media*);
	//std::list<class pointer> func();
	//std::list<Post*> getPosts();
	void viewFriendsPosts();
	void receiveMsg(Message*);
	virtual void sendMessage(User*, Message);
	void viewReceivedMessages();

};

#endif