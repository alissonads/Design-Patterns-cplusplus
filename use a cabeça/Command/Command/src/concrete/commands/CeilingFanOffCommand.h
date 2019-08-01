#pragma once

#include "..\..\abstract\Command.h"

class CeilingFan;

class CeilingFanOffCommand : public Command
{
private:
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanOffCommand(CeilingFan *_ceilingFan);
	~CeilingFanOffCommand();

	virtual void Execute();
	virtual void Undo();
};
