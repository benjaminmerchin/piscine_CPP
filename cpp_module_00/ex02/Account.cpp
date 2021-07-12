#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	_totalAmount += initial_deposit;
}

Account::~Account( void ){
	;
}

// int	Sample::getNbInst(void) {
// 	return Sample::_nbInst;
// }

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
	std::cout << "REMPLIR LES INFOS" << std::endl;//
}

void	Account::makeDeposit( int deposit ){
	(void)deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal ){
	(void)withdrawal;
	return 0;
}

int		Account::checkAmount( void ) const{
	return 0;
}

void	Account::displayStatus( void ) const{
	;
}

void	Account::_displayTimestamp( void ){
	;
}
