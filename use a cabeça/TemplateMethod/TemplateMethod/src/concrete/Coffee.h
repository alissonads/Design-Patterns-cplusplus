#pragma once

#include "..\abstract\CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
protected:
	virtual void Brew() const;
	virtual void AddCondiments() const;

};
