#pragma once

#include "..\..\abstract\CondimentDecorator.h"

class Whip : public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Whip(Beverage *_beverage);
	~Whip();

	virtual std::string GetDescription() const;
	virtual float Cost() const;
};

