#pragma once

#include <string>

class Clam
{
public:
	virtual ~Clam(){}
	virtual std::string ToString() = 0;
};

class Cheese
{
public:
	virtual ~Cheese(){}
	virtual std::string ToString() = 0;
};

class Dough
{
public:
	virtual ~Dough(){}
	virtual std::string ToString() = 0;
};

class Pepperoni
{
public:
	virtual ~Pepperoni(){}
	virtual std::string ToString() = 0;
};

class Sauce
{
public:
	virtual ~Sauce(){}
	virtual std::string ToString() = 0;
};

class Veggies
{
public:
	virtual ~Veggies(){}
	virtual std::string ToString() = 0;
};
