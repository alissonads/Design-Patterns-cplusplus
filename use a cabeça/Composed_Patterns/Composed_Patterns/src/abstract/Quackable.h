#pragma once

#include "QuackObservable.h"

class Quackable : public QuackObservable
{
public:
	virtual ~Quackable() {}
	virtual void quack() = 0;

	virtual void registerObserver(Observer *observer) = 0;
	virtual void notifyObservers() = 0;
	virtual std::string getName() const = 0;
};
