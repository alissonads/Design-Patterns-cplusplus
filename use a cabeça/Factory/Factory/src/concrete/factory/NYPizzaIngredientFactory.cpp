#include "NYPizzaIngredientFactory.h"
#include "..\ingredients\Concrete_Ingredients.h"

Dough *NYPizzaIngredientFactory::CreateDough()
{
	return new ThinCrustDough();
}

Sauce *NYPizzaIngredientFactory::CreateSauce()
{
	return new MarinaraSauce();
}

Cheese *NYPizzaIngredientFactory::CreateCheese()
{
	return new ReggianoCheese();
}

std::vector<Veggies*> NYPizzaIngredientFactory::CreateVeggies()
{
	return { new Garlic(), new Onion(), new Mushroom(), new RedPepper() };
}

Pepperoni *NYPizzaIngredientFactory::CreatePepperoni()
{
	return new SlicedPepperoni();
}

Clam *NYPizzaIngredientFactory::CreateClam()
{
	return new FreshClams();
}
