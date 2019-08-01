#pragma once

#include <iostream>
#include <string>

class Amplifier;

class DvdPlayer
{
private:
	Amplifier *amplifier;

public:
	void On()
	{
		std::cout << "Top-O-Line  DVD player on" << std::endl;
	}

	void Off()
	{
		std::cout << "Top-O-Line  DVD player off" << std::endl;
	}

	void Eject()
	{
		std::cout << "Top-O-Line  DVD player eject" << std::endl;
	}

	void Pause()
	{
		std::cout << "Top-O-Line  DVD player paused" << std::endl;
	}

	void Play(std::string movie)
	{
		std::cout << "Top-O-Line  DVD player playing "
			<< movie << std::endl;
	}

	
	void SetSurroundAudio()
	{
		std::cout << "Top-O-Line Amplifier surround sound on (5 speakers, 1 subwoofer)" << std::endl;
	}

	void SetTwoChannelAudio()
	{

	}

	void Stop(std::string movie)
	{
		std::cout << "Top-O-Line  DVD player stopped " 
			<< movie << std::endl;
	}
};
