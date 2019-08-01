#pragma once

#include <string>
#include <vector>

class Clam;
class Cheese;
class Dough;
class Pepperoni;
class Sauce;
class Veggies;

class Pizza
{
protected:
	std::string name;
	Dough *dough;
	Sauce *sauce;
	std::vector<Veggies*> veggies;
	Cheese *cheese;
	Pepperoni *pepperoni;
	Clam *clam;

public:
	Pizza() {}
	virtual ~Pizza();

	inline void SetName(const std::string _name) { name = _name; }
	inline std::string GetName() const { return name; }

	virtual void Prepare() = 0;
	virtual void Bake();
	virtual void Cut();
	virtual void Box();
};
