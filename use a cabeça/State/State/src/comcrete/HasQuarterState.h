#pragma once

#include "..\abstract\State.h"

class GumballMachine;

class HasQuarterState : public State
{
private:
	GumballMachine &gumballMachine;

public:
	HasQuarterState(GumballMachine &_gumballMachine);

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
};