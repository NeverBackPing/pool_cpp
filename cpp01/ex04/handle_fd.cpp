/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_fd.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:04:45 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 13:16:15 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"


void	bad_arg(void)
{
	std::cerr << "\x1B[31mError\x1B[0m: < ./replace ";
	std::cerr << "<file> ";
	std::cerr << "<word target> ";
	std::cerr << "<replace word> > \n";
}

void	fd_open_error_input(char *filename)
{
	std::cerr << "\x1B[31mError\x1B[0m: Can't open '";
	std::cerr << filename << "' !\n";
}

void	fd_open_error_output(std::ifstream *fd, char *filename)
{
	std::string	av1;
	std::string	av2 = "_replace";

	fd->close();
	for (int i = 0; filename[i]; i++)
	{
		if (filename[i] == '.')
			break ;
		av1.push_back(filename[i]);
	}
	std::cerr << "\x1B[31mError\x1B[0m: Can't open '";
	std::cerr << av1 + av2 + ".txt" << "' !\n";
}
