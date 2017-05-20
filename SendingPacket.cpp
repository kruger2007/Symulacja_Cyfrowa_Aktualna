#include "stdafx.h"
#include "SendingPacket.h"
#include <iostream>
#include "Channel.h"



void SendingPacket::Execute(std::vector<NetworkPacket*> &Pakiety,Channel *kanal)
{
 //Pakiety[0]->wyswietl_info();
	kanal->processed = Pakiety[0];
	losowanie_ctp(Pakiety[0]);
	if (ACK->Execute(Pakiety[0])) 
	{
		Pakiety.erase(Pakiety.begin());
		kanal->processed = nullptr;
	}


}

void SendingPacket::losowanie_ctp(NetworkPacket* pakiet)
{
	pakiet->czas_ctp = ((rand() % 10) / 1000); // losowanie czasu ctpk 1-10ms
}

SendingPacket::SendingPacket()
{
	ACK = new CatchACK();
}


SendingPacket::~SendingPacket()
{
}
