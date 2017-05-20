#pragma once
#include "NetworkPacket.h"

class Retransmisson
{
	NetworkPacket *pakiet;
public:
	void Execute();
	Retransmisson();
	Retransmisson(NetworkPacket *pakiet1);
	~Retransmisson();
};

