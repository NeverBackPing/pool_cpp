#include "../include/iter.hpp"

int main()
{
	std::cout << "\33[0;34m[Multiply two (FLOAT)]\33[0m" << std::endl;
	float arr_float[] = {1.9, 2.6, 3.8, 4.7, 5.1};
	iter(arr_float, 5, MulToTwo<float>);
	iter(arr_float, 5, strcat<float>);
    std::cout <<  std::endl;

	std::cout << "\33[0;34m[Upper (STRING)]\33[0m" << std::endl;
	std::string strs[] = {"hello", "world", "builder"};
	iter(strs, 3, CharToUpper<std::string>);
	iter(strs, 3, strcat<std::string>);
    std::cout <<  std::endl;

	std::cout << "\33[0;34m[Multiply two (INT)]\33[0m" << std::endl;
	int arr_int[] = {1, 2, 3};
	iter(arr_int, 3, MulToTwo<int>);
	iter(arr_int, 3, strcat<int>);
    std::cout <<  std::endl;

	return 0;
}