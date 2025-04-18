#include "ClapTrap.h"
#include "FragTrap.h"

int main(void)
{
	ClapTrap player1("Jett");
	ClapTrap player2("Reyna");
	ClapTrap player3("Kayo");
	FragTrap player4("Cypher");

	player1.attack("Reyna");
	player1.attack("Kayo");

	for (int i = 0; i < 10; i++)
		player1.attack("Cypher");

	player1.attack("Cypher");

	player2.takeDamage(3);
	player2.takeDamage(5);
	player2.takeDamage(3);
	player2.takeDamage(2);

	player3.beRepaired(3);
	player3.takeDamage(10);
	player3.beRepaired(2);

	player4.beRepaired(1);
	for (int i = 0; i < 10; i++)
		player4.attack("Jett");
	player4.takeDamage(2);
	player4.beRepaired(1);
	player4.guardGate();

}
