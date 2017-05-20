#include "stdafx.h"
#include "WirelessSystem.h"


WirelessSystem::WirelessSystem()
{
	
	//nowy_pakiet = new NewPacket();
	//kanal = new Channel();
	//retransmisja = new Retransmisson();
//	przesylanie_pakietu = new SendingPacket();
	//tworenie nadajnikow
	for(int i=0;i<10;++i)
	{
//		Transmiters.push_back(new Transmiter(i));
	}
	//tworenie odbiornikow
	for (int i = 0; i<10; ++i)
	{
//		Recivers.push_back(new Reciver(i));
	}
	

}


WirelessSystem::~WirelessSystem()
{
	//delete nowy_pakiet;
	//nowy_pakiet = nullptr;
}
