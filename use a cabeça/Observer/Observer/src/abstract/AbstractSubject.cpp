#include "AbstractSubject.h"
#include "Observer.h"
#include <exception>

AbstractSubject::AbstractSubject() :
				 observers(),
				 change(false)
{}

AbstractSubject::~AbstractSubject()
{
	observers.clear();
}


bool AbstractSubject::GetChange() const
{
	return change;
}

const std::vector<Observer*> &AbstractSubject::GetObservers() const
{
	return observers;
}

int AbstractSubject::ContObservers() const
{
	return static_cast<int>(observers.size());
}

void AbstractSubject::Bind()
{
	change = true;
}

void AbstractSubject::Unbind()
{
	change = false;
}

int AbstractSubject::RegisterObserver(Observer * o)
{
	if (!o)
		throw std::exception("Data is null!!!");

	for (auto aux : observers)
	{
		if (o == aux)
		{
			return -1;
		}
	}

	observers.push_back(o);

	return static_cast<int>(observers.size() - 1);
}

void AbstractSubject::RemoveObserver(Observer * o)
{
	if (!o)
		throw std::exception("Data is null!!!");

	int i = 0;
	for (auto aux : observers)
	{
		if (o == aux)
		{
			observers.erase(observers.begin() + i);
			return;
		}
		i++;
	}
}

void AbstractSubject::RemoveObserver(const int index)
{
	if (index < 0 || index > observers.size())
		throw std::exception("Index invalidates!!!");

	observers.erase(observers.begin() + index);
}

void AbstractSubject::NotifyObservers(void *args)
{
	if (!change)
		return;

	for (auto o : observers)
	{
		o->Update(this, args);
	}
}

void AbstractSubject::NotifyObservers()
{
	NotifyObservers(nullptr);
}
