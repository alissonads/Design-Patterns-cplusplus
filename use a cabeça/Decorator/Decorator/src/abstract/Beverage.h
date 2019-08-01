#pragma once

#include <string>

enum SizeBeverage
{
	TALL,
	GRANDE,
	VENTI
};

class Beverage
{
protected:
	std::string description;
	SizeBeverage size;

public:
	Beverage(std::string description = "Unknown Beverage",
		     const SizeBeverage _size = TALL) : 
		description(description), size(_size) {}

	virtual ~Beverage() {}

	void SetDescription(std::string _description) { description = _description; }
	void SetSize(const SizeBeverage _size) { size = _size; }

	virtual std::string GetDescription() const { return description; }
	SizeBeverage GetSize() const { return size; }

	virtual float Cost() const = 0;
};
