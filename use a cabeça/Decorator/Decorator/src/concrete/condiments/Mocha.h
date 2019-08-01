#pragma once

#include "..\..\abstract\CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Mocha(Beverage *_beverage);
	~Mocha();

	virtual std::string GetDescription() const;
	virtual float Cost() const;
};
