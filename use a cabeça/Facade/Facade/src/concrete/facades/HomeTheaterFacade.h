#pragma once

#include "..\SubSystems.h"

class HomeTheaterFacade
{
private:
	Amplifier *amp;
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;
	Projector *projector;
	Screen *screen;
	TheaterLights *lights;
	PopcornPopper *popper;
	std::string movie;

public:
	HomeTheaterFacade(Amplifier *amp,
					  Tuner *tuner,
					  DvdPlayer *dvd,
					  CdPlayer *cd,
					  Projector *projector,
					  Screen *screen,
					  TheaterLights *lights,
					  PopcornPopper *popper) :
		amp(amp), tuner(tuner), dvd(dvd),
		cd(cd), projector(projector),
		screen(screen), lights(lights),
		popper(popper)
	{}

	void WatchMovie(std::string _movie)
	{
		std::cout << "Get ready to watch a movie..." << std::endl;

		popper->On();
		popper->Pop();
		lights->Dim(10);
		screen->Down();
		projector->On();
		projector->WideSceenMode();
		amp->On();
		amp->SetDvd(dvd);
		amp->SetSurroundSound();
		amp->SetVolume(5);
		dvd->On();
		dvd->Play(_movie);
		movie = _movie;
	}

	void EndMovie()
	{
		std::cout << "Shutting movie theater down..." << std::endl;

		popper->Off();
		lights->On();
		screen->Up();
		projector->Off();
		projector->Off();
		amp->Off();
		dvd->Stop(movie);
		dvd->Eject();
		dvd->Off();
	}
};
