#pragma once

#include "..\..\abstract\Object.h"

class GarageDoor :
	public Object
{
public:
	GarageDoor(const std::string name);
	~GarageDoor();

	void Up() const;
	void Down() const;
	void Stop() const;
	void LightOn();
	void LightOf();
};

