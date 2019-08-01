#include "DinerMenuIterator.h"
#include "..\MenuItem.h"
#include <exception>

DinerMenuIterator::DinerMenuIterator(MenuItem *_items, 
									 const int _length) :
	items(_items),
	position(0),
	length(_length)
{}

bool DinerMenuIterator::hasNext()
{
	return (position >= 0 && 
			position < length && 
			items[position].getName() != "");
}

void *DinerMenuIterator::next()
{
	return &items[position++];
}

void DinerMenuIterator::remove()
{
	if (position <= 0)
	{
		throw std::exception("You can't remove an item until you've done at least one next().");
	}
	if (position - 1 >= 0 &&
		items[position-1].getName() != "")
	{
		for (int i = position - 1; i < length - 1; i++)
		{
			items[i] = items[i + 1];
		}

		items[length - 1] = MenuItem();

	}
}
