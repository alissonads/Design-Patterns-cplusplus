#pragma once

#include "..\..\abstract\Ingredients.h"

class MozzarellaCheese : public Cheese
{
public:
	~MozzarellaCheese() {}
	virtual std::string ToString() { return "Mozzarella cheese"; }
};
