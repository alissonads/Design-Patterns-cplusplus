#pragma once

#include "..\abstract\CaffeineBeverage.h"

class Tea : public virtual CaffeineBeverage
{
protected:
	virtual void Brew() const;
	virtual void AddCondiments() const;
	virtual bool CustomerWantsCondiments() const;

	char GetUserInput() const;
};
