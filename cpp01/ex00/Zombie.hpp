#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);

	private:
		int	_age;
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
