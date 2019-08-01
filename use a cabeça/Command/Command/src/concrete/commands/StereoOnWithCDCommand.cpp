#include "StereoOnWithCDCommand.h"
#include "..\vendedor\Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *_stereo) :
	stereo(_stereo)
{}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{
}

void StereoOnWithCDCommand::Execute()
{
	stereo->On();
	stereo->SetCd();
	stereo->SetVolume(10);
}

void StereoOnWithCDCommand::Undo()
{
	stereo->Off();
}
