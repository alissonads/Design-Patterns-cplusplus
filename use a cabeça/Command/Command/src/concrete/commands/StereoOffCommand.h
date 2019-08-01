#pragma once

#include "..\..\abstract\Command.h"

class Stereo;

class StereoOffCommand : public Command
{
private:
	Stereo *stereo;

public:
	StereoOffCommand(Stereo *_stereo);
	~StereoOffCommand();

	virtual void Execute();
	virtual void Undo();
};
