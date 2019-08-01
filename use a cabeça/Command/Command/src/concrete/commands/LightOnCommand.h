#pragma once

#include "..\..\abstract\Command.h"

class Light;

class LightOnCommand : public Command
{
private:
	//objecto receptor
	Light *light;

public:
	LightOnCommand(Light *_light);
	~LightOnCommand();

	virtual void Execute();
	virtual void Undo();
};
