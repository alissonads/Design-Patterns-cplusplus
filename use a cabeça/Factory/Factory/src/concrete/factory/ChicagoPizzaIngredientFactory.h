#pragma once

#include "..\..\abstract\PizzaIngredientFactory.h"

class ChicagoPizzaIngredientFactory :
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