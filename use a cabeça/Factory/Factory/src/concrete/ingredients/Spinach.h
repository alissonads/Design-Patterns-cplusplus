#pragma once

#include "..\..\abstract\Ingredients.h"

class Spinach : public Veggies
{
public:
	~Spinach() {}
	virtual std::string ToString() { return "Spinach "; }
};
