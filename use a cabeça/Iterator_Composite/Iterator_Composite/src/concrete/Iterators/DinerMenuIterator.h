#pragma once

#include "..\..\abstract\Iterator.h"

class MenuItem;

class DinerMenuIterator : public IteratorBase
{
private:
	MenuItem *items;
	int position;
	int length;

public:
	DinerMenuIterator(MenuItem *_items, 
					  const int _length);

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};
