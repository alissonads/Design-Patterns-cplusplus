#include "NYPizzaStore.h"
#include "..\factory\NYPizzaIngredientFactory.h"
#include "..\pizzas\Pizzas.h"

NYPizzaStore::NYPizzaStore() :
	PizzaStore(SimplePizzaFactory())
{}

NYPizzaStore::NYPizzaStore(const SimplePizzaFactory & _factory) :
	PizzaStore(_factory)
{}

Pizza *NYPizzaStore::CreatePizza(const std::string & type)
{
	Pizza *pizza = nullptr;
	NYPizzaIngredientFactory *ingredientFactory = new NYPizzaIngredientFactory();

	if (type == "cheese")
	{
		pizza = new CheesePizza(ingredientFactory);
		pizza->SetName("Cheese Pizza (NY)");
	}
	else if (type == "pepperoni")
	{
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->SetName("Pepperoni Pizza (NY)");
	}
	else if (type == "clam")
	{
		pizza = new ClamPizza(ingredientFactory);
		pizza->SetName("Clam Pizza (NY)");
	}
	else if (type == "veggie")
	{
		pizza = new VeggiePizza(ingredientFactory);
		pizza->SetName("Veggie Pizza (NY)");
	}

	return pizza;
}