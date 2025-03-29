#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde_zombie;
    static int num_zombie = 0;

    horde_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
    {
		horde_zombie[i].init_Name(name + std::to_string(num_zombie++));
    }
	return (horde_zombie);
}