#pragma once
#include "NetworkPacket.h"

class Reciver
{
	NetworkPacket *processed; // wskaünik na aktualnie obs≥ugiwany pakiet
	int id; //numer identyfikacyjny odbiornika
public:
	Reciver(int identifier);
	~Reciver();
};

