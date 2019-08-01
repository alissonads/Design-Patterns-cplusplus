#pragma once

#include "..\..\abstract\Quackable.h"
#include "..\observer\Observable.h"

class Goose;

class GooseAdapter : public Quackable
{
private:
	Goose *goose;
	Observable observable;

public:
	GooseAdapter(Goose *_goose);
	~GooseAdapter();

	virtual void quack();

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "GooseAdapter"; }
};
