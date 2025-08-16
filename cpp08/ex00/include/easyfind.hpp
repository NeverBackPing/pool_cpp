#pragma once

#include <iostream>
#include <map>

class ExceptionHandling: public std::exception
{
	virtual const char * what() const throw()
	{
		return ("No find");
	}
} Handling;

template <typename T>
std::string easyfind(T container, int key)
{
	std::map<int, <dynamic_cast>container> it = container.find(key);
	if  (it == container.end())
		throw ExceptionHandling();
	return ("Find");
}
