#include "WinnerState.h"
#include "GumballMachine.h"
#include "..\Util\Util.h"
#include <iostream>

WinnerState::WinnerState(GumballMachine &_gumballMachine) :
	gumballMachine(_gumballMachine)
{}

void WinnerState::insertQuarter()
{
	throw UnsupportedOperationException();
}

void WinnerState::ejectQuarter()
{
	throw UnsupportedOperationException();
}

void WinnerState::turnCrank()
{
	throw UnsupportedOperationException();
}

void WinnerState::dispense()
{
		std::cout << "YOU'RE A WINNER! you get two gumballs for your quarter" << std::endl;
	if (gumballMachine.getCount() == 0)
	{
		gumballMachine.setState(gumballMachine.getSoldOutState());
	}
	else
	{
		gumballMachine.releaseBall();
		gumballMachine.releaseBall();
		if (gumballMachine.getCount() > 0)
		{
			gumballMachine.setState(gumballMachine.getNoQuarterState());
		}
		else
		{
			std::cout << "Oops, out of gumballs!\n" << std::endl;
			gumballMachine.setState(gumballMachine.getSoldOutState());
		}
	}
}
