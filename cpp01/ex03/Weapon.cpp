/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:54:42 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/31 11:54:43 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _weapon)
{
	this->weapon = _weapon;
}

void Weapon::setType(std::string _weapon)
{
	this->weapon = _weapon;
}

std::string Weapon::getType(void)
{
	return (weapon);
}

Weapon::~Weapon(void)
{
	std::cout << "Detele weapon: ";
	std::cout << this->weapon << std::endl;
}
