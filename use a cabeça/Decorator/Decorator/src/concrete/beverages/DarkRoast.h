#pragma once

#include "..\..\abstract\Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast();
	~DarkRoast();

	virtual float Cost() const;
};
