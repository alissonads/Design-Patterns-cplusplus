#pragma once

#include "..\abstract\State.h"

class GumballMachine;

class SoldOutState : public State
{
private:
	GumballMachine &gumballMachine;

public:
	SoldOutState(GumballMachine &_gumballMachine);

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
};