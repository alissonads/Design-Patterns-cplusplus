#include "CountingDuckFactory.h"
#include "..\ducks\Ducks.h"

Quackable *CountingDuckFactory::createMallardDuck()
{
	return new QuackCounter(new MallardDuck());
}

Quackable *CountingDuckFactory::createReadheadDuck()
{
	return new QuackCounter(new ReadheadDuck());
}

Quackable *CountingDuckFactory::createDuckCall()
{
	return new QuackCounter(new DuckCall());
}

Quackable *CountingDuckFactory::createRubberDuck()
{
	return new QuackCounter(new RubberDuck());
}
