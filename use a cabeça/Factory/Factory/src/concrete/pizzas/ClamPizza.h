#pragma once

#include "..\..\abstract\Pizza.h"

class PizzaIngredientFactory;

class ClamPizza : public Pizza
{
private:
	PizzaIngredientFactory *ingredientFactory;

public:
	ClamPizza(PizzaIngredientFactory *_ingredientFactory);
	~ClamPizza();

	virtual void Prepare();
};

