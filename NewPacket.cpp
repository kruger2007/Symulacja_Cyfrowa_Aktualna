#include "stdafx.h"
#include "NewPacket.h"
#include <iostream>
#include "NetworkPacket.h"

//Klasa tworzy nowy pakiet i zwraca wskaźnik do klasy przez nią wywołanej//

/*NetworkPacket * NewPacket::Execute()
{
	
	NetworkPacket *new_packet = new NetworkPacket();
//	std::cout << "Pojawia sie nowy pakiet " << std::endl;
//	new_packet->wyswietl_info();
	return new_packet;
}*/

NewPacket::NewPacket(Wsystem *wsys, double lambda)
{
	CPG_gen = new GeneratorExpotentional(LAMBDA);                                // zmienna losowa o rozkładzie wykładniczym o intensywności Lambda
	packet = nullptr; 
	packet_id = 0;
	CTP_gen = new GeneratorUniform(1, 10 + 1);                                   // generator liczb jednostajnych w przedzialne 1-10ms
	for(int i=1;i<=10;++i)
	{
		time[i] = 0;
	}
	system = wsys;



	
}

void NewPacket::Execute(int i)
{
	packet = new NetworkPacket(++packet_id,system->time_sys);                    // tworzenie nowego pakietu o wejściu do systemu, time_sys
	++system->packet_amount;                                                     // zwiększenie ilości pakietów w systemie
	packet->czas_ctp = int(system->Transmiters[i]->CTP_gen->generate());         // generowanie pakietu wykorzystując generator danego nadajnika
	std::cout << "Pojawia sie nowy pakiet nr: " << system->packet_amount << " na nadajniku nr " << i << std::endl;
	system->Transmiters[i]->packet_list.push(packet);                            // umieszczenie wygenerowanego pakietu w buf. nadajnika[i],
	time[i] = system->time_sys + int(system->Transmiters[i]->CPG_gen->execute());   // Planowanie kolejnego zgłoszenia
	std::cout << "wylosowane CPG " << time[i] << std::endl;
	packet = nullptr;                                                            // Zerowanie wskaźnika

}

NewPacket::~NewPacket()
{
	delete CPG_gen;
	delete CTP_gen;
}
