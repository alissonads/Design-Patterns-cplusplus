#pragma once

class Quackable;
class Goose;

class AbstractGooseFactory
{
public:
	virtual ~AbstractGooseFactory() {}
	virtual Goose *createGoose() = 0;
	virtual Quackable *createGooseAdapter() = 0;
};
