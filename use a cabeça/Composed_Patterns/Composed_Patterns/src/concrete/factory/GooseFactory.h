#pragma once

#include "..\..\abstract\AbstractGooseFactory.h"

class GooseFactory : public AbstractGooseFactory
{
public:
	virtual Goose *createGoose();
	virtual Quackable *createGooseAdapter();
};
