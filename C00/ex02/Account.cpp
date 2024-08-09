/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:10:24 by vguidoni          #+#    #+#             */
/*   Updated: 2023/08/26 15:10:27 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
    return(_nbAccounts);
}

int Account::getTotalAmount(){
    return(_totalAmount);
}

int Account::getNbDeposits(){
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(){
    return(_totalNbWithdrawals);
}


void    Account::_displayTimestamp(){
    time_t  dataodierna;
    char size[100]; //definisce la grandezza della stringa che voglio creare
    time(&dataodierna); //rende in secondi il tempo trascorso dal 1970 1 gennaio
    localtime(&dataodierna);//scompone in giorni secondi ecc...
    strftime(size, 100, "\033[37m[%Y%m%d_%I%M%S] \033[37m", localtime(&dataodierna)); // fomarnatto a mio piacimento il 
    std::cout << size;                                                               // format, le date ore ecc..
}

Account::Account(int initial_deposit){
    _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _totalNbDeposits += _nbDeposits;
    _displayTimestamp();
    std::cout << "\033[32mindex:" << _accountIndex << ";" << "amount:"\
    << _amount << ";" << "created\033[37m" << std::endl;
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "\033[34maccoutns:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:"\
     << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << "\033[27m" << std::endl;
}

void    Account::displayStatus()const{
    _displayTimestamp();
    std::cout << "\033[33mindex:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" \
    << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << "\033[37m" << std::endl;

}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "\033[35mindex" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits += _nbDeposits;
    std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << "\033[37m" << std::endl;
    _totalAmount += deposit;
}

int Account::checkAmount(void)const{
    return(_amount);
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "\033[36mindex:" << _accountIndex << ";" << "p_amount" << _amount << ";";
    if(withdrawal > checkAmount() || withdrawal <= 0)
    {
        std::cout << "withdrawal:" << "refused\033[37m" << std::endl;
        return(false);
    }
    _amount -= withdrawal;// cifra che detraggo dal singolo utente
    _nbWithdrawals++;//il numero di prelievi fatti viene incrementato 
    std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";" \
    << "nb_withdrawals" << _nbWithdrawals << "\033[37m" << std::endl;
    _totalNbWithdrawals += _nbWithdrawals;
    _totalAmount -= withdrawal;
    return(true);
}

Account::~Account(){
    _displayTimestamp();
    std::cout << "\033[31mindex:" << _accountIndex << ";" << "amount:"\
    << _amount << ";" << "closed\033[37m" << std::endl;
}
