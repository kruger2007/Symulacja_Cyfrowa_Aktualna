// Symulacja_Cyfrowa_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <cstdio>
#include <fstream>
//#include "NewPacket.h"
#include <iostream>
#include "Wsystem.h"
#include "NewPacket.h"


int SIM_TIME = 100;         // dlugosc symulacji
int START_PHASE = 0;
auto MODE = 1;            //tryb krokowy 1  lub ci¹g³y 0  

void read_param()        // zczytywanie parametów symulacji
{
	std::cout << "Podaj dlugosc symulacji w sekundach" << std::endl;
	std::cin >> SIM_TIME;
	SIM_TIME *= 1000;   // zmiana na 1 ms 
	std::cout << "Podaj czas fazy poczatkowej " << std::endl;
	std::cin >> START_PHASE;
	do {
		std::cout << "Wybierz tryb 0 tryb normalny, 1 tryb krokowy" << std::endl;
		std::cin >> MODE;
	} while ((MODE != 1) && (MODE !=0));
}

int main()

{
	srand(time(nullptr));
	remove("Symulation.txt");
	auto time = 0;               // zmienna czasowa w systemie 
	int ilosc_pakietow = 0;
	int iteracja = 0;
	const double CSC = 0.001;
	auto event_trig = 0;        //flaga wyst¹pienia zdarzenia


	

	
	
	std::fstream file("Symulation.txt", std::ios::app);
	if(file.good())
	{
		file << "================================== Symulation START ==================================" << std::endl;
		file.flush();
	}
	                                    //G³ówna pêtla symulacyjna//
	///////////////////////Inicjalizacja ///////////////////////
	//	read_param();                  // zczytywanie parametrów symulacji (czas symulacji, d³. fazy pocz¹tkowej, tryb krokowy lub ci¹g³y)
		Wsystem *system_bezprzewodowy = new Wsystem(); // tworzymy system bezprzewodowy
		                               //Utworzenie  zdarzeñ czasowych i warunkowych///

		NewPacket *time_event_new_packet = new NewPacket(system_bezprzewodowy,LAMBDA); // Zd. czasowe: pojawienie siê pakietu
	
		                               //event_list.push_back(new Event(Ts.getSystemTime()));
		time_event_new_packet->Execute(1); // wymuszenie pojawienia sie na pierwszym nadajniku pakietu 

		while(time < SIM_TIME) {
			system_bezprzewodowy->time_sys = time; // przekazujemy czas symulacji do klasy WSystem
			if (event_trig == 1) { event_trig = 0; } //zerujemy flagê 
		// Przegl¹damy zdarzenia czasowe
				//sprawdzamy pojawienie siê nowego pakietu w ka¿dym z 10 odbiorników
			for (auto i = 1; i <= 10; ++i)
			{
				if (time_event_new_packet->time[i] == time)
				{
					event_trig = 1;
					time_event_new_packet->Execute(i);
				}
			}

//			system_bezprzewodowy->Packets.push_back(system_bezprzewodowy->nowy_pakiet->Execute()); // pojawienie sie nowego pakietu.
		// Przegl¹damy zdarzenia warunkowe
		
			 ilosc_pakietow++;

			if(MODE==1)  { system("pause"); }
			if(event_trig == 0 )
			{
				time += 1; // 1 ms kolejna szczelina czasowa
				std::cout << "Czas symulacji " << time << std::endl;
			}
			}
			
			
	delete system_bezprzewodowy;
	delete time_event_new_packet;
	system("pause");
    return 0;
}

