#include "ReadheadDuck.h"
#include <iostream>

ReadheadDuck::ReadheadDuck() :
	observable(this)
{}

void ReadheadDuck::quack()
{
	std::cout << "Quack" << std::endl;
	notifyObservers();
}

void ReadheadDuck::registerObserver(Observer *observer)
{
	observable.registerObserver(observer);
}

void ReadheadDuck::notifyObservers()
{
	observable.notifyObservers();
}
