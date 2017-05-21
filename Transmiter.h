#pragma once
#include <queue>
#include "NetworkPacket.h"
#include "GeneratorExpotentional.h"

//#include "NewPacket.h"

class Transmiter
{
public:
	const int kCTIZ = 1; // czas transmisji ACK w ms
	const int kCSC = 1; // d�ugo�� szczeliny 
	const double kPT = 0.4; // prawdopodobie�stwo transmisji
	int CGPk; // losowy odst�p czasu generacji pakietu
	int CTPk; // czas transmisji pakietu z przedzia�u 1-10ms
	int CRP; // czas po kt�rym stacja nadawcza sprawdza stan kana�u po losowym czasie R*CTPk
	int R; // zmienna losowa o rozka�dzie jednostajnym w przedziale <0, 2^r -1)
	//NetworkPacket *processed; // wska�nik na aktualnie obs�ugiwany pakiet
	std::queue<NetworkPacket*> packet_list; // kolejka pakiet�w(bufor nadajnika)
	int id; // numer identyfikacyjy nadajnika. 

	GeneratorExpotentional *CPG_gen; // wska�nik na generator czasu CGP, intensynosc Lambda 

	GeneratorUniform *CTP_gen; // wska�nik na generator czasu CTP


////	NewPacket *TimeEventNewPacket;

	
	
public:
	Transmiter(int id_trans);
	~Transmiter();
};

