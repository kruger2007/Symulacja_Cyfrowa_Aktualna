#include "stdafx.h"
#include "Event.h"




Event::Event(double newTime, void(* ePtr)(), int transIdentfier, int reciverIdentifier)
{
	Te = newTime;
	eventPtr = ePtr;
	transmiterID = transIdentfier;
	reciverID = reciverIdentifier;
}

Event::Event(double newTime)
{
	Te = newTime;
}

void Event::execute()
{
	eventPtr();
}

double Event::getEventTime()
{
	return Te;
}

Event::~Event()
{
}
