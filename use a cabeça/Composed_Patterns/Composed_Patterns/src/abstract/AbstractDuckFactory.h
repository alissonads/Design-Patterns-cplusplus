#pragma once

class Quackable;

class AbstractDuckFactory
{
public:
	virtual ~AbstractDuckFactory(){}
	virtual Quackable *createMallardDuck() = 0;
	virtual Quackable *createReadheadDuck() = 0;
	virtual Quackable *createDuckCall() = 0;
	virtual Quackable *createRubberDuck() = 0;
};
