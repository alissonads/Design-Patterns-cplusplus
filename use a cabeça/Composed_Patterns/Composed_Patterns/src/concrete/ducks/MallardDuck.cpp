#include "MallardDuck.h"
#include "..\observer\Observable.h"
#include <iostream>

MallardDuck::MallardDuck() :
	observable(new Observable(this))
{}

MallardDuck::~MallardDuck()
{
	delete observable;
}

void MallardDuck::quack()
{
	std::cout << "Quack" << std::endl;
	notifyObservers();
}

void MallardDuck::registerObserver(Observer *observer)
{
	observable->registerObserver(observer);
}

void MallardDuck::notifyObservers()
{
	observable->notifyObservers();
}
