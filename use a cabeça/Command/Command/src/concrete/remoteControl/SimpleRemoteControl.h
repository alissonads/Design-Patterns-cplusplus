#pragma once

class Command;

class SimpleRemoteControl
{
private:
	Command *slot;

public:
	SimpleRemoteControl();
	~SimpleRemoteControl();

	void SetCommand(Command *command);
	void ButtonWasPressed();
};
