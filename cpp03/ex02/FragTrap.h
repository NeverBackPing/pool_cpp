#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& Copy);
		~FragTrap();

		FragTrap& operator=(const FragTrap& Copy);

		void attack(std::string const & target);
		void highFivesGuys();
};

#endif
