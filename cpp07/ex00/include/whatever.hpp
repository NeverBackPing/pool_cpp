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

template <typename T> void swap(T& x, T& y)
{
	T tmp = 0;

	tmp = x;
	x = y;
	y = tmp;
}
