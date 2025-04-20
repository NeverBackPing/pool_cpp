/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:05:53 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/20 19:40:00 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap()
: ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " Construtor called !" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " Construtor called !" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	if (this != &copy)
	{
		_hit = copy._hit;
		_name = copy._name;
		_energy = copy._energy;
		_attackDamage = copy._attackDamage;
	}
	std::cout << "ScavTrap Copy constructor called for " << copy._name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for "  << this->_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	int tmp;

	tmp = 0;
	std::cout << "ScvaTrap " << _name;
	if (this->_energy <= 0)
	{
		std::cout << " can't attack not energy" << std::endl;
		this->_energy = 0;
		return ;
	}
	while (tmp < this->_energy)
	{
		if (tmp + 1 == this->_energy)
			break ;
		tmp++;
	}
	tmp = tmp - this->_energy;
	std::cout << " attacks " << target;
	std::cout << " causing " << tmp;
	std::cout << " points of damage !" << std::endl;
	--this->_energy;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " active guard mode" << std::endl;
}
