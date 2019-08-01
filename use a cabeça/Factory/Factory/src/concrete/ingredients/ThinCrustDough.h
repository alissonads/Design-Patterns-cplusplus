#pragma once

#include "..\..\abstract\Ingredients.h"

class ThinCrustDough : public Dough
{
public:
	~ThinCrustDough() {}
	virtual std::string ToString() { return "Thin crust dough "; }
};
