/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:06:09 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/21 10:54:29 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void)
{
	ClapTrap player1("Jett");
	ScavTrap player2("Reyna");
	ClapTrap player3("Kayo");
	ScavTrap player4("Cypher");
	//ScavTrap player5 = player4;

	player1.attack("Reyna");
	player1.attack("Kayo");

	for (int i = 0; i < 10; i++)
		player1.attack("Cypher");

	player1.attack("Cypher");

	player2.takeDamage(30);
	player2.takeDamage(50);
	player2.takeDamage(30);
	player2.takeDamage(20);

	player3.beRepaired(30);
	player3.takeDamage(10);
	player3.beRepaired(20);

	player4.beRepaired(1);
	for (int i = 0; i < 10; i++)
		player4.attack("Jett");
	player4.takeDamage(200);
	player4.beRepaired(1);
	player4.guardGate();

	/*player5.beRepaired(1);
	for (int i = 0; i < 10; i++)
		player5.attack("Jett");
	player5.takeDamage(200);
	player5.beRepaired(1);
	player5.guardGate();*/

}
