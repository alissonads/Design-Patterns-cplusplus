#include <iostream>
#include "concrete\pizzerias\ChicagoPizzaStore.h"
#include "concrete\pizzerias\NYPizzaStore.h"
#include "abstract\Pizza.h"
#include <ctime>
#include <thread>

int main(int argc, char **argv)
{
	ChicagoPizzaStore chicago;
	NYPizzaStore ny;

	std::string type = "veggie";
	std::cout << "Ethan ordered a " << type + " NY\n";
	Pizza *pizza = ny.OrderPizza(type);
	delete pizza;

	type = "cheese";
	std::cout << "\nJoel ordered a " << type + " Chicago\n";
	pizza = chicago.OrderPizza(type);
	delete pizza;

	system("pause");
	return 0;
}