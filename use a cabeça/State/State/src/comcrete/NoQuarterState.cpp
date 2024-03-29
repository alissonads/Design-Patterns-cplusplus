#include "NoQuarterState.h"
#include "GumballMachine.h"
#include <iostream>

NoQuarterState::NoQuarterState(GumballMachine &_gumballMachine) :
	gumballMachine(_gumballMachine)
{}

void NoQuarterState::insertQuarter()
{
	std::cout << "You inserted a quarter" << std::endl;
	gumballMachine.setState(gumballMachine.getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	std::cout << "You haven't inserted a quarter" << std::endl;
}

void NoQuarterState::turnCrank()
{
	std::cout << "You turned, but there's no quarter" << std::endl;
}

void NoQuarterState::dispense()
{
	std::cout << "You need to pay first\n" << std::endl;
}
