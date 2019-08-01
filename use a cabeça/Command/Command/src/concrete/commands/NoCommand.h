#pragma once

#include "..\..\abstract\Command.h"

class NoCommand : public Command
{
public:
	virtual void Execute() {};
	virtual void Undo() {};
};
