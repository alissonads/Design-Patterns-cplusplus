#include "Coffee.h"
#include <iostream>

void Coffee::Brew() const
{
	std::cout << "Dripping Coffe through filter" << std::endl;
}

void Coffee::AddCondiments() const
{
	std::cout << "Adding Sugar and Milk" << std::endl;
}
