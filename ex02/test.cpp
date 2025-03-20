#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <functional>

class Account
{

public:

	typedef Account		t;

   static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	static void	displayAccountsInfos( void );
   void	displayStatus( void ) const;

private:

   static int	_nbAccounts;
   static int	_totalAmount;
   static int	_totalNbDeposits;
   static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );
   int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;
	Account( void );
};

int	Account::getNbAccounts( void )
{
   return (_nbAccounts);
}

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
	std::cout << "]";
}



void	Account::displayStatus(void)const
{
   static int passage = 0;

   if (passage == 0)
   {
      std::cout << "index:" << _accountIndex << ";";
      std::cout << "amount:" << _amount << ";";
      std::cout << "created" << std::endl;
   }
   else if (passage == 1)
   {
      NULL;
   }
   else
   {
      NULL;
   }
   passage++;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
}

int main()
{
   typedef std::vector<Account::t>	accounts_t;
   typedef std::vector<int>								  ints_t;
	//

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts(amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

   Account::displayAccountsInfos();
   std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
}