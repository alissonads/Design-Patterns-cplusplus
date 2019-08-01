#include "DuckFactory.h"
#include "..\ducks\Ducks.h"

Quackable *DuckFactory::createMallardDuck()
{
	return new MallardDuck();
}

Quackable *DuckFactory::createReadheadDuck()
{
	return new ReadheadDuck();
}

Quackable *DuckFactory::createDuckCall()
{
	return new DuckCall();
}

Quackable *DuckFactory::createRubberDuck()
{
	return new RubberDuck();
}
