#include <iostream>
#include "Post.h"
#include "Media.h"

	Post::Post(const std::string& text) 
		: m_text(text), m_media(nullptr)
	{
	};

	Post::Post(const std::string& text, Media* media)
		: m_text(text), m_media(media)
	{
	};

	std::string Post::getText()
	{
		return this->m_text;
	};
	Media* Post::getMedia()
	{
		return this->m_media;
	};
		
	Post::~Post()
	{
		if (this->m_media != nullptr)
			delete m_media;

	}