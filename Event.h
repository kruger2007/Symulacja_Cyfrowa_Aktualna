#pragma once
class Event
{
	double Te; // czas zdarzenia
	void(*eventPtr)(); // wskaznik do funkcji obslugujacej zdarzenie

public:
	int transmiterID;
	int reciverID;
	Event(double newTime,void (*ePtr)(),int transIdentfier, int reciverIdentifier);
	Event(double newTime);

	void execute();
	double getEventTime();
	~Event();
};

