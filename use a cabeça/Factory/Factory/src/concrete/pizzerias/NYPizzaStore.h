#pragma once

#include "..\..\abstract\PizzaStore.h"

class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	NYPizzaStore(const SimplePizzaFactory &_factory);

	virtual Pizza *CreatePizza(const std::string &type);
};
