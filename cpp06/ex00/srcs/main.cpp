# include <cstdio>
# include <bits/stdc++.h>
# include "../includes/ScalarConverte.hpp"


int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		std::cerr << "\033[0;31mError: Too many argument\033[0m" << std::endl;
		return (1);
	}
	ScalarConverte test;

	test.convert(convertToString(av[1], strlen(av[1])));
	return (0);
}
