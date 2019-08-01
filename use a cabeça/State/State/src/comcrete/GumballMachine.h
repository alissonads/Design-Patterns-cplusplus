#pragma once

#include <ostream>

class State;

class GumballMachine
{
private:
	State *hasQuarterState;
	State *noQuarterState;
	State *soldOutState;
	State *soldState;
	State *winnerState;
	State *state;
	int count;

public:
	GumballMachine(const int numberGumballs);

	State *getHasQuarterState() const;
	State *getNoQuarterState() const;
	State *getSoldOutState() const;
	State *getSoldState() const;
	State *getWinnerState() const;
	State *getState() const;
	int getCount() const;

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void setState(State *state);
	void releaseBall();
	void refill(const int _count);

	friend std::ostream &operator<<(std::ostream &out, const GumballMachine &gumballMachine)
	{
		out << "\nMighty Gumball, Inc\n";
		out << "Inventory: " << gumballMachine.getCount() << " gumballs\n";

		if (gumballMachine.getCount() > 0)
			out << "Machine is waiting for quarter\n";
		else
			out << "Machine is sold out\n\n";

		return out;
	}
};
