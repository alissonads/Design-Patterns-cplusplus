#pragma once

#include "..\..\abstract\Quackable.h"
#include "..\observer\Observable.h"
#include <vector>

class Flock : public Quackable
{
private:
	typedef std::vector<Quackable*>::iterator Iterator;
	std::vector<Quackable*> quackers;

public:
	Flock();
	~Flock();

	virtual void quack();
	void add(Quackable *quacker);

	virtual void registerObserver(Observer *observer);
	virtual void notifyObservers();

	virtual std::string getName() const { return "Flock"; }
};
