#pragma once

#include "..\..\abstract\Ingredients.h"

class PlumTomatoSauce : public Sauce
{
public:
	~PlumTomatoSauce() {}
	virtual std::string ToString() { return "Plum tomato sauce"; }
};
