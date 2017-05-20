#pragma once
//#include "NetworkPacket.h"
#include <queue>
//#include "NewPacket.h"

class Transmiter
{
public:
	const int kCTIZ = 1; // czas transmisji ACK w ms
	const int kCSC = 1; // d³ugoœæ szczeliny 
	const double kPT = 0.4; // prawdopodobieñstwo transmisji
	int CGPk; // losowy odstêp czasu generacji pakietu
	int CTPk; // czas transmisji pakietu z przedzia³u 1-10ms
	int CRP; // czas po którym stacja nadawcza sprawdza stan kana³u po losowym czasie R*CTPk
	int R; // zmienna losowa o rozka³dzie jednostajnym w przedziale <0, 2^r -1)
	//NetworkPacket *processed; // wskaŸnik na aktualnie obs³ugiwany pakiet
//	std::queue<NetworkPacket> packet_list; // kolejka pakietów(bufor nadajnika)
	int id;

////	NewPacket *TimeEventNewPacket;

	
	
public:
	Transmiter(int id_trans);
	~Transmiter();
};

