#ifndef WirelessSystem_hpp
#define WirelessSystem_hpp
//#include "NetworkPacket.h"
#include <vector>
#include "Transmiter.h"
#include "Reciver.h"
//#include "NewPacket.h"
#include "Channel.h"
//#include "Retransmisson.h"
//#include "SendingPacket.h"
//#include "CheckChannel.h"

class WirelessSystem
{
public:
	const int kTransmiter_Amount = 10; //ilosc nadajnikow
	const int kReciver_Amount = 10; //ilosc odbiornikow
	//std::vector<NetworkPacket*> Packets; // wektor pakietow
////	std::vector<Transmiter*> Transmiters; //  wektor nadajników
//	std::vector<Reciver*> Recivers; // wektor odbiornikow
	
	
//	NewPacket *nowy_pakiet;
//	Channel *kanal;
	//Retransmisson *retransmisja;
	//SendingPacket *przesylanie_pakietu;


	WirelessSystem();
	

	~WirelessSystem();
};
#endif
