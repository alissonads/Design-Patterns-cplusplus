#pragma once

#include "..\abstract\State.h"

class GumballMachine;

class NoQuarterState : public State
{
private:
	GumballMachine &gumballMachine;

public:
	NoQuarterState(GumballMachine &_gumballMachine);

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
};