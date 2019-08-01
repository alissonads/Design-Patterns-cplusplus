#pragma once

#include <initializer_list>

class Subject;

class Observer
{
public:
	virtual void Update(const Subject *subject, 
						void *args) = 0;
};
