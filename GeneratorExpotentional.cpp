#include "stdafx.h"
#include "GeneratorExpotentional.h"
#include <cmath>


GeneratorExpotentional::GeneratorExpotentional(const double lambdaa)
{
	uniform = new GeneratorUniform(0,1);
	lambda = lambdaa;
}

GeneratorExpotentional::~GeneratorExpotentional()
{
	delete uniform;

}

double GeneratorExpotentional::execute() const
{
	return -log(uniform->generate()) / lambda;
}
