#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	this->_name = "Omen";
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
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
