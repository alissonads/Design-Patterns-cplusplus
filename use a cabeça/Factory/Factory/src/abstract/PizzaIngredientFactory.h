#pragma once

#include <vector>

class Clam;
class Cheese;
class Dough;
class Pepperoni;
class Sauce;
class Veggies;

class PizzaIngredientFactory
{
public:
	virtual ~PizzaIngredientFactory() {}
	virtual Dough *CreateDough() = 0;
	virtual Sauce *CreateSauce() = 0;
	virtual Cheese *CreateCheese() = 0;
	virtual std::vector<Veggies*> CreateVeggies() = 0;
	virtual Pepperoni *CreatePepperoni() = 0;
	virtual Clam *CreateClam() = 0;
};

