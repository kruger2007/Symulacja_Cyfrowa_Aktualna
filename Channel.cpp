#include "stdafx.h"
#include "Channel.h"


Channel::Channel()
{
	processed = nullptr;
}

bool Channel::check_channel()
{
	if (processed == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}


Channel::~Channel()
{
}
