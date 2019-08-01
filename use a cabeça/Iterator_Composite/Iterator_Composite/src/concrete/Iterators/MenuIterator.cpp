#include "MenuIterator.h"
#include "..\..\abstract\MenuComponent.h"
#include "..\..\Util\Util.h"

MenuIterator::MenuIterator(std::vector<MenuComponent*> &_items) :
	items(_items),
	itr(_items.begin())
{}

bool MenuIterator::hasNext()
{
	return (itr != items.end());
}

void *MenuIterator::next()
{
	MenuComponent *item = *itr;
	itr++;

	return item;
}

void MenuIterator::remove()
{
	throw UnsupportedOperationException();
}
