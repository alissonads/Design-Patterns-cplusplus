#pragma once

#include "..\..\abstract\Command.h"

class CeilingFan;

class CeilingFanLowCommand : public Command
{
private:
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanLowCommand(CeilingFan *_ceilingFan);
	~CeilingFanLowCommand();

	virtual void Execute();
	virtual void Undo();
};
