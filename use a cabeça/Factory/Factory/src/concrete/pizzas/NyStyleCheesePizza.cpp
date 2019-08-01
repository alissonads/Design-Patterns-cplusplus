#include "NyStyleCheesePizza.h"

NyStyleCheesePizza::NyStyleCheesePizza() :
	Pizza()
{
	name = "NY Style sauce and Cheese Pizza";
	dough = "Thin Crust Dough";
	sauce = "Marina Sauce";

	toppings.push_back("Grated Reggiano Cheese");
}

NyStyleCheesePizza::~NyStyleCheesePizza()
{}
