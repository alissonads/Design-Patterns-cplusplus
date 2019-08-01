#include "PizzaStore.h"
#include "Pizza.h"
#include <iostream>

PizzaStore::PizzaStore(const SimplePizzaFactory &_factory) :
	factory(_factory)
{}

PizzaStore::~PizzaStore()
{}

Pizza *PizzaStore::OrderPizza(const std::string type)
{
	//Pizza *pizza = factory.CreatePizzaPtr(type);
	Pizza *pizza = CreatePizza(type);

	pizza->Prepare();
	std::cout << std::endl;
	pizza->Bake();
	pizza->Cut();
	pizza->Box();

	return pizza;
}
