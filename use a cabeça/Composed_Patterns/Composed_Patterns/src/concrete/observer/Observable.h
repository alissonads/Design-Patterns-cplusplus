#pragma once

#include "..\..\abstract\QuackObservable.h"
#include <vector>

class Observable : public QuackObservable
{
private:
	std::vector<Observer*> observers;
	QuackObservable *duck;

public:
	Observable(QuackObservable *_duck);
	~Observable();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();
	virtual std::string getName() const { return "Observable"; }
};
