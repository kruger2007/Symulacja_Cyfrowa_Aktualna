#pragma once
#include "NetworkPacket.h"

class Channel
{
public:
	NetworkPacket *processed; // wskaźnik na aktualnie obsługiwany pakiet
	Channel();
	bool check_channel();

	~Channel();
};

