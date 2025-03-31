#include "sed.hpp"



int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "\x1B[31mError\x1B[0m: < ./replace ";
		std::cerr << "<file> ";
		std::cerr << "<word target> ";
		std::cerr << "<replace word> > \n";
		return (0);
	}

	std::string line;
	std::ifstream fd(av[1]);

	if (!fd.is_open())
	{
		std::cerr << "\x1B[31mError\x1B[0m: Can't open '";
		std::cerr << av[1] << "' !\n";
		return (0);
	}

	std::string cmp;
	std::string av1;
	std::string av2 = "_replace";

	for (int i = 0; av[1][i]; i++)
	{
		if (av[1][i] == '.')
			break ;
		av1.push_back(av[1][i]);
	}

	std::fstream fd_rpl(av1 + av2 + ".txt", std::ios::in | std::ios::out | std::ios::trunc);
	if (!fd_rpl.is_open())
	{
		fd.close();
		std::cerr << "\x1B[31mError\x1B[0m: Can't open '";
		std::cerr << av1 + av2 + ".txt" << "' !\n";
		return (0);
	}
	std::cout << "\x1B[32mBefore replace\x1B[0m:\n\n";


	std::string save = "";
	while (std::getline(fd, line))
	{
		if (save.empty())
		{
			line += '\n';
			save = line;
		}
		else if (save.compare(line))
		{
			save.clear();
			save = line;
		}
		std::cout << line;
		for (char c : line)
		{
			if (c != ' ' && c != '\t' && c != '\n')
				cmp.push_back(c);
			if (!cmp.compare(av[2]))
			{
				fd_rpl << av[3];
				cmp.clear();
				cmp = "";
			}
			if (c == ' ' || c == '\t' || c == '\n')
			{
				fd_rpl << cmp;
				cmp.clear();
				cmp = "";
				fd_rpl << c;
			}
		}
		fd_rpl << cmp;
		cmp.clear();
		cmp = "";
	}

	std::cout << std::endl;
	std::cout << std::endl;

	line.clear();
	fd_rpl.seekg(0, std::ios::beg);

	std::cout << "\x1B[32mAfter replace\x1B[0m:\n\n";

	while (std::getline(fd_rpl, line))
	{
		line += '\n';
		std::cout << line;
	}

	std::cout << std::endl;

	fd.close();
	fd_rpl.close();
}
