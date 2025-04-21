/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:15:26 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/21 10:28:38 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include <ostream>

ClapTrap::ClapTrap()
: _name("Omen"), _energy(10), _hit(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name <<  " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _energy(10), _hit(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name <<  " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
: _name(copy._name), _energy(copy._energy), _hit(copy._hit), _attackDamage(copy._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called for " << copy._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_hit= copy._hit;
		_name = copy._name;
		_energy = copy._energy;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for "  << this->_name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	int tmp;

	tmp = 0;
	std::cout << "ClapTrap " << _name;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name;
	if (this->_hit <= 0)
		std::cout << " is already dead!" << std::endl;
	else if (_hit - (int)amount <= 0 || this->_hit <= 0)
	{
		std::cout << " take ";
		std::cout << "-" << amount << " and die" << std::endl;
		this->_hit = 0;
	}
	else
	{
		this->_hit -= amount;
		std::cout << " takes " << amount << " damage hit stay " << this->_hit << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name;
	if (this->_hit <= 0 || this->_energy < amount || this->_energy <= 0)
	{
		std::cout << " can't be repaired " << std::endl;
		return ;
	}
	if (this->_hit == 10)
	{
		std::cout << " can't be repaired, full heath 10 " << std::endl;
		return ;
	}
	this->_hit += amount;
	this->_energy -= amount;
	std::cout << " take +" << amount << " (" << _hit << ")";
	std::cout << " and lose -" << amount << " (" << _energy << ")";
	std::cout << std::endl;
}
