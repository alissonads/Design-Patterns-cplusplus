#include "Menu.h"
#include "..\abstract\Iterator.h"
#include "Iterators\MenuIterator.h"
#include "Iterators\CompositeIterator.h"
#include <iostream>

Menu::Menu() :
	menuComponents(),
	name(""),
	description(""),
	itr(nullptr)
{}

Menu::Menu(const std::string _name,
	       const std::string _description) :
	menuComponents(),
	name(_name),
	description(_description),
	itr(nullptr)
{}

Menu::~Menu()
{
	menuComponents.clear();
	if (itr)
	{
		delete itr;
		itr = nullptr;
	}
}

void Menu::add(MenuComponent &menuComponent)
{
	menuComponents.push_back(&menuComponent);
}

void Menu::remove(const MenuComponent &menuComponent)
{
	int index = 0;
	for (auto i : menuComponents)
	{
		if (i == &menuComponent)
			return remove(index);
		index++;
	}

	//remove(index);
}

void Menu::remove(const int i)
{
	if(i > 0)
		menuComponents.erase(menuComponents.begin() + i);
}

MenuComponent *Menu::getChild(const int i)
{
	return menuComponents[i];
}

std::string Menu::getName() const
{
	return name;
}

std::string Menu::getDescription() const
{
	return description;
}

void Menu::print() const
{
	std::cout << "\n" << getName();
	std::cout << "\n" << getDescription() << std::endl;
	std::cout << "----------------------" << std::endl;

	for (auto i : menuComponents)
		i->print();
}

Menu::Iterator *Menu::createIterator()
{
	if (itr)
		delete itr;
	itr = new MenuIterator(menuComponents);
	return new CompositeIterator(itr);
}
