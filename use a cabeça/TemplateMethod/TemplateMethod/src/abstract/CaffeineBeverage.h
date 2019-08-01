#pragma once

class CaffeineBeverage
{
public:
	void const PrepareRecipe() const;

protected:
	void BoilWater() const;
	void PourInCup() const;
	//gancho
	virtual bool CustomerWantsCondiments() const;

	virtual void Brew() const = 0;
	virtual void AddCondiments() const = 0;
};
