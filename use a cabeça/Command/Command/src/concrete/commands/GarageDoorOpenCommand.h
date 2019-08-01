#pragma once

#include "..\..\abstract\Command.h"

class GarageDoor;

class GarageDoorUpCommand :
	public Command
{
private:
	GarageDoor *garageDoor;

public:
	GarageDoorUpCommand(GarageDoor *_garageDoor);
	~GarageDoorUpCommand();

	virtual void Execute();
	virtual void Undo();
};

