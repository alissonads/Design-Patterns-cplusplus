#include "Soy.h"

Soy::Soy(Beverage *_beverage) :
	CondimentDecorator(),
	beverage(_beverage)
{}

Soy::~Soy()
{
	if (beverage)
		delete beverage;
}

std::string Soy::GetDescription() const
{
	return beverage->GetDescription() + ", soy milk";
}

float Soy::Cost() const
{
	if (GetSize() == SizeBeverage::GRANDE)
	{
		return 0.15f + beverage->Cost();
	}
	else if (GetSize() == SizeBeverage::VENTI)
	{
		return 0.20f + beverage->Cost();
	}

	return 0.10f + beverage->Cost();
}
