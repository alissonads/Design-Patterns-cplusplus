#pragma once

#include "..\..\abstract\Command.h"

class Light;

class LightOffCommand : public Command
{
private:
	//objecto receptor
	Light *light;

public:
	LightOffCommand(Light *_light);
	~LightOffCommand();

	virtual void Execute();
	virtual void Undo();
};
