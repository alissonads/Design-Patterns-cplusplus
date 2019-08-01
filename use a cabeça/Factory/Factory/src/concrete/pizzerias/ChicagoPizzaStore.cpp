#include "ChicagoPizzaStore.h"
#include "..\factory\ChicagoPizzaIngredientFactory.h"
#include "..\pizzas\Pizzas.h"

ChicagoPizzaStore::ChicagoPizzaStore() :
	PizzaStore(SimplePizzaFactory())
{
}

ChicagoPizzaStore::ChicagoPizzaStore(const SimplePizzaFactory & _factory) :
	PizzaStore(_factory)
{}

Pizza *ChicagoPizzaStore::CreatePizza(const std::string & type)
{
	Pizza *pizza = nullptr;
	ChicagoPizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();

	if (type == "cheese")
	{
		pizza = new CheesePizza(ingredientFactory);
		pizza->SetName("Cheese Pizza (Chicago)");
	}
	else if (type == "pepperoni")
	{
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->SetName("Pepperoni Pizza (Chicago)");
	}
	else if (type == "clam")
	{
		pizza = new ClamPizza(ingredientFactory);
		pizza->SetName("Clam Pizza (Chicago)");
	}
	else if (type == "veggie")
	{
		pizza = new VeggiePizza(ingredientFactory);
		pizza->SetName("Veggie Pizza (Chicago)");
	}

	return pizza;
}
