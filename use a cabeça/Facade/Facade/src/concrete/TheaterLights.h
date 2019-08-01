#pragma once

#include <iostream>

class TheaterLights
{
public:
	void On()
	{
		std::cout << "Theater Ceiling Lights on" << std::endl;
	}

	void Off()
	{
		std::cout << "Theater Ceiling Lights off" << std::endl;
	}

	void Dim(int v)
	{
		std::cout << "Theater Ceiling Lights dinnibg to "
			<< 10 << "%"<< std::endl;
	}
};
