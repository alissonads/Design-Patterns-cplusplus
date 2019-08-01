#pragma once

#include "..\..\abstract\Object.h"

typedef enum
{
	OFF,
	LOW,
	MEDIUM,
	HIGH
} Speed;

class CeilingFan : public Object
{
private:
	Speed speed;

public:
	CeilingFan(const std::string name);
	~CeilingFan();

	inline Speed GetSpeed() const { return speed; }

	void High();
	void Medium();
	void Low();
	void Off();
};
