#include "CeilingFan.h"
#include <iostream>

CeilingFan::CeilingFan(const std::string name) :
	Object(name),
	speed(OFF)
{}

CeilingFan::~CeilingFan()
{}

void CeilingFan::High()
{
	speed = HIGH;
	std::cout << name << " ceiling fan is high" << std::endl;
}

void CeilingFan::Medium()
{
	speed = MEDIUM;
	std::cout << name << " ceiling fan is medium" << std::endl;
}

void CeilingFan::Low()
{
	speed = LOW;
	std::cout << name << " ceiling fan is low" << std::endl;
}

void CeilingFan::Off()
{
	speed = OFF;
	std::cout << name << " ceiling fan is off" << std::endl;
}
