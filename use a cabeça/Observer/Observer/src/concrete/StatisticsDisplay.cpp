#include "StatisticsDisplay.h"
#include "WeatherData.h"
#include <iostream>

StatisticsDisplay::StatisticsDisplay(/*Subject *_weatherData*/) :
				  //weatherData(_weatherData),
				  temperature(0.0f),
				  min(0.0f),
				  max(0.0f)
{
	//weatherData->RegisterObserver(this);
}

void StatisticsDisplay::Update(const Subject *subject, 
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
		}
	}
	else
	{
		std::vector<float> aux = *static_cast<std::initializer_list<float>*>(args);
		temperature = static_cast<float>(aux[0]);
	}

	Display();
}

void StatisticsDisplay::Display()
{
	max = std::fmax(temperature, max);
	min = (min < 0.001f && min > -0.001f)? 
		   std::fmin(temperature, max) :
		   std::fmin(temperature, min);

	float avg = min + (max - min) / 2;

	std::cout << "AVG/MAX/MIN temperature = "
		<< avg << "/" << max << "/" << min << std::endl;
}
