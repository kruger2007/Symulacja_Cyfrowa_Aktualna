#pragma once
class NetworkPacket
{
	int buffered_time; // czas przebywania w buforze
	int trans_Id; // numer identyfikacyjny nadajnika
	int reciver_Id; // numer identyfikacyjny odbiornika
	//int CGP; // czas generowania siê pakietu, 
	int packet_id;
	int inSystem; // zmienna oznaczaj¹ca czas pojawienia siê w systemie, 
	
public:
	bool ack_catch; // czy pakiet zostal dostarczony do odbiornika
	double czas_ctp; // czas ctp
	int CGP; // czas generowania siê pakietu, 
	void wyswietl_info(); // informacje o pakiecie
	NetworkPacket(int p_id,int iS);
	~NetworkPacket();
};

