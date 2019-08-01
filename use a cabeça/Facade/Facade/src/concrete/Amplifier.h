#pragma once

#include <iostream>

class Tuner;
class DvdPlayer;
class CdPlayer;

class Amplifier
{
private:
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;

public:
	void On()
	{
		std::cout << "Top-O-Line Amplifier on" << std::endl;
	}

	void Off()
	{
		std::cout << "Top-O-Line Amplifier off" << std::endl;
	}

	void SetCd(CdPlayer *_cd)
	{
		std::cout << "Top-O-Line Amplifier setting CD player to Top-o-Line CD Player" << std::endl;
		cd = _cd;
	}

	void SetDvd(DvdPlayer *_dvd)
	{
		std::cout << "Top-O-Line Amplifier setting DVD player to Top-o-Line DVD Player" << std::endl;
		dvd = _dvd;
	}

	void SetStereoSound()
	{
		
	}

	void SetSurroundSound()
	{
		std::cout << "Top-O-Line Amplifier surround sound on (5 speakers, 1 subwoofer)" << std::endl;
	}

	void SetTuner()
	{

	}

	void SetVolume(int v)
	{
		std::cout << "Top-O-Line Amplifier setting volume to " 
			<< v << std::endl;
	}
};
