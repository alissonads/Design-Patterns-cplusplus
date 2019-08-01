#pragma once

#include "..\..\abstract\Ingredients.h"

class SlicedPepperoni : public Pepperoni
{
public:
	~SlicedPepperoni() {}
	virtual std::string ToString() { return "Sliced pepperoni"; }
};
