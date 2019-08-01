#pragma once

#include <string>

class Object
{
protected:
	std::string name;

public:
	Object(const std::string _name) : name(_name){}
	virtual ~Object() {}

	inline void SetName(const std::string _name) { name = _name; }
	inline std::string GetName() const { return name; }
};
