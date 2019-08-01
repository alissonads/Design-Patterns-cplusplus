#include "Waitress.h"
#include "..\abstract\Iterator.h"
#include "..\Util\Util.h"
#include <iostream>

Waitress::Waitress(MenuComponent *_allMenus) :
	allMenus(_allMenus)
{}

void Waitress::printMenu() const
{
	allMenus->print();
}

void Waitress::printVegetariaMenu()
{
	auto *iterator = allMenus->createIterator();

	std::cout << "\nVEGETARIAN MENU\n-----------------" << std::endl;

	while (iterator->hasNext())
	{
		auto menuComponent = (MenuComponent*)iterator->next();

		try
		{
			if (menuComponent->isVegetarian())
				menuComponent->print();
		}
		catch (UnsupportedOperationException &e)
		{}
	}

	delete iterator;
}
