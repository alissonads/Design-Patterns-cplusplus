#pragma once

#include "..\..\abstract\CondimentDecorator.h"

class Milk : public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Milk(Beverage *_beverage);
	~Milk();

	virtual std::string GetDescription() const;
	virtual float Cost() const;
};
