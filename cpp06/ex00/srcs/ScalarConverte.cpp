#include "../includes/ScalarConverte.hpp"


void ScalarConverte::convert(char *data)
{
	char *tmp_char = data;
	int tmp_int = (int)data;
	std::cout << "char: "<< tmp_char << std::endl;
	std::cout << "int: "<< tmp_int << std::endl;
}
