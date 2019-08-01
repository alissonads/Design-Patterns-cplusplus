#pragma once

#include "Menu.h"
#include <unordered_map>
#include <string>

class MenuItem;

class CafeMenu : public Menu
{
private:
	typedef class IteratorBase Iterator;
	typedef std::unordered_map<std::string, MenuItem> Hashtable;

	Hashtable menuItems;

public:
	CafeMenu();
	CafeMenu(const std::string name,
			 const std::string description);
	~CafeMenu();

	void addItem(const std::string name,
				 const std::string description,
				 const bool vegetarian,
				 const double price);

	Iterator *createIterator();
};
