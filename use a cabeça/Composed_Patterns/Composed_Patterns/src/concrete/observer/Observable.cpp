#include "Observable.h"
#include "..\..\abstract\Observer.h"
#include "..\..\Util\Util.h"

Observable::Observable(QuackObservable *_duck) :
	observers(),
	duck(_duck)
{}

Observable::~Observable()
{
	observers.clear();
}

void Observable::registerObserver(Observer *observer)
{
	observers.push_back(observer);
}

void Observable::notifyObservers()
{
	for (Observer *observer : observers)
	{
		observer->update(duck);
	}
}
