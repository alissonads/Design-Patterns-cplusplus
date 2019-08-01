#pragma once

#include "..\..\abstract\Command.h"

class GarageDoor;

class GarageDoorDownCommand :
	public Command
{
private:
	GarageDoor *garageDoor;

public:
	GarageDoorDownCommand(GarageDoor *_garageDoor);
	~GarageDoorDownCommand();

	virtual void Execute();
	virtual void Undo();
};
