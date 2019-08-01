#include "Decaf.h"

Decaf::Decaf() : Beverage("Decaf")
{
}

Decaf::~Decaf()
{
}

float Decaf::Cost() const
{
	return 1.05f;
}
