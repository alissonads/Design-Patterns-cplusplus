#include "ClamPizza.h"
#include "..\..\abstract\PizzaIngredientFactory.h"
#include "..\ingredients\Concrete_Ingredients.h"
#include <iostream>

ClamPizza::ClamPizza(PizzaIngredientFactory *_ingredientFactory) :
	ingredientFactory(_ingredientFactory)
{
}

ClamPizza::~ClamPizza()
{
	if (ingredientFactory)
		delete ingredientFactory;
	ingredientFactory = nullptr;
}

void ClamPizza::Prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = ingredientFactory->CreateDough();
	sauce = ingredientFactory->CreateSauce();
	cheese = ingredientFactory->CreateCheese();
	clam = ingredientFactory->CreateClam();

	std::cout << "Dough: " << dough->ToString() << std::endl
			  << "Sauce: " << sauce->ToString() << std::endl
			  << "Cheese: " << cheese->ToString() << std::endl
			  << "Clam: " << clam->ToString() << std::endl;
}