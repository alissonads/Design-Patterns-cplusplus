#pragma once

class Observer;

class Subject
{
public:
	virtual int RegisterObserver(Observer *o) = 0;
	virtual void RemoveObserver(Observer *o) = 0;
	virtual void RemoveObserver(const int id) = 0;
	virtual void NotifyObservers(void *args) = 0;
};
