#pragma once
#include "NetworkPacket.h"

class Channel
{
public:
	NetworkPacket *processed; // wska�nik na aktualnie obs�ugiwany pakiet
	Channel();
	bool check_channel();

	~Channel();
};

