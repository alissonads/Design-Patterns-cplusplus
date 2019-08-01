#pragma once

#include "..\..\abstract\Command.h"

class CeilingFan;

class CeilingFanMediumCommand : public Command
{
private:
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanMediumCommand(CeilingFan *_ceilingFan);
	~CeilingFanMediumCommand();

	virtual void Execute();
	virtual void Undo();
};
