#pragma once

#include "..\abstract\AbstractSubject.h"
#include <vector>
#include <initializer_list>

class WeatherData : public AbstractSubject
{
private:
	std::vector<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData();
	~WeatherData();

	void SetMeasurements(const float _temperature,
						 const float _humidity,
						 const float _pressure);

	float GetTemperature() const;
	float GetHumidity() const;
	float GetPressure() const;

	std::initializer_list<float> GetArgs() const;

	virtual void Apply();
}; 
