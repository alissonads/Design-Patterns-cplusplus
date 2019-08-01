#pragma once

#include <string>

class Pizza;

class SimplePizzaFactory
{
public:
	Pizza *CreatePizzaPtr(const std::string type);
};
