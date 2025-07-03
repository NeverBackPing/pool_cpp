#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>

enum Type
{ 
	CHAR, 
	INT, 
	FLOAT, 
	DOUBLE, 
	INVALID 
};

class ScalarConverte
{
	public:
		static void convert(std::string literal);
};
