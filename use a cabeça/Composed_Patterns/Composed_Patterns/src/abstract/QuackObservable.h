#pragma once

#include <string>

class Observer;

class QuackObservable
{
public:
	virtual ~QuackObservable() {}
	virtual void registerObserver(Observer *observer) = 0;
	virtual void notifyObservers() = 0;
	virtual std::string getName() const = 0;
};
