#include <iostream>
#include "Post.h"
#include "Media.h"

	Post::Post(const std::string& text) 
		: text(text), media(nullptr)
	{
	};

	Post::Post(const std::string& text, Media* media)
		: text(text), media(media)
	{
	};

	std::string Post::getText()
	{
		return this->text;
	};
	Media* Post::getMedia()
	{
		return this->media;
	};
		
	Post::~Post()
	{


	}