#pragma once

#include "..\..\abstract\Ingredients.h"

class Eggplant : public Veggies
{
public:
	~Eggplant() {}
	virtual std::string ToString() { return "Eggplant "; }
};
