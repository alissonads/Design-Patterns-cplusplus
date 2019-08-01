#pragma once

#include "..\..\abstract\AbstractDuckFactory.h"

class CountingDuckFactory : public AbstractDuckFactory
{
public:
	virtual Quackable *createMallardDuck();
	virtual Quackable *createReadheadDuck();
	virtual Quackable *createDuckCall();
	virtual Quackable *createRubberDuck();
};