#pragma once

#include "..\..\abstract\Quackable.h"
#include "..\observer\Observable.h"

class RubberDuck : public Quackable
{
private:
	Observable observable;

public:
	RubberDuck();

	virtual void quack();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "RubberDuck"; }
};
