#include <iostream>
#include <list>
#include <algorithm>
#include "User.h"
#include "USocial.h"
#include "Message.h"
#include "Media.h"
#include "Audio.h"
#include "Photo.h"

class Usocial;
class User;

int main()
{
	USocial us;
	User* u1 = us.registerUser("Liron");
	User* u2 = us.registerUser("Yahav");
	User* u3 = us.registerUser("Shachaf");
	User* u4 = us.registerUser("Tsur", true);
	User* u5 = us.registerUser("Elit");
	std::map<unsigned long, User*> x = us.getMap();
	//std::cout << x.;
	/*for (const auto& elem : x)
	{
		std::cout << elem.first << " " << elem.second << "\n";
	}*/

	
	//std::cout << us.getMap().begin() << std::endl;
	u1->post("Hello world!");
	u2->post("I'm having a great time here :)", new Audio());
	u3->post("This is awesome!", new Photo());
	u5->addFriend(u1);
	u5->addFriend(u2);
	for (std::map<unsigned long, User*>::const_iterator it = x.begin();
		it != x.end(); ++it)
	{
		std::cout << it->first <<" "<<x[it->first]->getName() << std::endl;
	}
	u5->viewFriendsPosts(); // should see only u1, u2 s' posts   
	//u4->sendMessage(u5, new Message("Buy Falafel!"));  u5->viewReceivedMessages();
	//try { u3->sendMessage(u5, new Message("All your base are belong to us")); }
	//catch (const std::exception& e) { std::cout << "error: " << e.what() << std::endl; }
	//u5->viewReceivedMessages();
	//u3->addFriend(u5);
	//u3->sendMessage(u5, new Message("All your base are belong to us"));
	//u5->viewReceivedMessages();


	return 0;
}





