#include "LightOffCommand.h"
#include "..\vendedor\Light.h"

LightOffCommand::LightOffCommand(Light *_light) :
	light(_light)
{}

LightOffCommand::~LightOffCommand()
{}

void LightOffCommand::Execute()
{
	light->Off();
}

void LightOffCommand::Undo()
{
	light->On();
}
