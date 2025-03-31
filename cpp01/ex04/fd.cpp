/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:32:17 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 13:21:38 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::fstream	open_input(char *filename)
{
	std::string	av1;
	std::string	av2 = "_replace";

	for (int i = 0; filename[i]; i++)
	{
		if (filename[i] == '.')
			break ;
		av1.push_back(filename[i]);
	}
	std::fstream fd_rpl(av1 + av2 + ".txt", std::ios::in | std::ios::out | std::ios::trunc);
	return (fd_rpl);
}

void	init_fd_rpl(std::fstream& fd_out, std::ifstream *fd_in, char **arg)
{
	std::string cmp;
	std::string line;
	std::string save = "";

	while (std::getline(*fd_in, line))
	{
		line += '\n';
		if (save.empty())
			save = line;
		else if (save.compare(line))
		{
			save.clear();
			save = line;
		}
		//std::cout << line;
		for (char c : line)
		{
			if (c != ' ' && c != '\t' && c != '\n')
				cmp.push_back(c);
			if (!cmp.compare(arg[2]))
			{
				fd_out << arg[3];
				cmp.clear();
				cmp = "";
			}
			if (c == ' ' || c == '\t' || c == '\n')
			{
				fd_out << cmp;
				cmp.clear();
				cmp = "";
				fd_out << c;
			}
		}
		fd_out << cmp;
		cmp.clear();
		cmp = "";
	}
	line.clear();
}

void	print_fd_out(std::fstream& fd_out)
{
	std::string line;

	while (std::getline(fd_out, line))
	{
		line += '\n';
		std::cout << line;
	}
	line.clear();
}
