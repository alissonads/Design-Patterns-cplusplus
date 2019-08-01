#include "CeilingFanOffCommand.h"
#include "..\vendedor\CeilingFan.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *_ceilingFan) :
	ceilingFan(_ceilingFan)
{}

CeilingFanOffCommand::~CeilingFanOffCommand()
{}

void CeilingFanOffCommand::Execute()
{
	prevSpeed = ceilingFan->GetSpeed();
	ceilingFan->Off();
}

void CeilingFanOffCommand::Undo()
{
	if (prevSpeed == Speed::OFF)
	{
		ceilingFan->Off();
	}
	else if (prevSpeed == Speed::LOW)
	{
		ceilingFan->Low();
	}
	else if (prevSpeed == Speed::MEDIUM)
	{
		ceilingFan->Medium();
	}
	else if (prevSpeed == Speed::HIGH)
	{
		ceilingFan->High();
	}
}

