#include "MenuItem.h"
#include "Iterators\NullIterator.h"
#include <iostream>

MenuItem::MenuItem() :
	name(""),
	description(""),
	vegetarian(false),
	price(0.00)
{}

MenuItem::MenuItem(const std::string &_name,
				   const std::string &_description, 
				   const bool _vegetarian, 
				   const double _price) :
	name(_name), description(_description),
	vegetarian(_vegetarian), price(_price)
{}

std::string MenuItem::getName() const
{
	return name;
}

std::string MenuItem::getDescription() const
{
	return description;
}

bool MenuItem::isVegetarian() const
{
	return vegetarian;
}

double MenuItem::getPrice() const
{
	return price;
}

void MenuItem::print() const
{
	std::cout << " " << getName();

	if (isVegetarian())
	{
		std::cout << "(V)";
	}

	std::cout << ", " << getPrice() << std::endl;
	std::cout << "      --  " << getDescription() << std::endl;
}

MenuItem::Iterator *MenuItem::createIterator()
{
	return new NullIterator();
}
