#pragma once

#include "..\..\abstract\Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend();
	~HouseBlend();

	virtual float Cost() const;
};
