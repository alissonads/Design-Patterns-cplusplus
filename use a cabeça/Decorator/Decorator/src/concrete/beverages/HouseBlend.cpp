#include "HouseBlend.h"

HouseBlend::HouseBlend() :
	Beverage("House Blend Coffee")
{}

HouseBlend::~HouseBlend()
{}

float HouseBlend::Cost() const
{
	return 0.89f;
}
