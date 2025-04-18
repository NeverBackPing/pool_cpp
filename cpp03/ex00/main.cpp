/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossaint@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:15:30 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/18 12:01:17 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
	ClapTrap player1("Jett");
	ClapTrap player2("Reyna");
	ClapTrap player3("Kayo");
	ClapTrap player4("Cypher");

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
}
