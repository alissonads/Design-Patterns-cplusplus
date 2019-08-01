#include "Expresso.h"

Expresso::Expresso() :
	Beverage("Expresso")
{}

Expresso::~Expresso()
{
}

float Expresso::Cost() const
{
	return 1.99f;
}
