#include "../includes/ScalarConverte.hpp"

static bool isChar(std::string const &s)
{
	return s.length() == 3 && s[0] == '\'' && s[2] == '\'';
}

static bool isInt(std::string const &s)
{
	char *end;
	std::strtol(s.c_str(), &end, 10);
	return *end == '\0';
}

static bool isFloat(std::string const &s)
{
	if (s == "+inff" || s == "-inff" || s == "nanf")
		return true;
	char *end;
	std::strtof(s.c_str(), &end);
	return *end == 'f' && *(end + 1) == '\0';
}

static bool isDouble(std::string const &s)
{
	if (s == "+inf" || s == "-inf" || s == "nan")
		return true;
	char *end;
	std::strtod(s.c_str(), &end);
	return *end == '\0';
}

static Type detectType(std::string const &s)
{
	if (isChar(s))
		return CHAR;
	else if (isInt(s))
		return INT;
	else if (isFloat(s))
		return FLOAT;
	else if (isDouble(s))
		return DOUBLE;
	else
		return INVALID;
}

static void printChar(double val)
{
	if (val != val || val < 0 || val > 127)
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (!std::isprint(static_cast<int>(val)))
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
	}
}

static void printInt(double val)
{
	if (val != val || val < static_cast<double>(INT_MIN) || val > static_cast<double>(INT_MAX))
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	}
}

static void printFloat(double val)
{
	float f = static_cast<float>(val);
	std::cout << "float: " << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

static void printDouble(double val)
{
	std::cout << "double: " << val;
	if (val - static_cast<int>(val) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

std::string convertToString(char* a, int size)
{
	int i;
	std::string s = "";

	for (i = 0; i < size; i++)
		s = s + a[i];

	return (s);
}

void ScalarConverte::convert(std::string literal)
{
	Type type = detectType(literal);
	double val;

	switch (type)
	{
		case CHAR:
			val = static_cast<double>(literal[1]);
			break;
		case INT:
			val = static_cast<double>(std::atoi(literal.c_str()));
			break;
		case FLOAT:
			val = static_cast<double>(std::strtof(literal.c_str(), NULL));
			break;
		case DOUBLE:
			val = std::strtod(literal.c_str(), NULL);
			break;
		default:
			std::cout << "Invalid literal" << std::endl;
			return;
	}
	printChar(val);
	printInt(val);
	printFloat(val);
	printDouble(val);
}
