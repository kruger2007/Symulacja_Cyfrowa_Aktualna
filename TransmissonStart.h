#pragma once
#include "CheckChannel.h"
#include "Condition_Events.h"

class TransmissonStart :
	public Condition_Events
{
public:
	void Execute();
	TransmissonStart(CheckChannel *spr_kanal);
	TransmissonStart();
	~TransmissonStart();
};

