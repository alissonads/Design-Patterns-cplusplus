#pragma once

#include "..\..\abstract\Object.h"

class Light : public Object
{
public:
	Light(const std::string name);
	~Light();

	void On() const;
	void Off() const;
};
