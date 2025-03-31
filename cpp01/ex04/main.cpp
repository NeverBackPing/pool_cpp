/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:04:43 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 13:21:27 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"



int	main(int ac, char **av)
{
	if (ac != 4)
		return (bad_arg() , 0);
	std::ifstream fd(av[1]);
	if (!fd.is_open())
		return (fd_open_error_input(av[1]), 0);
	std::fstream fd_rpl = open_input(av[1]);
	if (!fd_rpl.is_open())
		return (fd_open_error_output(&fd, av[1]), 0);
	//std::cout << "\x1B[32mAfter replace\x1B[0m:\n\n";
	//std::cout << "----------------------------------\n";
	init_fd_rpl(fd_rpl, &fd, av);
	//std::cout << "----------------------------------\n";
	//std::cout << std::endl;
	//std::cout << std::endl;
	//fd_rpl.seekg(0, std::ios::beg);
	//std::cout << "\x1B[32mBefore replace\x1B[0m:\n\n";
	//std::cout << "----------------------------------\n";
	//print_fd_out(fd_rpl);
	//std::cout << "----------------------------------\n";
	//std::cout << std::endl;
	fd.close();
	fd_rpl.close();
}
