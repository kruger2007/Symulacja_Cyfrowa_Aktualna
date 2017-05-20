#pragma once
#include <vector>
#include "NetworkPacket.h"
#include "CatchACK.h"
#include "Channel.h"
#include "Time_events.h"


class SendingPacket :
	public Time_events
{
public:
	const double CTIZ = 0.001;
	CatchACK *ACK;
	void Execute(std::vector<NetworkPacket*> &Pakiety,Channel *kanal);
	void losowanie_ctp(NetworkPacket *pakiet);
	SendingPacket();
	~SendingPacket();
};

