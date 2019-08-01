#include "Milk.h"

Milk::Milk(Beverage *_beverage) :
	CondimentDecorator(),
	beverage(_beverage)
{}

Milk::~Milk()
{
	if (beverage)
		delete beverage;
}

std::string Milk::GetDescription() const
{
	return beverage->GetDescription() + ", Milk";
}

float Milk::Cost() const
{
	return 0.10f + beverage->Cost();
}
