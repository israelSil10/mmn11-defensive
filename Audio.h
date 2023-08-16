#ifndef AUDIO_H
#define AUDIO_H
#include "Media.h"
#include <iostream>

class Audio :  public virtual Media
{
	Audio* a;
public:
	void  display() override;
};


#endif