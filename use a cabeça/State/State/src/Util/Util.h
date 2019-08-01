#pragma once

#include <exception>
#include<string>

class UnsupportedOperationException : public std::exception
{
public:
	UnsupportedOperationException() throw() :
		std::exception("Unsupported Operation Exception", 1){}

	UnsupportedOperationException(const std::string message) :
		std::exception(message.c_str()) {}

	UnsupportedOperationException(const char *message) :
		std::exception(message) {}

	~UnsupportedOperationException() {}
};
