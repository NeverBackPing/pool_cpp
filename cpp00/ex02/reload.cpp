/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reload.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:57:06 by sjossain          #+#    #+#             */
/*   Updated: 2025/04/01 10:21:08 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	tm		*tm;
	time_t	now;

	now = time(0);
	tm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + tm->tm_year << 1 + tm->tm_mon << tm->tm_mday;
	std::cout << "_" ;
	std::cout << 0 + tm->tm_hour << 0 + tm->tm_min << tm->tm_sec ;
	std::cout << "]" ;
} 
Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts = _nbAccounts + 1;
	_totalAmount = _totalAmount + _amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}
