#pragma once

#include "..\abstract\MenuComponent.h"

class Waitress
{
private:
	MenuComponent *allMenus;

public:
	Waitress(MenuComponent *_allMenus);

	void printMenu() const;

	void printVegetariaMenu();
};
