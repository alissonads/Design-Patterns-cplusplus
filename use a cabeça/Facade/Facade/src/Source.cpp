#include "concrete\facades\HomeTheaterFacade.h"

class HomeTheaterTestDrive
{
public:
	static void main(char **args)
	{
		try
		{
			Amplifier amp;
			Tuner *tuner = nullptr;
			DvdPlayer dvd;
			CdPlayer cd;
			Projector projector;
			Screen screen;
			TheaterLights lights;
			PopcornPopper popper;

			HomeTheaterFacade homeTheater = { &amp, tuner, &dvd,
											  &cd, &projector, &screen, &lights, &popper };

			homeTheater.WatchMovie("'Avengers Infinite War'");
			std::cout << std::endl;
			homeTheater.EndMovie();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
};

int main(int argc, char **argv)
{
	//int x = (2 * 52429) >> (16 + 3);
	////x = 2 - ((x << 3) + (x << 1));
	//std::cout << x << std::endl;

	HomeTheaterTestDrive::main(argv);

	system("pause");
	return 0;
}