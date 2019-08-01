#pragma once

#include "..\..\abstract\Ingredients.h"

class MarinaraSauce : public Sauce
{
public:
	~MarinaraSauce() {}
	virtual std::string ToString() { return "Marinara sauce"; }
};
