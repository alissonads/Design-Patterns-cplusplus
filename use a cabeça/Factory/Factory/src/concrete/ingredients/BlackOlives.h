#pragma once

#include "..\..\abstract\Ingredients.h"

class BlackOlives : public Veggies
{
public:
	~BlackOlives() {}
	virtual std::string ToString() { return "Black olives "; }
};
