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


User::User() : id(generateID()), name("")
{
	
}

User::~User()
{
	//delete;
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

//adding a friend is mutual so friends add each other
void User::addFriend(User* frnd)
{
	this->friends.push_back(frnd->getId());
	frnd->friends.push_back(this->getId());	
}

void User::removeFriend(User* frnd)
{
	friends.remove(frnd->getId());
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
		User* friendUser = _us->getUserById(friendPtr);
		std::cout << "Posts from " << friendUser->getName() << ":" << std::endl;
		//std::cout <<"name: "<< friendUser->getName() << std::endl;
		for (Post* postPtr : friendUser->posts)
		{
			std::cout << "  Post: " << postPtr->getText() << postPtr->getMedia()<<std::endl;
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
