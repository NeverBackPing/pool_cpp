/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:51:23 by sjossain          #+#    #+#             */
/*   Updated: 2025/03/11 11:59:07 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

std::string	Contact::getFirstName()const
{
	return (first_name);
}

std::string	Contact::getLastName()const
{
	return (last_name);
}

std::string	Contact::getNickname()const
{
	return (nickname);
}

int	Contact::getNumber()const
{
	return (number);
}

std::string	Contact::getDarkSecret()const
{
	return (dark_secret);
}
