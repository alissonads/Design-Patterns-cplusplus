#pragma once

#include "..\abstract\Observer.h"
#include "..\abstract\DisplayElement.h"

class ThirdPartyDisplay : public Observer,
						  public DisplayElement
{
public:
	template<typename TArgs>
	virtual void Update(const Subject *subject, std::initializer_list<TArgs> args);
	virtual void Display();
};

template<typename TArgs>
inline void ThirdPartyDisplay::Update(const Subject * subject, std::initializer_list<TArgs> args)
{
}
