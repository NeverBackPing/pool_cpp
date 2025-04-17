/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:15:26 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/17 15:52:35 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include <ostream>

ClapTrap::ClapTrap(std::string name)
: _name(name), _energy(10), _hit(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << "Can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name;
	std::cout << " attacks " << target;
	std::cout << " causing " << _attackDamage;
	std::cout << " points of damage !" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit <= 0 || _energy < amount || _energy <= 0)
	{
		std::cout << "Can't be repaired " << std::endl;
		return ;
	}
	if (_hit == 10)
	{
		std::cout << "Can't be repaired, full heath 10 " << std::endl;
		return ;
	}
	_hit += amount;
	_energy -= amount;
	std::cout << "ClapTrap " << _name;
	std::cout << " take +" << amount << " (" << _hit << ")";
	std::cout << " and lose -" << amount << " (" << _energy << ")";
	std::cout << std::endl;
}
