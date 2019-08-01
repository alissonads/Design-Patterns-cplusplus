#include "StereoOffCommand.h"
#include "..\vendedor\Stereo.h"

StereoOffCommand::StereoOffCommand(Stereo *_stereo) :
	stereo(_stereo)
{}

StereoOffCommand::~StereoOffCommand()
{}

void StereoOffCommand::Execute()
{
	stereo->Off();
}

void StereoOffCommand::Undo()
{
	stereo->On();
}
