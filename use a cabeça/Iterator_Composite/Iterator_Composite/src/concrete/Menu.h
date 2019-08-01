#pragma once

#include "..\abstract\MenuComponent.h"
#include <vector>

class IteratorBase;

/*Composite(Composto)*/
class Menu : public MenuComponent
{
private:
	std::vector<MenuComponent*> menuComponents;
	std::string name;
	std::string description;
	IteratorBase *itr;

public:
	Menu();
	Menu(const std::string name, const std::string _description);
	~Menu();

	virtual void add(MenuComponent &menuComponent);
	virtual void remove(const MenuComponent &menuComponent);
	virtual void remove(const int i);
	virtual MenuComponent *getChild(const int i);
	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual void print() const;
	virtual Iterator *createIterator();
};
