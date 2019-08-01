#pragma once

#include "..\..\abstract\Quackable.h"

class Observable;

class MallardDuck : public Quackable
{
private:
	Observable *observable;

public:
	MallardDuck();
	~MallardDuck();

	virtual void quack();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "MallardDuck"; }
};
