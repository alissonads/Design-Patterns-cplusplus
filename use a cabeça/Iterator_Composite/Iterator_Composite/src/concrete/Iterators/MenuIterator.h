#pragma once

#include "..\..\abstract\Iterator.h"
#include <vector>

class MenuComponent;

class MenuIterator : public IteratorBase
{
private:
	typedef std::vector<MenuComponent*>::iterator vIterator;
	typedef IteratorBase Iterator;

	std::vector<MenuComponent*> &items;
	vIterator itr;

public:
	MenuIterator(std::vector<MenuComponent*> &_items);

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};
