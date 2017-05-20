#pragma once
class GeneratorUniform
{
	double x, h;
	const int a, q, r, m, range_low, range_high;
	static double x_base, h_base;
	static int a_base, q_base, r_base, m_base, range_low_base, range_high_base;
	static int base_generate();
public:
	GeneratorUniform(int range_low, int range_high);
	~GeneratorUniform();
	double generate();
};

