#include "RubberDuck.h"
#include <iostream>

RubberDuck::RubberDuck() :
	observable(this)
{}

void RubberDuck::quack()
{
	std::cout << "Squeak" << std::endl;
	notifyObservers();
}

void RubberDuck::registerObserver(Observer *observer)
{
	observable.registerObserver(observer);
}

void RubberDuck::notifyObservers()
{
	observable.notifyObservers();
}
