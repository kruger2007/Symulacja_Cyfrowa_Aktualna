#include "stdafx.h"
#include "Wsystem.h"


Wsystem::Wsystem()
{
	average_retransmisson = 0;
	bitrate = 0;
	average_delay = 0;
	average_wait = 0;
	average_packet_send_error = 0;
	max_packet_send_error = 0;
	time_sys = 0;

	for (int i = 0; i<kTransmiter_Amount; ++i) // tworzenie wektora nadajnikow
	{
				Transmiters.push_back(new Transmiter(i));
	}
	for (int i = 0; i<kReciver_Amount; ++i) // tworzenie wektora odbiornikow
	{
		Recivers.push_back(new Reciver(i));
	}

}


Wsystem::~Wsystem()
{
}
