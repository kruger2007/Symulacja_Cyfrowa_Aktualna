#include "stdafx.h"
#include "NetworkPacket.h"
#include <cstdlib>
#include <iostream>


void NetworkPacket::wyswietl_info()
{
	std::cout << "Numer nadajnika: " << this->trans_Id << std::endl;
	std::cout << "Numer odbiornika:  " << this->reciver_Id << std::endl;
	std::cout << "Czas w buforze: " << this->buffered_time << std::endl;
}

NetworkPacket::NetworkPacket(int p_id,int iS)
{
	buffered_time = 0;
	trans_Id = (rand() % 10) + 0;
	reciver_Id = (rand() % 10) + 0;
	czas_ctp = 0;
	CGP = 0;
	packet_id = p_id;
	inSystem = iS;

}


NetworkPacket::~NetworkPacket()
{
}
