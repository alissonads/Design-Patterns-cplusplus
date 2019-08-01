#pragma once
#include <string>

class IteratorBase;

class MenuComponent
{
protected:
	typedef class IteratorBase Iterator;

public:
	virtual void add(MenuComponent &menuComponent);
	virtual void remove(const MenuComponent &menuComponent);
	virtual void remove(const int i);
	virtual MenuComponent *getChild(const int i);
	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual double getPrice() const;
	virtual bool isVegetarian() const;
	virtual void print() const;
	virtual Iterator *createIterator() = 0;
};
