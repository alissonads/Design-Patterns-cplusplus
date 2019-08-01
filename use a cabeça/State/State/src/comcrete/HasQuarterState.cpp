#include "HasQuarterState.h"
#include "GumballMachine.h"
#include <random>]
#include <time.h>
#include <iostream>

HasQuarterState::HasQuarterState(GumballMachine &_gumballMachine) :
	gumballMachine(_gumballMachine)
{
	srand(time(NULL));
}

void HasQuarterState::insertQuarter()
{
	std::cout << "You can't insert another quarter" << std::endl;
}

void HasQuarterState::ejectQuarter()
{
	std::cout << "Quarter returned" << std::endl;
	gumballMachine.setState(gumballMachine.getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	std::cout << "You turned..." << std::endl;

	int winner = rand() % 10;
	if (winner == 0 && gumballMachine.getCount() > 1)
		gumballMachine.setState(gumballMachine.getWinnerState());
	else
		gumballMachine.setState(gumballMachine.getSoldState());
}

void HasQuarterState::dispense()
{
	std::cout << "No gumball dispensed\n" << std::endl;
}
