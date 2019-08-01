#pragma once

#include "..\..\abstract\Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
	ChicagoStyleCheesePizza();
	~ChicagoStyleCheesePizza();

	virtual void Cut();
};