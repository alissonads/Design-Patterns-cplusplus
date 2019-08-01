#pragma once

class QuackObservable;

class Observer
{
public:
	virtual void update(QuackObservable *duck) = 0;
};
