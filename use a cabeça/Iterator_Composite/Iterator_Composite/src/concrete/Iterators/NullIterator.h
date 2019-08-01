#pragma once

#include "..\..\abstract\Iterator.h"

class MenuItem;

class NullIterator : public IteratorBase
{
public:
	NullIterator();

	virtual bool hasNext();
	virtual void *next();
	virtual void remove();
};
