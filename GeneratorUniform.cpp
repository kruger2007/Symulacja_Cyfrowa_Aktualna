#include "stdafx.h"
#include "GeneratorUniform.h"
#include <cmath>

int GeneratorUniform::base_generate()	//funkcja, która generuje ziarna na podstawie generatora statycznego
{
	int out = 0;
	for (auto i = 0; i < 101; ++i) {	//bierzemy co 101 wylosowane ziarno, dla zwiêkszenia losowoœci
		h_base = floor(x_base / q_base);
		x_base = a_base*(x_base - q_base*h_base) - r_base*h_base;
		if (x_base<0) x_base = x_base + m_base;
		out = int((x_base / m_base)*(range_high_base - range_low_base) + range_low_base);
	}
	return out;
}


GeneratorUniform::GeneratorUniform(int range_low, int range_high) : a(16807), q(127773), r(2836), m(2147483647), range_low(range_low), range_high(range_high)
{
	h = 0;
	x = base_generate();
}

GeneratorUniform::~GeneratorUniform() {}

//**** PARAMETRY STATYCZNEGO GENERATORA BAZOWEGO ****
double GeneratorUniform::x_base = 118532502; //ziarno generatora bazowego - TUTAJ ZMIENIAMY SYMULACJÊ
double GeneratorUniform::h_base = 0;
int GeneratorUniform::a_base = 16807;
int GeneratorUniform::q_base = 127773;
int GeneratorUniform::r_base = 2836;
int GeneratorUniform::m_base = 2147483647;
int GeneratorUniform::range_low_base = 1;
int GeneratorUniform::range_high_base = 2147483647;
//***************************************************

double GeneratorUniform::generate()
{
	h = floor(x / q);
	x = a*(x - q*h) - r*h;
	if (x<0) x = x + m;
	return (x / m)*(range_high - range_low) + range_low;
}
