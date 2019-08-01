#include "CaffeineBeverage.h"
#include <iostream>

void const CaffeineBeverage::PrepareRecipe() const
{
	BoilWater();
	Brew();
	PourInCup();

	//gancho
	if(CustomerWantsCondiments())
		AddCondiments();
}

void CaffeineBeverage::BoilWater() const
{
	std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::PourInCup() const
{
	std::cout << "Pouring into cup" << std::endl;
}

bool CaffeineBeverage::CustomerWantsCondiments() const
{
	return true;
}
