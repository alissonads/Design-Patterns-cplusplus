#include "SoldState.h"
#include "GumballMachine.h"
#include <iostream>

SoldState::SoldState(GumballMachine &_gumballMachine) :
	gumballMachine(_gumballMachine)
{}

void SoldState::insertQuarter()
{
	std::cout << "Please wait, we're already giving you a gumball" << std::endl;
}

void SoldState::ejectQuarter()
{
	std::cout << "Sorry, you already turned the crank" << std::endl;
}

void SoldState::turnCrank()
{
	std::cout << "Turning twice doesn't get you another gumball" << std::endl;
}

void SoldState::dispense()
{
	gumballMachine.releaseBall();

	if (gumballMachine.getCount() > 0)
	{
		gumballMachine.setState(gumballMachine.getNoQuarterState());
	}
	else
	{
		std::cout << "Oops, out of gunballs!\n" << std::endl;
		gumballMachine.setState(gumballMachine.getSoldOutState());
	}
}
