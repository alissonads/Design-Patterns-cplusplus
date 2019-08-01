#pragma once

#include "..\..\abstract\Quackable.h"
#include "..\observer\Observable.h"

class DuckCall : public Quackable
{
private:
	Observable observable;

public:
	DuckCall();

	virtual void quack();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "DuckCall"; }
};
