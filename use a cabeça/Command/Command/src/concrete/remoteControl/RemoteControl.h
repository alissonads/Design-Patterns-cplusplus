#pragma once

#include <vector>
#include <ostream>

class Command;

class RemoteControl
{
private:
	Command **onCommands;
	Command **offCommands;
	Command *undoComand;

public:
	RemoteControl();
	~RemoteControl();

	void SetCommand(const int slot, Command *_onCommand, Command *_offCommand);
	void OnButtonWasPushed(const int slot);
	void OffButtonWasPushed(const int slot);
	void UndoButtonWasPushed();

	friend std::ostream &operator<<(std::ostream &out, const RemoteControl &remoteControl)
	{
		out << "\n----- Remote Control ------" << std::endl;

		return out;
	}
};
