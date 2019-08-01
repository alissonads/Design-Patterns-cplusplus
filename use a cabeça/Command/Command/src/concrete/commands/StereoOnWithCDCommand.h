#pragma once

#include "..\..\abstract\Command.h"

class Stereo;

class StereoOnWithCDCommand : public Command
{
private:
	Stereo *stereo;

public:
	StereoOnWithCDCommand(Stereo *_stereo);
	~StereoOnWithCDCommand();

	virtual void Execute();
	virtual void Undo();
};
