#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts) , _amount(initial_deposit) , _nbDeposits(0) , _nbWithdrawals(0), _nbcheckAmountCalls(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created"
	<< std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	return;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount << ";deposits:"
	<< Account::_totalNbDeposits << ";withdrawals:"
	<< Account::_totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amout:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex	<< ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";amout:" << this->_amount
	<< ";nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	this->_nbcheckAmountCalls++;
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";deposits:"
	<< this->_nbDeposits << ";withdrawals:"
	<< Account::_nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	timestamp;
	tm		*time;

	std::time(&timestamp);
	time = localtime(&timestamp);
	std::cout << std::setfill('0') << "["
	<< time->tm_year + 1900
	<< std::setw(2) << time->tm_mon + 1
	<< std::setw(2) << time->tm_mday << "_"
	<< std::setw(2) << time->tm_hour
	<< std::setw(2) << time->tm_min
	<< std::setw(2) << time->tm_sec << "] ";
}

void	Account::displaynNbcheckAmountCalls( void ) const
{
	std::cout << "index:" << this->_accountIndex
	<< "; NbcheckAmountCalls: " << this->_nbcheckAmountCalls << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
