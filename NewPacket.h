#pragma once
#include "NetworkPacket.h"
#include "Time_events.h"
//#include "WirelessSystem.h"
#include "GeneratorUniform.h"
#include "GeneratorExpotentional.h"
#include "Wsystem.h"
static const double LAMBDA = 0.1;

class NewPacket :
	public Time_events
	
{
	int time;
	NetworkPacket * packet;
    Wsystem *system; //wskaünik systemu bezprzewodowego
	int packet_id;
	GeneratorExpotentional *CPG_gen;
	
	GeneratorUniform *CTP_gen;



public:
	//NetworkPacket * Execute();
	NewPacket(Wsystem *wsys,double lambda);
	void Execute();
	
	
	~NewPacket();
};

