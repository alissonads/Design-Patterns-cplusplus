#include "PancakeHouseMenu.h"
#include "Iterators\PancakeHouseMenuIterator.h"


PancakeHouseMenu::PancakeHouseMenu()
{
	addItem("K&B's Pancake Breakfast",
		    "Pancakes with scrambled eggs, and toast", 
		    true, 2.99);

	addItem("Reguler Pancake Breakfast",
			"Pancakes with fried eggs, sausage",
			false, 2.99);

	addItem("Blueberry Pancakes",
			"Pancakes made with fresh blueberries",
			true, 3.49);

	addItem("Waffles",
			"Waffles with your choice of blueberries or strawberries",
			true, 3.59);
}

PancakeHouseMenu::PancakeHouseMenu(const std::string name, 
								   const std::string description) :
	Menu(name, description)
{}

void PancakeHouseMenu::addItem(const std::string name, const std::string description, const bool vegetarian, const double price)
{
	MenuItem menuItem(name, description, vegetarian, price);
	menuItems.push_back(menuItem);
}

PancakeHouseMenu::Iterator *PancakeHouseMenu::createIterator() 
{
	return new PancakeHouseMenuIterator(menuItems);
}

