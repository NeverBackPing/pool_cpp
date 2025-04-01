/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:12:25 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/01 18:12:26 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Foo");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Buzz");
	zombie2->announce();
	randomChump("FooBuzz");
	delete zombie2;
	return (0);
}
