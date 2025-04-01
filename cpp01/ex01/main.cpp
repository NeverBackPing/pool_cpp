#include "Zombie.hpp"

int main(void)
{
	int	horde;

	horde = 10;

	Zombie *zombie = zombieHorde(horde, "zombie");

	for (int i = 0; i < horde; i++)
		zombie[i].announce();

	delete[] zombie;

	return (0);
}
