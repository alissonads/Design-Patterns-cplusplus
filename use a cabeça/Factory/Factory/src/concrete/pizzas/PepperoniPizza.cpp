#include "PepperoniPizza.h"
#include "..\..\abstract\PizzaIngredientFactory.h"
#include "..\ingredients\Concrete_Ingredients.h"
#include <iostream>


PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *_ingredientFactory) :
	ingredientFactory(_ingredientFactory)
{
}

PepperoniPizza::~PepperoniPizza()
{
	if (ingredientFactory)
		delete ingredientFactory;
	ingredientFactory = nullptr;
}

void PepperoniPizza::Prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
	pepperoni = ingredientFactory->CreatePepperoni();

	std::cout << "Dough: " << dough->ToString() << std::endl
			  << "Sauce: " << sauce->ToString() << std::endl
			  << "Cheese: " << cheese->ToString() << std::endl
			  << "Pepperoni: " << pepperoni->ToString() << std::endl;

}

