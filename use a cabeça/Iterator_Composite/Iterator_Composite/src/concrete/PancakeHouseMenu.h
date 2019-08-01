#pragma once

#include <vector>
#include <string>

#include "Menu.h"

#include "MenuItem.h"

class PancakeHouseMenu : public Menu
{
private:
	typedef class IteratorBase Iterator;

private:
	std::vector<MenuItem> menuItems;

public:
	PancakeHouseMenu();
	PancakeHouseMenu(const std::string name,
					 const std::string description);
	void addItem(const std::string name,
				 const std::string description,
				 const bool vegetarian,
				 const double price);

	Iterator *createIterator();
};
