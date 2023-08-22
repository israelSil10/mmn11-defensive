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

class Usocial; //forward declaration


class User
{
	unsigned long generateID();
protected:
	unsigned long  m_id = -1;
	std::string m_name;
	std::list<unsigned long> m_friends;
	std::list<Message*> m_receivedMsgs;
	USocial* m_us;
	std::list<Post*> m_posts;
	bool operator==(const User& ) const;
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
	void viewFriendsPosts();
	virtual void sendMessage(User*, Message*);
	void receiveMsg(Message*);
	void viewReceivedMessages();

};

#endif