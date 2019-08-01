#include "MacroCommand.h"

MacroCommand::MacroCommand(std::initializer_list<Command*> _commands) :
	commands(_commands)
{}

MacroCommand::~MacroCommand()
{
	commands.clear();
}

void MacroCommand::Execute()
{
	for (auto i : commands)
		i->Execute();
}

void MacroCommand::Undo()
{
	for (auto i : commands)
		i->Undo();
}
