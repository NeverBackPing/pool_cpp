#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		Zombie(void){};
		~Zombie(void);
		void announce(void);
		void init_Name(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
