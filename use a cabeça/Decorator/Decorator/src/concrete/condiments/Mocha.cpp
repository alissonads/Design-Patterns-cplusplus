#include "Mocha.h"

Mocha::Mocha(Beverage *_beverage) :
	CondimentDecorator(),
	beverage(_beverage)
{}

Mocha::~Mocha()
{
	if (beverage)
		delete beverage;
}

std::string Mocha::GetDescription() const
{
	return beverage->GetDescription() + ", Mocha";
}

float Mocha::Cost() const
{
	return 0.20f + beverage->Cost();
}
