#pragma once

#include "..\..\abstract\Observer.h"

class Quackologist : public Observer
{
public:
	virtual void update(QuackObservable *duck);
};
