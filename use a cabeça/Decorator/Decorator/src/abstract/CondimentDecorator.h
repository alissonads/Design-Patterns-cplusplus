#pragma once

#include "Beverage.h"
#include <memory>

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator() : Beverage(){}
	virtual ~CondimentDecorator() {  }

	virtual std::string GetDescription() const = 0;
	virtual float Cost() const = 0;
};
