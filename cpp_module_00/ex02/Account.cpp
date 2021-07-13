#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::_amount << ";created" << std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	Account::_totalAmount += deposit;
	Account::_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	Account::_amount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";withdrawal:";
	if (Account::_amount < withdrawal){
		std::cout << "refused";
	}
	else {
		Account::_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << withdrawal;
		std::cout << ";amount:" << Account::_amount;
		std::cout << ";nb_withdrawals:" << Account::_nbDeposits;
	}
	std::cout << std::endl;
	return 0;
}

int		Account::checkAmount( void ) const{
	return Account::_amount;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	std::cout << '[' << std::setfill('0')
		<< timePtr->tm_year + 1900
		<< std::setw(2) << timePtr->tm_mon + 1
		<< std::setw(2) << timePtr->tm_mday << '_'
		<< std::setw(2) << timePtr->tm_hour
		<< std::setw(2) << timePtr->tm_min
		<< std::setw(2) << timePtr->tm_sec << "] ";
	
	//std::cout << "[19920104_091532] ";
}
