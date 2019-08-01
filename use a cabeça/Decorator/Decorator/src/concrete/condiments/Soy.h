#pragma once

#include "..\..\abstract\CondimentDecorator.h"

class Soy : public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Soy(Beverage *_beverage);
	~Soy();

	virtual std::string GetDescription() const;
	virtual float Cost() const;
};

