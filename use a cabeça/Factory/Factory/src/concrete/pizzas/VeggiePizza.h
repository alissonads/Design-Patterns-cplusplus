#pragma once

#include "..\..\abstract\Pizza.h"

class PizzaIngredientFactory;

class VeggiePizza : public Pizza
{
private:
	PizzaIngredientFactory *ingredientFactory;

public:
	VeggiePizza(PizzaIngredientFactory *_ingredientFactory);
	~VeggiePizza();

	virtual void Prepare();
};
