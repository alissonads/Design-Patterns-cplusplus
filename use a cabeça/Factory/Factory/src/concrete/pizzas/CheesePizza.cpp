#include "CheesePizza.h"
#include "..\..\abstract\PizzaIngredientFactory.h"
#include "..\ingredients\Concrete_Ingredients.h"
#include <iostream>

CheesePizza::CheesePizza(PizzaIngredientFactory *_ingredientFactory) :
	ingredientFactory(_ingredientFactory)
{}

CheesePizza::~CheesePizza()
{
	if (ingredientFactory)
		delete ingredientFactory;
	ingredientFactory = nullptr;
}

void CheesePizza::Prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();

	std::cout << "Dough: " << dough->ToString() << std::endl
			  << "Sauce: " << sauce->ToString() << std::endl
			  << "Cheese: " << cheese->ToString() << std::endl;
}
