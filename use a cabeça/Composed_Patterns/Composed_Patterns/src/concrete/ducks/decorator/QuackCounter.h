#pragma once

#include "..\..\..\abstract\Quackable.h"
#include "..\..\observer\Observable.h"

class QuackCounter : public Quackable
{
private:
	Quackable *duck;
	static int numberOfQuacks;

public:
	QuackCounter(Quackable *_duck);
	~QuackCounter();

	virtual void quack();
	static int getQuacks();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "QuackCounter"; }
};
