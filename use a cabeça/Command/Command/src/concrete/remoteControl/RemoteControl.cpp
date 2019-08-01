#include "RemoteControl.h"
#include "..\commands\NoCommand.h"

NoCommand noCommad;

RemoteControl::RemoteControl() :
	onCommands(new Command*[7]),
	offCommands(new Command*[7]),
	undoComand(&noCommad)
{
	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = offCommands[i] = &noCommad;
	}
}

RemoteControl::~RemoteControl()
{
	delete []onCommands;
	delete []offCommands;
}

void RemoteControl::SetCommand(const int slot, Command *_onCommand, Command *_offCommand)
{
	onCommands[slot] = _onCommand;
	offCommands[slot] = _offCommand;
}

void RemoteControl::OnButtonWasPushed(const int slot)
{
	if (onCommands[slot])
	{
		onCommands[slot]->Execute();
		undoComand = onCommands[slot];
	}

}

void RemoteControl::OffButtonWasPushed(const int slot)
{
	if (offCommands[slot])
	{
		offCommands[slot]->Execute();
		undoComand = offCommands[slot];
	}
}

void RemoteControl::UndoButtonWasPushed()
{
	if (undoComand)
		undoComand->Undo();
}
