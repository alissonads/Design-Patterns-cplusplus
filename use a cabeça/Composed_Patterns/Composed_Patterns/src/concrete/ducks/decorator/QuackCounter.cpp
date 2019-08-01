#include "QuackCounter.h"

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(Quackable *_duck) :
	duck(_duck)
{}

QuackCounter::~QuackCounter()
{
	delete duck;
}

void QuackCounter::quack()
{
	duck->quack();
	numberOfQuacks++;
	//notifyObservers();
}

int QuackCounter::getQuacks()
{
	return numberOfQuacks;
}

void QuackCounter::registerObserver(Observer *observer)
{
	duck->registerObserver(observer);
}

void QuackCounter::notifyObservers()
{
	duck->notifyObservers();
}
