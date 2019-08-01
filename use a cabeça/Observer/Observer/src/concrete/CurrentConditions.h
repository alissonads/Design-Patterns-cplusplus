#pragma once

#include "..\abstract\Observer.h"
#include "..\abstract\DisplayElement.h"

//class Subject;

class CurrentConditions : public Observer,
						  public DisplayElement
{
private:
	float temperature;
	float humidity;
	//Subject *weatherData;

public:
	CurrentConditions(/*Subject *weatherData*/);

	virtual void Update(const Subject *subject, 
			            void *args);
	virtual void Display();
};
