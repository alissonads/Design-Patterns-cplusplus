#include "CeilingFanHighCommand.h"
#include "..\vendedor\CeilingFan.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *_ceilingFan) :
	ceilingFan(_ceilingFan)
{}

CeilingFanHighCommand::~CeilingFanHighCommand()
{}

void CeilingFanHighCommand::Execute()
{
	prevSpeed = ceilingFan->GetSpeed();
	ceilingFan->High();
}

void CeilingFanHighCommand::Undo()
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
