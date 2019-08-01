#include "SimpleRemoteControl.h"
#include "..\..\abstract\Command.h"

SimpleRemoteControl::SimpleRemoteControl()
{}

SimpleRemoteControl::~SimpleRemoteControl()
{}

void SimpleRemoteControl::SetCommand(Command *command)
{
	slot = command;
}

void SimpleRemoteControl::ButtonWasPressed()
{
	slot->Execute();
}
