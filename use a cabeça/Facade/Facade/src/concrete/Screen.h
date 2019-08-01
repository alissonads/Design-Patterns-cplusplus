#pragma once

#include <iostream>

class Screen
{
public:
	void Up()
	{
		std::cout << "Theater Screen going up" << std::endl;
	}

	void Down()
	{
		std::cout << "Theater Screen going down" << std::endl;
	}
};
