#include "Stereo.h"
#include <iostream>

Stereo::Stereo(const std::string name) :
	Object(name)
{}

Stereo::~Stereo()
{}

void Stereo::On() const
{
	std::cout << name << " stereo is on" << std::endl;
}

void Stereo::Off() const
{
	std::cout << name << " stereo is off" << std::endl;
}

void Stereo::SetCd() const
{
	std::cout << name << " stereo is set for CD input" << std::endl;
}

void Stereo::SetDvd() const
{
	std::cout << name << " stereo is set for DVD input" << std::endl;
}

void Stereo::SetRadio() const
{
	std::cout << name << " stereo set station of radio" << std::endl;
}

void Stereo::SetVolume(int v) const
{
	std::cout << name << " stere volume set to " << v << std::endl;
}
