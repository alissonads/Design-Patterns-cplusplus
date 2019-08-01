#pragma once

#include "..\..\abstract\Ingredients.h"

class Mushroom : public Veggies
{
public:
	~Mushroom() {}
	virtual std::string ToString() { return "Mushroom "; }
};
