#pragma once

#include "..\..\abstract\Iterator.h"
#include <stack>

class MenuComponent;

class CompositeIterator : public IteratorBase
{
private:
	typedef IteratorBase Iterator;

	std::stack<Iterator*> stack;

public:
	CompositeIterator(Iterator *iterator);
	~CompositeIterator();

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};