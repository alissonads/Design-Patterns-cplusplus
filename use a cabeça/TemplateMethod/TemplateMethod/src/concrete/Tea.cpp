#include "Tea.h"
#include <iostream>

void Tea::Brew() const
{
	std::cout << "Steeping the tea" << std::endl;
}

void Tea::AddCondiments() const
{
	std::cout << "Adding Lemon" << std::endl;
}

bool Tea::CustomerWantsCondiments() const
{
	char x = GetUserInput();

	return (x == 'y' || x == 'Y');
}

char Tea::GetUserInput() const
{
	char answer = ' ';

	std::cout << "Would you like lemon with your tea (y/n)? ";

	try
	{
		std::cin >> answer;
	}
	catch (std::exception &e)
	{
		std::cout << "Error trying to read your answer \nError: "
			<< e.what() << std::endl;
	}

	return answer;
}
