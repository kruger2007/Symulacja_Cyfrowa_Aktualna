#include "stdafx.h"
#include "Retransmisson.h"
#include <iostream>
#include "CatchACK.h"


void Retransmisson::Execute()
{
	if(pakiet->ack_catch==false)
	{
	}
	std::cout << "Retransmisja pakietu z nadajnika nr xx" << std::endl;
}

Retransmisson::Retransmisson()
{
}

Retransmisson::Retransmisson(NetworkPacket *pakiet1)
{
	pakiet = pakiet1;

}


Retransmisson::~Retransmisson()
{
}
