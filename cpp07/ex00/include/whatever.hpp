#pragma once

#include <iostream>
#include <string>

template <typename T> T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

template <typename T> T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T> T swap(T& x, T& y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
	std::cout << "testsssssssss\n";

	return (0);
}
