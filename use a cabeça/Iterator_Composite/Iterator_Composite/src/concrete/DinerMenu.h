#pragma once

#include <string>
#include "Menu.h"

#define MAX_ITEMS 6

class MenuItem;

class DinerMenu : public Menu
{
private:
	typedef class IteratorBase Iterator;

private:
	int numberOfItems;
	MenuItem *menuItems;

public:
	DinerMenu();
	DinerMenu(const std::string name,
			  const std::string description);
	~DinerMenu();

	void addItem(const std::string name,
				 const std::string description,
				 const bool vegetarian,
				 const double price);
	
	Iterator *createIterator();
};
