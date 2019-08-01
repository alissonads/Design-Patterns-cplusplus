#include "Pizza.h"
#include "Ingredients.h"
#include <iostream>

Pizza::~Pizza()
{
	if(dough)
		delete dough;
	if (sauce)
		delete sauce;
	if (cheese)
		delete cheese;
	if (pepperoni)
		 pepperoni;
	if (clam)
		delete clam;

	for (auto i : veggies)
	{
		delete i;
	}

	veggies.clear();
}

void Pizza::Bake()
{
	std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::Cut()
{
	std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::Box()
{
	std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
