#pragma once

#include <iostream>

class PopcornPopper
{
public:
	void On()
	{
		std::cout << "Popcorn Popper on" << std::endl;
	}

	void Off()
	{
		std::cout << "Popcorn Popper off" << std::endl;
	}

	void Pop()
	{
		std::cout << "Popcorn Popper popping popcorn!" << std::endl;
	}
};
