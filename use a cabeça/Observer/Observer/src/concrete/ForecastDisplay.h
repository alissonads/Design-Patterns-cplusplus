#pragma once

#include "..\abstract\Observer.h"
#include "..\abstract\DisplayElement.h"

class Subject;

class ForecastDisplay : public Observer,
						public DisplayElement
{
private:
	Subject *weatherData;

public:
	ForecastDisplay(Subject *weatherData);

	template<typename TArgs>
	virtual void Update(const Subject *subject, std::initializer_list<TArgs> args);
	virtual void Display();
};

template<typename TArgs>
inline void ForecastDisplay::Update(const Subject * subject, std::initializer_list<TArgs> args)
{
}
