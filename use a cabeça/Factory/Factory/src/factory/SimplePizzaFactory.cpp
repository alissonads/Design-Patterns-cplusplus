#include "SimplePizzaFactory.h"
#include "..\concrete\concrete_pizzas.h"

Pizza *SimplePizzaFactory::CreatePizzaPtr(const std::string type)
{
	Pizza *pizza = nullptr;

	if (type == "cheese")
	{
		pizza = new CheesePizza();
	}
	else if (type == "pepperoni")
	{
		pizza = new PepperoniPizza();
	}
	else if (type == "clam")
	{
		pizza = new ClamPizza();
	}
	else if (type == "veggie")
	{
		pizza = new VeggiePizza();
	}

	return pizza;
}
