#pragma once

#include "..\..\abstract\Iterator.h"
#include <unordered_map>

class MenuItem;

class CafeMenuIterator : public IteratorBase
{
private:
	typedef class IteratorBase Iterator;
	typedef std::unordered_map<std::string, MenuItem> Hashtable;

	Hashtable &menuItems;
	Hashtable::iterator itr;

public:
	CafeMenuIterator(Hashtable &_menuItems);

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};

