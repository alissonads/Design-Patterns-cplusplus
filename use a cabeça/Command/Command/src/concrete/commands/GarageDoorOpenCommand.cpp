#include "GarageDoorOpenCommand.h"
#include "..\vendedor\GarageDoor.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor *_garageDoor) :
	garageDoor(_garageDoor)
{}


GarageDoorUpCommand::~GarageDoorUpCommand()
{}

void GarageDoorUpCommand::Execute()
{
	garageDoor->Up();
}

void GarageDoorUpCommand::Undo()
{
	garageDoor->Down();
}
