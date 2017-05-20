#pragma once
#include "NetworkPacket.h"

class Channel
{
public:
	NetworkPacket *processed; // wskaünik na aktualnie obs≥ugiwany pakiet
	Channel();
	bool check_channel();

	~Channel();
};

