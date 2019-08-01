#include "Whip.h"

Whip::Whip(Beverage *_beverage) :
	CondimentDecorator(),
	beverage(_beverage)
{}

Whip::~Whip()
{
	if (beverage)
		delete beverage;
}

std::string Whip::GetDescription() const
{
	return beverage->GetDescription() + ", Whip";
}

float Whip::Cost() const
{
	return 0.10f + beverage->Cost();
}
