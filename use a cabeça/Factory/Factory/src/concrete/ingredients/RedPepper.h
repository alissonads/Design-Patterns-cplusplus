#pragma once

#include "..\..\abstract\Ingredients.h"

class RedPepper : public Veggies
{
public:
	~RedPepper() {}
	virtual std::string ToString() { return "Red pepper "; }
};
