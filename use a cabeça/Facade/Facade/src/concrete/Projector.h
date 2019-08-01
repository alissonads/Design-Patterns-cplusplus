#pragma once

#include <iostream>

class DvdPlayer;

class Projector
{
private:
	DvdPlayer *dvd;

public:
	void On()
	{
		std::cout << "Top-O-Line Projector on" << std::endl;
	}

	void Off()
	{
		std::cout << "Top-O-Line Projector off" << std::endl;
	}

	void TvMode()
	{

	}

	void WideSceenMode()
	{
		std::cout << "Top-O-Line Projector in widescreen mode (16x9 aspect ratio)" << std::endl;
	}
};
