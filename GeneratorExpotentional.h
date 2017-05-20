#pragma once
#include "GeneratorUniform.h"

class GeneratorExpotentional
{
	GeneratorUniform *uniform;
	double lambda;
public:
	GeneratorExpotentional(const double lambda);
	~GeneratorExpotentional();
	double execute() const;
};

