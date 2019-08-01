#include "CafeMenuIterator.h"
#include "..\MenuItem.h"

CafeMenuIterator::CafeMenuIterator(Hashtable &_menuItems) :
	menuItems(_menuItems),
	itr(_menuItems.begin())
{}

bool CafeMenuIterator::hasNext()
{
	return itr != menuItems.end();
}

void *CafeMenuIterator::next()
{
	MenuItem *item = &itr->second;
	itr++;

	return item;
}

void CafeMenuIterator::remove()
{
	if (itr == menuItems.end())
		throw std::exception("You can't remove an item until you've done at least one next().");
	else
		menuItems.erase(itr);
}
