#pragma once

#include "..\..\abstract\Ingredients.h"

class Garlic : public Veggies
{
public:
	~Garlic() {}
	virtual std::string ToString() { return "Garlic "; }
};
