#pragma once

#include "..\..\abstract\Ingredients.h"

class ThickCrustDough : public Dough
{
public:
	~ThickCrustDough() {}
	virtual std::string ToString() { return "Thick crust dough "; }
};
