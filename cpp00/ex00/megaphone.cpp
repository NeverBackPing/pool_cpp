/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:35 by sjossain          #+#    #+#             */
/*   Updated: 2025/02/26 11:57:36 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	ft_megaphone(char **str)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (isalpha(str[i][j]))
			{
				c = toupper(str[i][j]);
				std::cout << c;
			}
			else
				std::cout << str[i][j];
			j++;
		}
		i++;
	}
	std::cout << "\n";
}


int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (-1);
	}
	ft_megaphone(av);
	return (0);
}
