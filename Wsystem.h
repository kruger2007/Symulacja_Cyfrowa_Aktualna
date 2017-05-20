#pragma once
#include <vector>
#include "Transmiter.h"
#include "Reciver.h"


class Wsystem
{
public:
	///////////////////////////////// Statystyki /////////////////////////////////////
	int time_sys; // czas systemowy
	double average_retransmisson; // œrednia iloœæ retransmisji
	int retransmison_ammount; // iloœæ retransmisji

	int packet_amount; // ca³kowita iloœæ pakietów w systemie 


	int bitrate; // przep³ywnoœæ na sekunde

	int average_delay; // œrednie opóŸnienie, czas pomiêdzy odebraniem ACK a wejœciem do bufora, 
	int ack_time; 

	int average_wait; // œredni czas oczekiwania pakietu, suma czasów w buforze dzielona na iloœæ pakietów, 
	int packet_into_system; // Zaimplementowaæ to w pakiecie, aby ka¿dy pakiet posiada³ osobny czas wejœcia i wyjœcia z systemu
	int pacekt_out_system;


	
	double average_packet_send_error; // œrednia pakietowa stopa blêdu
	double max_packet_send_error; // maksymalna pakietowa stopa blêdu

	const int kTransmiter_Amount = 10; //ilosc nadajnikow
	const int kReciver_Amount = 10; //ilosc odbiornikow
    std::vector<Transmiter*> Transmiters; //  wektor nadajników
	std::vector<Reciver*> Recivers; // wektor odbiornikow
	Wsystem();
	~Wsystem();
};

