#include "PancakeHouseMenuIterator.h"
#include "..\MenuItem.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem> &_items) :
	items(_items),
	position(0)
{}

bool PancakeHouseMenuIterator::hasNext()
{
	return (position >= 0 && position < 
			(int)items.size() &&
		    items[position].getName() != "");
}

void *PancakeHouseMenuIterator::next()
{
	return &items[position++];
}

void PancakeHouseMenuIterator::remove()
{
}
