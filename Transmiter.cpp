#include "stdafx.h"
#include "Transmiter.h"
#include "NewPacket.h"


Transmiter::Transmiter(int id_trans)
{
	CGPk = 0;
	CTPk = 0;
	CRP = 0;
//	processed = nullptr;
	R = 0;
	id = id_trans;

	CTP_gen = new GeneratorUniform(1, 10 + 1);
	CPG_gen = new GeneratorExpotentional(LAMBDA);

}


Transmiter::~Transmiter()
{
}
