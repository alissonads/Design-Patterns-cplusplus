#pragma once

#include "..\..\abstract\Beverage.h"

class Expresso : public Beverage
{
public:
	Expresso();
	~Expresso();

	virtual float Cost() const;
};
