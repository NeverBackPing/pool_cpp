/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:12:34 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/01 21:54:37 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroyed '" << this->_name << "'" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";
}
