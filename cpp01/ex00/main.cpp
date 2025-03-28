#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Foo");
	Zombie *zombie2 = newZombie("Buzz");
	zombie1.announce();
	zombie2->announce();
	randomChump("FooBuzz");
	delete zombie2;
    return (0);
}