#pragma once
#include "NetworkPacket.h"

class Reciver
{
	NetworkPacket *processed; // wskaźnik na aktualnie obsługiwany pakiet
	int id; //numer identyfikacyjny odbiornika
public:
	Reciver(int identifier);
	~Reciver();
};

