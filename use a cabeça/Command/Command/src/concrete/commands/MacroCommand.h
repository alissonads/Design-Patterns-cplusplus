#pragma once

#include "..\..\abstract\Command.h"
#include <vector>

class MacroCommand : public Command
{
private:
	std::vector<Command*> commands;

public:
	MacroCommand(std::initializer_list<Command*> _commands);
	~MacroCommand();

	virtual void Execute();
	virtual void Undo();
};
