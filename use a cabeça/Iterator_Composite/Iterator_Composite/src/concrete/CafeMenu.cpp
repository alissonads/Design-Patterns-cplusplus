#include "CafeMenu.h"
#include "MenuItem.h"
#include "Iterators\CafeMenuIterator.h"

CafeMenu::CafeMenu() :
	menuItems()
{
	addItem("Veggie Burger and Air Fries",
			"Veggies burger on a whole wheat bun, lettuce, tomato, and fries",
			true, 3.99);

	addItem("Soup of the day",
			"A cup of soup of the day, with a side salad",
			false, 3.69);

	addItem("Burrito",
			"A large burrito, with whole pinto beans, salsa, guacamole",
			true, 4.29);
}

CafeMenu::CafeMenu(const std::string name,
				   const std::string description) :
		Menu(name, description)
{}

CafeMenu::~CafeMenu()
{
	menuItems.clear();
}

void CafeMenu::addItem(const std::string name, 
					   const std::string description, 
					   const bool vegetarian, 
					   const double price)
{
	MenuItem menuItem = MenuItem(name, description, vegetarian, price);
	menuItems[menuItem.getName()] = menuItem;
}

CafeMenu::Iterator *CafeMenu::createIterator()
{
	return new CafeMenuIterator(menuItems);
}
