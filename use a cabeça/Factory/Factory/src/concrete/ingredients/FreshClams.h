#pragma once

#include "..\..\abstract\Ingredients.h"

class FreshClams : public Clam
{
public:
	~FreshClams() {}
	virtual std::string ToString() { return "Fresh clams"; }
};
