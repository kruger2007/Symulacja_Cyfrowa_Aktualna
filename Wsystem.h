#pragma once
#include <vector>
#include "Transmiter.h"
#include "Reciver.h"


class Wsystem
{
public:
	///////////////////////////////// Statystyki /////////////////////////////////////
	int time_sys; // czas systemowy
	double average_retransmisson; // �rednia ilo�� retransmisji
	int retransmison_ammount; // ilo�� retransmisji

	int packet_amount; // ca�kowita ilo�� pakiet�w w systemie 


	int bitrate; // przep�ywno�� na sekunde

	int average_delay; // �rednie op�nienie, czas pomi�dzy odebraniem ACK a wej�ciem do bufora, 
	int ack_time; 

	int average_wait; // �redni czas oczekiwania pakietu, suma czas�w w buforze dzielona na ilo�� pakiet�w, 
	int packet_into_system; // Zaimplementowa� to w pakiecie, aby ka�dy pakiet posiada� osobny czas wej�cia i wyj�cia z systemu
	int pacekt_out_system;


	
	double average_packet_send_error; // �rednia pakietowa stopa bl�du
	double max_packet_send_error; // maksymalna pakietowa stopa bl�du

	const int kTransmiter_Amount = 10; //ilosc nadajnikow
	const int kReciver_Amount = 10; //ilosc odbiornikow
    std::vector<Transmiter*> Transmiters; //  wektor nadajnik�w
	std::vector<Reciver*> Recivers; // wektor odbiornikow
	Wsystem();
	~Wsystem();
};

