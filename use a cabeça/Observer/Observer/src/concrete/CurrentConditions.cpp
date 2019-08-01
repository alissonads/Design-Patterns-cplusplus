#include "CurrentConditions.h"
#include "WeatherData.h"
#include <iostream>

CurrentConditions::CurrentConditions(/*Subject *weatherData*/) :
				   Observer(), 
				   DisplayElement(),
				   temperature(0.0f), 
				   humidity(0.0f)
				   //weatherData(weatherData)
{
	//weatherData->RegisterObserver(this);
}

void CurrentConditions::Update(const Subject *subject, 
							   void *args)
{
	if (!args)
	{
		const WeatherData *auxWeatherData = dynamic_cast<const WeatherData*>(subject);
		
		if (!auxWeatherData)
		{
			throw std::exception("Incompatible Subject!");
		}
		else
		{
			temperature = auxWeatherData->GetTemperature();
			humidity = auxWeatherData->GetHumidity();
		}
	}
	else
	{
		std::vector<float> aux = *static_cast<std::initializer_list<float>*>(args);
		
		temperature = static_cast<float>(aux[0]);
		humidity = static_cast<float>(aux[1]);
	}

	Display();
}

void CurrentConditions::Display()
{
	std::cout << "Current conditions: " << temperature
			  << "F degrees and " << humidity << "% humidity\n";
}
