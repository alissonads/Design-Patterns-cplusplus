#include "VeggiePizza.h"
#include "..\..\abstract\PizzaIngredientFactory.h"
#include <iostream>
#include "..\..\abstract\Ingredients.h"

VeggiePizza::VeggiePizza(PizzaIngredientFactory *_ingredientFactory) :
	ingredientFactory(_ingredientFactory)
{
}

VeggiePizza::~VeggiePizza()
{
	if (ingredientFactory)
		delete ingredientFactory;
	ingredientFactory = nullptr;
}

void VeggiePizza::Prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
	veggies = ingredientFactory->CreateVeggies();

	std::cout << "Dough: " << dough->ToString() << std::endl
			  << "Sauce: " << sauce->ToString() << std::endl
			  << "Cheese: " << cheese->ToString() << std::endl;

	std::cout << "Veggies: ";

	for (auto i : veggies)
		std::cout << i->ToString() << std::endl;
}
