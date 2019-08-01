#pragma once

#include "..\..\abstract\Ingredients.h"

class ReggianoCheese : public Cheese
{
public:
	~ReggianoCheese() {}
	virtual std::string ToString() { return "Cheese of the area"; }
};
