#pragma once

#include "..\abstract\State.h"

class GumballMachine;

class WinnerState : public State
{
private:
	GumballMachine &gumballMachine;

public:
	WinnerState(GumballMachine &_gumballMachine);

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
};