#include "DuckCall.h"
#include <iostream>

DuckCall::DuckCall() :
	observable(this)
{}

void DuckCall::quack()
{
	std::cout << "Kwack" << std::endl;
	notifyObservers();
}

void DuckCall::registerObserver(Observer *observer)
{
	observable.registerObserver(observer);
}

void DuckCall::notifyObservers()
{
	observable.notifyObservers();
}
