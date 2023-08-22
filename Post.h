#ifndef POST_H
#define POST_H

#include <iostream>
#include "Media.h"

class Post
{
 	std::string m_text;
	Media * m_media = NULL;

public:
	Post(const std::string&);
	Post(const std::string&, Media*);
	~Post();
	std::string getText();
	Media* getMedia();

};

#endif