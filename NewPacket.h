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
	int time;						  //Czas kolejnego zg≥oszenia
	NetworkPacket * packet;
    Wsystem *system;                  //wskaünik systemu bezprzewodowego
	int packet_id; 
	GeneratorExpotentional *CPG_gen;  //wskaünik na generator czasu CGP
	
	GeneratorUniform *CTP_gen;       //wskaünik na generator czasu CTP



public:
	//NetworkPacket * Execute();
	NewPacket(Wsystem *wsys,double lambda);
	void Execute(int i);
	
	
	~NewPacket();
};

