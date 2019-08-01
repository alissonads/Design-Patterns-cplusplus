#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "WinnerState.h"
#include <iostream>
#include <ostream>

GumballMachine::GumballMachine(const int numberGumballs) :
	hasQuarterState(new HasQuarterState(*this)),
	noQuarterState(new NoQuarterState(*this)),
	soldOutState(new SoldOutState(*this)),
	soldState(new SoldState(*this)),
	winnerState(new WinnerState(*this)),
	state(numberGumballs>0? 
		noQuarterState : soldState),
	count(numberGumballs)
{}

State *GumballMachine::getHasQuarterState() const
{
	return hasQuarterState;
}

State *GumballMachine::getNoQuarterState() const
{
	return noQuarterState;
}

State *GumballMachine::getSoldOutState() const
{
	return soldOutState;
}

State *GumballMachine::getSoldState() const
{
	return soldState;
}

State *GumballMachine::getWinnerState() const
{
	return winnerState;
}

State *GumballMachine::getState() const
{
	return state;
}

int GumballMachine::getCount() const
{
	return count;
}

void GumballMachine::insertQuarter()
{
	state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();
}

void GumballMachine::dispense()
{
	state->dispense();
}

void GumballMachine::setState(State *_state)
{
	state = _state;
}

void GumballMachine::releaseBall()
{
	std::cout << "A gumball comes rolling out the slot...";

	if (count != 0)
		count--;
}

void GumballMachine::refill(const int _count)
{
	count = _count;
	state = noQuarterState;
}
