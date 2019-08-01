#pragma once

#include "..\abstract\State.h"

class GumballMachine;

class SoldState : public State
{
private:
	GumballMachine &gumballMachine;

public:
	SoldState(GumballMachine &_gumballMachine);

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
};
