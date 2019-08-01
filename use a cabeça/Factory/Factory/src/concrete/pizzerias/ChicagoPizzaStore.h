#pragma once

#include "..\..\abstract\PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	ChicagoPizzaStore(const SimplePizzaFactory &_factory);

	virtual Pizza *CreatePizza(const std::string &type);
};