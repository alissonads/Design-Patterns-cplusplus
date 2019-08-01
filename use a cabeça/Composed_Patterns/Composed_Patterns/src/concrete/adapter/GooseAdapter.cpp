#include "GooseAdapter.h"
#include "..\goose\Goose.h"

GooseAdapter::GooseAdapter(Goose *_goose) :
	goose(_goose),
	observable(this)
{}

GooseAdapter::~GooseAdapter()
{
	delete goose;
}

void GooseAdapter::quack()
{
	goose->honk();
	notifyObservers();
}

void GooseAdapter::registerObserver(Observer * observer)
{
	observable.registerObserver(observer);
}

void GooseAdapter::notifyObservers()
{
	observable.notifyObservers();
}
