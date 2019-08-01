#include "GarageDoor.h"
#include <iostream>

GarageDoor::GarageDoor(const std::string name) :
	Object(name)
{}


GarageDoor::~GarageDoor()
{}

void GarageDoor::Up() const
{
	std::cout << name << " garage door is up" << std::endl;
}

void GarageDoor::Down() const
{
	std::cout << name << " garage door down" << std::endl;
}

void GarageDoor::Stop() const
{
	std::cout << name << " door of stopped garage" << std::endl;
}

void GarageDoor::LightOn()
{
	std::cout << "Light of the garage on" << std::endl;
}

void GarageDoor::LightOf()
{
	std::cout << "Light of the garage off" << std::endl;
}
