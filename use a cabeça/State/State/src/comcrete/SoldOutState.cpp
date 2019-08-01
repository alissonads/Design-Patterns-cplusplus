#include "SoldOutState.h"
#include "GumballMachine.h"
#include <iostream>

SoldOutState::SoldOutState(GumballMachine &_gumballMachine) :
	gumballMachine(_gumballMachine)
{}

void SoldOutState::insertQuarter()
{
	std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
}

void SoldOutState::ejectQuarter()
{
	std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
}

void SoldOutState::turnCrank()
{
	std::cout << "You turned, but there are no gumballs" << std::endl;
}

void SoldOutState::dispense()
{
	std::cout << "No gumball dispensed\n" << std::endl;
}
