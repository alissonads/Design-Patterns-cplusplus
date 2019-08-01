#include <iostream>
#include "concrete\Coffee.h"
#include "concrete\Tea.h"


class CaffeineBeverageTest
{
public:
	static void Main(char **args)
	{
		Coffee().PrepareRecipe();
		
		std::cout << std::endl;

		Tea().PrepareRecipe();
	}
};

int main(int argc, char **argv)
{
	CaffeineBeverageTest::Main(argv);
	system("pause");
	return 0;
}