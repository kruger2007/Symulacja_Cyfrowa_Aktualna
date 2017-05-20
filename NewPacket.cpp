#include "stdafx.h"
#include "NewPacket.h"
#include <iostream>
#include "NetworkPacket.h"

//Klasa tworzy nowy pakiet i zwraca wska�nik do klasy przez ni� wywo�anej

/*NetworkPacket * NewPacket::Execute()
{
	
	NetworkPacket *new_packet = new NetworkPacket();
//	std::cout << "Pojawia sie nowy pakiet " << std::endl;
//	new_packet->wyswietl_info();
	return new_packet;
}*/

NewPacket::NewPacket(Wsystem *wsys, double lambda)
{
	CPG_gen = new GeneratorExpotentional(LAMBDA); // zmienna losowa o rozk�adzie wyk�adniczym o intensywno�ci Lambda
	packet = nullptr; 
	packet_id = 0;
	CTP_gen = new GeneratorUniform(1, 10 + 1); // zmienna losowa o rozk�adzie jednostajny w przedzialne 1-10ms
	time = 0;



	
}

void NewPacket::Execute()
{
	packet = new NetworkPacket(++packet_id,system->time_sys); // tworzenie nowego pakietu o wej�ciu do systemu time_sys
	++system->packet_amount; // zwi�kszenie ilo�ci pakiet�w w systemie
	std::cout << "Pojawia sie nowy pakiet nr: " << system->packet_amount;





}

NewPacket::~NewPacket()
{
	delete CPG_gen;
	delete CTP_gen;
}
