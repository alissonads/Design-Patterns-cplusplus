#include "ChicagoStyleCheesePizza.h"
#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() :
	Pizza()
{
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra thick Crust Dough";
	sauce = "Plum Tomato Sauce";

	toppings.push_back("Shredded Mozzarella Cheese");

}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{}

void ChicagoStyleCheesePizza::Cut()
{
	std::cout << "Cutting the pizza into square slices" << std::endl;
}
