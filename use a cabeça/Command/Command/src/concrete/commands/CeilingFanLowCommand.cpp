#include "CeilingFanLowCommand.h"
#include "..\vendedor\CeilingFan.h"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan *_ceilingFan) :
	ceilingFan(_ceilingFan)
{}

CeilingFanLowCommand::~CeilingFanLowCommand()
{}

void CeilingFanLowCommand::Execute()
{
	prevSpeed = ceilingFan->GetSpeed();
	ceilingFan->Low();
}

void CeilingFanLowCommand::Undo()
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
