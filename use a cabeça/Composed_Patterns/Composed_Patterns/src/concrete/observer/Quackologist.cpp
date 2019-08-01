#include "Quackologist.h"
#include "..\..\abstract\QuackObservable.h"
#include <iostream>

void Quackologist::update(QuackObservable *duck)
{
	std::cout << "Quackologist: " << duck->getName() << " just quacked" << std::endl;
}
