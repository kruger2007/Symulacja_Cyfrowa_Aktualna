#include "stdafx.h"
#include "Reciver.h"





Reciver::Reciver(int identifier)
{
	processed = nullptr;
	id = identifier;
}

Reciver::~Reciver()
{
	delete processed;
}
