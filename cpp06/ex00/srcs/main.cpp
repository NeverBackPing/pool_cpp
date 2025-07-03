# include <cstdio>
# include "../includes/ScalarConverte.hpp"


int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		if (ac < 2)
			std::cerr << "\033[0;31mError: no input find\033[0m" << std::endl;
		else
			std::cerr << "\033[0;31mError: Too many argument\033[0m" << std::endl;
		return (1);
	}
	ScalarConverte convert;
	convert.convert(av[1]);
	return (0);
}
