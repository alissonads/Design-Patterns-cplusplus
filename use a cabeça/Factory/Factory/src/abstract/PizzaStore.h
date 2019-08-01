#pragma once

#include "..\factory\SimplePizzaFactory.h"

class PizzaStore
{
private:
	SimplePizzaFactory factory;

public:
	PizzaStore(const SimplePizzaFactory &_factory);
	~PizzaStore();

	Pizza *OrderPizza(const std::string type);

	//method factory
	virtual Pizza *CreatePizza(const std::string &type) = 0;

};
