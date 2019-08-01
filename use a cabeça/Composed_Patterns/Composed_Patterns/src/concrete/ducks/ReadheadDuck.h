#pragma once

#include "..\..\abstract\Quackable.h"
#include "..\observer\Observable.h"

class ReadheadDuck : public Quackable
{
private:
	Observable observable;

public:
	ReadheadDuck();

	virtual void quack();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "ReadheadDuck"; }
};
