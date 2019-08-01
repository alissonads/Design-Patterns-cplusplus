#pragma once

#include "..\..\abstract\Beverage.h"

class Decaf : public Beverage
{
public:
	Decaf();
	~Decaf();

	virtual float Cost() const;
};
