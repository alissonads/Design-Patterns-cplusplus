#pragma once

#include "..\..\abstract\Pizza.h"

class PizzaIngredientFactory;

class CheesePizza : public Pizza
{
private:
	PizzaIngredientFactory *ingredientFactory;

public:
	CheesePizza(PizzaIngredientFactory *_ingredientFactory);
	~CheesePizza();

	virtual void Prepare();
};
