#include "ChicagoPizzaIngredientFactory.h"
#include "..\ingredients\Concrete_Ingredients.h"

Dough *ChicagoPizzaIngredientFactory::CreateDough()
{
	return new ThickCrustDough();
}

Sauce *ChicagoPizzaIngredientFactory::CreateSauce()
{
	return new PlumTomatoSauce();
}

Cheese *ChicagoPizzaIngredientFactory::CreateCheese()
{
	return new MozzarellaCheese();
}

std::vector<Veggies*> ChicagoPizzaIngredientFactory::CreateVeggies()
{
	return { new BlackOlives(), new Spinach(), new Eggplant() };
}

Pepperoni *ChicagoPizzaIngredientFactory::CreatePepperoni()
{
	return new SlicedPepperoni();
}

Clam *ChicagoPizzaIngredientFactory::CreateClam()
{
	return new FrozenClams();
}
