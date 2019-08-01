#include "Light.h"
#include <iostream>

Light::Light(const std::string name) :
	Object(name)
{}

Light::~Light()
{}

void Light::On() const
{
	std::cout << name << " light is on" << std::endl;
}

void Light::Off() const
{
	std::cout << name << " light is off" << std::endl;
}
