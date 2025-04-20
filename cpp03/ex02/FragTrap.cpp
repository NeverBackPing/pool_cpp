/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:05:34 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/20 21:52:09 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap()
{
	this->_name = "Omen";
	std::cout << "FragTrap " << this->_name <<  " constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& Copy)
: ClapTrap(Copy)
{
	std::cout << "FragTrap copy constructor called on " << Copy._name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name;
	if (this->_energy > 0)
	{
		this->_energy -= 5;
		std::cout << " attacked " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << " has too little energy points to attack." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " : thanks teammate Good game" << std::endl;
}
