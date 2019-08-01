#include "GarageDoorDownCommand.h"
#include "..\vendedor\GarageDoor.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *_garageDoor) :
	garageDoor(_garageDoor)
{}


GarageDoorDownCommand::~GarageDoorDownCommand()
{}

void GarageDoorDownCommand::Execute()
{
	garageDoor->Down();
}

void GarageDoorDownCommand::Undo()
{
	garageDoor->Up();
}