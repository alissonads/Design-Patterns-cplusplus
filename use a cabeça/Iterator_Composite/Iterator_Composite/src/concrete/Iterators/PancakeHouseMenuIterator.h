#pragma once

#include "..\..\abstract\Iterator.h"
#include <vector>

class MenuItem;

class PancakeHouseMenuIterator : public IteratorBase
{
private:
	std::vector<MenuItem> &items;
	int position;

public:
	PancakeHouseMenuIterator(std::vector<MenuItem> &_items);

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};