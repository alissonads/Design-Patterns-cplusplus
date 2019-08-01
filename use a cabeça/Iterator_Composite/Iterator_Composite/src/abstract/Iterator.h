#pragma once

class IteratorBase
{
public:
	virtual ~IteratorBase() {}
	virtual bool hasNext() = 0;
	virtual void *next() = 0;
	virtual void remove() = 0;
};
