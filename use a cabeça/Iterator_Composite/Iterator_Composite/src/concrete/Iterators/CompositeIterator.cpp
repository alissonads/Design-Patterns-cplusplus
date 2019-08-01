#include "CompositeIterator.h"
#include "..\..\Util\Util.h"
#include "..\Menu.h"
#include <stack>

CompositeIterator::CompositeIterator(Iterator *iterator):
	stack()
{
	stack.push(iterator);
}

CompositeIterator::~CompositeIterator()
{}

bool CompositeIterator::hasNext()
{
	if (stack.empty())
		return false;

	Iterator *iterator = stack.top();
	
	if (!iterator->hasNext())
	{
		stack.pop();
		return hasNext();
	}

	return true;
}

void *CompositeIterator::next()
{
	if (hasNext())
	{
		Iterator *iterator = stack.top();
		MenuComponent *component = (MenuComponent*)iterator->next();
		Menu *m = dynamic_cast<Menu*>(component);
		if (m)
		{
			stack.push(component->createIterator());
		}

		return component;
	}

	return nullptr;
}

void CompositeIterator::remove()
{
	throw UnsupportedOperationException();
}
