#include "Account.hpp"

void	Account::_displayTimestamp(void)
{
	tm		*ltm;
	time_t	now;

	now = time(0);
	ltm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday;
	std::cout << "_" ;
	std::cout << 0 + ltm->tm_hour << 0 + ltm->tm_min << ltm->tm_sec ;
	std::cout << "]" ;
}

void	Account::displayStatus(void)const
{
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;

	}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();

}