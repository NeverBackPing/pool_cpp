/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:15:26 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/17 12:52:00 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name)
: _name(name), _energy(10), _hit(10), _damage(0)
{

}

ClapTrap::~ClapTrap()
{
}

void attack(const std::string& target)
{

}

void beRepaired(unsigned int amount)
{
	
}
