#pragma once

#include "..\..\abstract\Ingredients.h"

class FrozenClams : public Clam
{
public:
	~FrozenClams() {}
	virtual std::string ToString() { return "Frozen clams"; }
};
