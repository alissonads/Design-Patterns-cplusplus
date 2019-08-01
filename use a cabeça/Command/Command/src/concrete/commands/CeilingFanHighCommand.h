#pragma once

#include "..\..\abstract\Command.h"

class CeilingFan;

class CeilingFanHighCommand : public Command
{
private:
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanHighCommand(CeilingFan *_ceilingFan);
	~CeilingFanHighCommand();

	virtual void Execute();
	virtual void Undo();
};
