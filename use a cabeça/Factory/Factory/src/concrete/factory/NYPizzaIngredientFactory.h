#pragma once

#include "..\..\abstract\PizzaIngredientFactory.h"

class NYPizzaIngredientFactory :
	public PizzaIngredientFactory
{
public:
	virtual Dough *CreateDough();
	virtual Sauce *CreateSauce();
	virtual Cheese *CreateCheese();
	virtual std::vector<Veggies*> CreateVeggies();
	virtual Pepperoni *CreatePepperoni();
	virtual Clam *CreateClam();
};
