/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:37:09 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 15:16:12 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(){
	return (_nbAccounts);
}

int	Account::getTotalAmount(){
	return (_totalAmount);
}

int	Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);	
}

void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return false;
}

int		Account::checkAmount()const{
	return (_amount);
}

void	Account::displayStatus()const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
	time_t	now = time(0);
	tm		*ltm;

	ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << (ltm->tm_mon + 1 < 10 ? "0" : "") << ltm->tm_mon + 1;
	std::cout << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday << "_" << ltm->tm_hour;
	std::cout << ltm->tm_min << ltm->tm_sec << "] ";
}