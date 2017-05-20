#pragma once
#include "NetworkPacket.h"

class CatchACK
{
	//NetworkPacket *pakiet;
public:
	bool Execute(NetworkPacket *pakiet);
	CatchACK();
	~CatchACK();
};

