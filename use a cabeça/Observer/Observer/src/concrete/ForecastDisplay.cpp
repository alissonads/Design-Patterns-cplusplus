#include "ForecastDisplay.h"
#include "..\concrete\WeatherData.h"

ForecastDisplay::ForecastDisplay(Subject *weatherData) :
				 Observer(), 
				 DisplayElement(),
				 weatherData(weatherData)
{}

void ForecastDisplay::Display()
{
}
