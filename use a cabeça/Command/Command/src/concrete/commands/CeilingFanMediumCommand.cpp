#include "CeilingFanMediumCommand.h"
#include "..\vendedor\CeilingFan.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *_ceilingFan) :
	ceilingFan(_ceilingFan)
{}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{}

void CeilingFanMediumCommand::Execute()
{
	prevSpeed = ceilingFan->GetSpeed();
	ceilingFan->Medium();
}

void CeilingFanMediumCommand::Undo()
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

