#include <iostream>
#include "concrete\CurrentConditions.h"
#include "concrete\WeatherData.h"
#include "concrete\StatisticsDisplay.h"

int main()
{
	WeatherData weatherData;

	CurrentConditions currentDisplay;
	StatisticsDisplay statisticsDisplay;

	weatherData.RegisterObserver(&currentDisplay);
	weatherData.RegisterObserver(&statisticsDisplay);

	weatherData.Bind();
	weatherData.SetMeasurements(80, 65, 30.4f);
	weatherData.SetMeasurements(82, 70, 29.2f);
	weatherData.SetMeasurements(78, 90, 29.2f);
	weatherData.Unbind();

	system("pause");
	return 0;
}