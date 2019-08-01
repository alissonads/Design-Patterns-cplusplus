#pragma once

#include "Subject.h"
#include <vector>

class AbstractSubject : public Subject
{
protected:
	std::vector<Observer*> observers;
	bool change;

public:
	AbstractSubject();
	~AbstractSubject();

	const std::vector<Observer*> &GetObservers() const;
	int ContObservers() const;
	bool GetChange() const;

	void Bind();
	void Unbind();

	virtual int RegisterObserver(Observer *o);
	virtual void RemoveObserver(Observer *o);
	virtual void RemoveObserver(const int index);
	virtual void NotifyObservers(void *args);
	void NotifyObservers();

	virtual void Apply() = 0;
};
