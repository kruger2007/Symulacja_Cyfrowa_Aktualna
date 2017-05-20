#include "stdafx.h"
#include "NewPacket.h"
#include <iostream>
#include "NetworkPacket.h"

//Klasa tworzy nowy pakiet i zwraca wskaünik do klasy przez niπ wywo≥anej

/*NetworkPacket * NewPacket::Execute()
{
	
	NetworkPacket *new_packet = new NetworkPacket();
//	std::cout << "Pojawia sie nowy pakiet " << std::endl;
//	new_packet->wyswietl_info();
	return new_packet;
}*/

NewPacket::NewPacket(Wsystem *wsys, double lambda)
{
	CPG_gen = new GeneratorExpotentional(LAMBDA); // zmienna losowa o rozk≥adzie wyk≥adniczym o intensywnoúci Lambda
	packet = nullptr; 
	packet_id = 0;
	CTP_gen = new GeneratorUniform(1, 10 + 1); // zmienna losowa o rozk≥adzie jednostajny w przedzialne 1-10ms
	time = 0;



	
}

void NewPacket::Execute()
{
	packet = new NetworkPacket(++packet_id,system->time_sys); // tworzenie nowego pakietu o wejúciu do systemu time_sys



}

NewPacket::~NewPacket()
{
	delete CPG_gen;
	delete CTP_gen;
}
