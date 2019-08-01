#pragma once

#include "..\..\abstract\Ingredients.h"

class Onion : public Veggies
{
public:
	~Onion() {}
	virtual std::string ToString() { return "Onion "; }
};
