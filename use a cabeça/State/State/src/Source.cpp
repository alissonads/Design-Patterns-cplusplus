#include <iostream>
#include "comcrete\GumballMachine.h"
#include "Util\Util.h"
//#include "ex\GumballMachine.h"

class GumballMachineTestDrive
{
public:
	static void main(int argc, char **argv)
	{
		try
		{
			GumballMachine gumballMachine(5);

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;

			gumballMachine.insertQuarter();
			gumballMachine.turnCrank();

			std::cout << gumballMachine << std::endl;
		}
		catch(UnsupportedOperationException &e)
		{}
	}
};

int main(int argc, char **argv)
{
	GumballMachineTestDrive::main(argc, argv);
	system("pause");
	return 0;
}