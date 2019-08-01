#include "Flock.h"
#include "..\..\Util\Util.h"

Flock::Flock() 
{}

Flock::~Flock()
{
	quackers.clear();
}

void Flock::quack()
{
	Iterator iterator;

	for (iterator = quackers.begin(); iterator != quackers.end(); iterator++)
	{
		Quackable *quacker = *iterator;
		quacker->quack();
	}
}

void Flock::add(Quackable *quacker)
{
	quackers.push_back(quacker);
}

void Flock::registerObserver(Observer *observer)
{
	Iterator iterator;

	for (iterator = quackers.begin(); iterator != quackers.end(); iterator++)
	{
		Quackable *quacker = *iterator;
		quacker->registerObserver(observer);
	}
}

void Flock::notifyObservers()
{}
