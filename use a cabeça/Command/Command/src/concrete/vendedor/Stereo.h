#pragma once

#include "..\..\abstract\Object.h"

class Stereo : public Object
{
public:
	Stereo(const std::string name);
	~Stereo();

	void On() const;
	void Off() const;
	void SetCd() const;
	void SetDvd() const;
	void SetRadio() const;
	void SetVolume(int v) const;
};

