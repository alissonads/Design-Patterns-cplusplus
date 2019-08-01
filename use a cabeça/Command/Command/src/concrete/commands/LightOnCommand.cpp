#include "LightOnCommand.h"
#include "..\vendedor\Light.h"

LightOnCommand::LightOnCommand(Light *_light) :
	light(_light)
{}

LightOnCommand::~LightOnCommand()
{}

void LightOnCommand::Execute()
{
	light->On();
}

void LightOnCommand::Undo()
{
	light->Off();
}
