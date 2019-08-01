#include "DinerMenu.h"
#include "MenuItem.h"
#include "Iterators\DinerMenuIterator.h"
#include <iostream>

DinerMenu::DinerMenu() :
	numberOfItems(0),
	menuItems(new MenuItem[MAX_ITEMS])
{
	addItem("Vegetarian BLT",
		    "(Fakin) Bacon With lettuce & tomato on whole wheat", 
		    true, 2.99);

	addItem("BLT",
			"Bacon With lettuce & tomato on whole wheat",
			false, 2.99);

	addItem("Soup of the day",
			"Soup of the day, with a side of potato salad",
			false, 3.29);

	addItem("Hotdog",
			"A hot dog, with saurkraut, relish, onions, topped with cheese",
			false, 3.05);

	addItem("Steamed Veggies and Brow Rice",
			"Steamed Veggies and Brow Rice",
			true, 3.99);

	addItem("Pasta",
			"Spaghetti with Marinara sauce, and a slice of sourdough bread",
			false, 3.89);
}

DinerMenu::DinerMenu(const std::string name,
					 const std::string description) :
		Menu(name, description)
{}

DinerMenu::~DinerMenu()
{
	delete []menuItems;
}

void DinerMenu::addItem(const std::string name, const std::string description, const bool vegetarian, const double price)
{
	MenuItem menuItem(name, description, vegetarian, price);
	
	if (numberOfItems >= MAX_ITEMS) 
	{
		std::cout << "Sorry, menu is full! Cant't add item to menu\n";
		return;
	}

	menuItems[numberOfItems] = menuItem;
	numberOfItems++;
}

DinerMenu::Iterator *DinerMenu::createIterator()
{
	return new DinerMenuIterator(menuItems, MAX_ITEMS);
}

