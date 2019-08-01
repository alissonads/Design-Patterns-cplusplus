#pragma once

#include "..\..\abstract\Pizza.h"

class PizzaIngredientFactory;

class PepperoniPizza : public Pizza
{
private:
	PizzaIngredientFactory *ingredientFactory;

public:
	PepperoniPizza(PizzaIngredientFactory *_ingredientFactory);
	~PepperoniPizza();

	virtual void Prepare();
};