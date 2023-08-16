#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include "User.h"
#include "Post.h"
#include "Media.h"
#include "Message.h"
#include "USocial.h"
#include <random>

User::User()
{
	 id = generateID();

}

User::~User()
{
	//delete();
}



unsigned long  User::generateID() {
	
	//return rand();
	
	// Create a random number engine
	std::random_device rd;
	std::mt19937 engine(rd());

	// Define the range for the 9-digit number (100,000,000 to 999,999,999)
	std::uniform_int_distribution<long> distribution(100'000'000, 999'999'999);

	// Generate the random number
	return distribution(engine);
}

unsigned long User::getId()
{
	return id;
}

std::string User::getName()
{
	return name;
}


void User::addFriend(User* frnd)
{
	this->friends.push_back(frnd->getId());
}

void User::removeFriend(User*)
{

}

void User::post(const std::string& postText)
{
	Post* post = new Post(postText);
	this->posts.push_back(post);
	std::cout << postText << std::endl;
	//std::cout << this->posts.end() << std::endl;

}
void User::post(const std::string& postText, Media* postMedia)
{
	Post* post = new Post(postText, postMedia);
	std::cout << postText << std::endl;
	postMedia->display();
	this->posts.push_back(post);
}

std::list<Post*> User::getPosts()
{
	return this->posts;

}

void User::viewFriendsPosts()
{
	
	for (unsigned long friendPtr : this->friends)
	{
		std::cout << "Friend: " << friendPtr << std::endl;
		User* x = us->getUserById(friendPtr);
		std::cout <<"name: "<< x->getName() << std::endl;
		for (Post* postPtr : x->posts) 
		{
			std::cout << "  Post: " << postPtr << std::endl;
		}
	}

	
}

void User::receiveMsg(Message*)
{


}
void User::sendMessage(User*, Message)
{

}

void User::viewReceivedMessages()
{

}
