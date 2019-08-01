#include "WeatherData.h"
#include "..\abstract\Observer.h"
#include <memory>

WeatherData::WeatherData() :
			 temperature(0.0f),
			 humidity(0.0f),
			 pressure(0.0f)
{}

WeatherData::~WeatherData()
{}

float WeatherData::GetTemperature() const
{
	return temperature;
}

float WeatherData::GetHumidity() const
{
	return humidity;
}

float WeatherData::GetPressure() const
{
	return pressure;
}

std::initializer_list<float> WeatherData::GetArgs() const
{
	return {temperature, humidity, pressure};
}

void WeatherData::SetMeasurements(const float _temperature, const float _humidity, const float _pressure)
{
	temperature = _temperature;
	humidity = _humidity;
	pressure = _pressure;

	Apply();
}

void WeatherData::Apply()
{
	NotifyObservers();
}
