#pragma once

#include "..\abstract\MenuComponent.h"

/*leaf(folha)*/
class MenuItem : public MenuComponent
{
private:
	std::string name;
	std::string description;
	bool vegetarian;
	double price;

public:
	MenuItem();

	MenuItem(const std::string &_name,
			 const std::string &_description,
			 const bool _vegetarian,
			 const double _price);

	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual double getPrice() const;
	virtual bool isVegetarian() const;
	virtual void print() const;
	virtual Iterator *createIterator();
};
