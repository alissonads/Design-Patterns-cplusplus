#pragma once

#include "..\abstract\Observer.h"
#include "..\abstract\DisplayElement.h"

//class Subject;

class StatisticsDisplay : public Observer,
						 public DisplayElement
{
private:
	float temperature;
	float max;
	float min;
	//Subject *weatherData;

public:
	StatisticsDisplay(/*Subject *_weatherData*/);

	virtual void Update(const Subject *subject, 
						void *args);

	virtual void Display();
};

