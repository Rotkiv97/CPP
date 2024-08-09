/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:09:38 by vguidoni          #+#    #+#             */
/*   Updated: 2023/08/26 15:09:41 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include <iostream>
#include <cctype>
/* victor studia i metodi golione */

/*richiamo un Contatto che e' l'oggetto  in altra classe */


void PhoneBook::SetI(int v)
{
	/* 	nalla funzione set vado ad attribuire il valore dichiarato 
		alla variabile che voglio modificare*/
	this->i = v; 
}

int PhoneBook::GetI()
{
	/*  */
	return(i);
}
		/*argomento nascosto = this*/
PhoneBook::PhoneBook(){
	i = 0;
}
PhoneBook::~PhoneBook(){

}

Contatto::Contatto()
{

}
Contatto::~Contatto()
{

}

std::string Contatto::GetName(){
	return(name);
}

std::string Contatto::GetLastName(){
	return(lastname);
}

std::string Contatto::GetNikName(){
	return(nikname);
}

std::string Contatto::GetNumber(){
	return(number);
}

std::string Contatto::GetSecreat(){
	return(secret);
}

void Contatto::SetName(std::string tname){
	this->name = tname;
}

void Contatto::SetLastName(std::string tlastname){
	this->lastname = tlastname;
}

void Contatto::SetNikName(std::string tnikname){
	this->nikname = tnikname;
}

void Contatto::SetNumber(std::string tnumber){
	this->number = tnumber;
}

void Contatto::SetSecret(std::string tsecret){
	this->secret = tsecret;
}

int	PhoneBook::Check_char(std::string imput)
{
	if(imput.length())
	{
		for(int y = 0; imput[y]; y++)
		{
			if((imput[y] >= 65 && imput[y] <= 90) ||\
				(imput[y] >= 97 && imput[y] <= 122))
				;
			else
			{
				std::cout << "\033[34mname no valid\033[0m" << std::endl;
				return(1);
			}
		}
	}
	else
		return(1);
	return(0);
}

int	PhoneBook::Check_nbr(std::string imput)
{
	if(imput.length())
	{
		for (int y = 0; imput[y]; y++)
		{
			if(imput[y] >= 48 && imput[y] <= 57)
				;
			else
			{
				std::cout << "\033[34mnumero non corretto\033[0m" << std::endl;
				return(1);
			}
		}
	}
	else if(imput.length() == 0)
		return(1);
	return(0);
}
	

void	PhoneBook::Gest_contactat()
{
	std::string imput;	
	std::cout << "     " << "\033[33m\033[3mMetti un un nuovo contatto\033[0m" << "     " << std::endl;		
	while(1)
	{
		std::cout << "\033[32mname ->\033[0m ";
		getline(std::cin, imput);
		contatto[i % 8].SetName(imput);
		if(!Check_char(imput))
			break;
	}
	while(1)
	{
		std::cout << "\033[32mlastname ->\033[0m ";
		getline(std::cin , imput);
		contatto[i % 8].SetLastName(imput);
		if(!Check_char(imput))
			break;
	}
	while(1)
	{
		std::cout << "\033[32mnickname ->\033[0m";
		getline(std::cin , imput);
		contatto[i % 8].SetNikName(imput);
		if(!Check_char(imput))
			break;
	}
	while(1)
	{
		std::cout << "\033[32mnumber	->\033[0m";
		getline(std::cin, imput);
		contatto[i % 8].SetNumber(imput);
		if(!Check_nbr(imput))
			break;
	}
	while(1)
	{
		std::cout << "\033[32msegreto ->\033[0m";
		getline(std::cin, imput);
		contatto[i % 8].SetSecret(imput);
		break;
	}
	i++;
	/* mettere condizione per il limite di 8 contatti 
	e la eliminazione del contatto piu vecchio
	tramite il modulo(%)*/
}

void	PhoneBook::Search_Phonebook()
{

	//std::string index;
	while(1)
	{
		int t;
		std::cout << "\033[32mnetti index ->\033[0m ";
		std::cin >> t ;
		if(t >= 0 && t <= 7)
		{
			std::cout << "\033[33mName     = ";
			std::cout << "\033[32m " << contatto[t].GetName() << "\033[0m " << std::endl;
			std::cout << "\033[33mLastname = ";
			std::cout << "\033[32m " << contatto[t].GetLastName() << "\033[0m " << std::endl;
			std::cout << "\033[33mNickname  = ";
			std::cout << "\033[32m " << contatto[t].GetNikName() << "\033[0m" << std::endl;
			std::cout << "\033[33mNumber   = ";
			std::cout << "\033[32m " << contatto[t].GetNumber() << "\033[0m" << std::endl;
			std::cout << "\033[33mSecret   = ";
			std::cout << "\033[32m " << contatto[t].GetSecreat() << "\033[0m" << std::endl;
			std::cout << "\033[0m" << std::flush;
			break;
		}
		else
			std::cout << "\033[31mindex non valido -> \033[0m" << t << std::endl;
	}
}

std::string	Check_len(std::string string)
{
	if(string.length() > 10)
	{
		string.resize(9);
		string.append("."); 
	}
	else if(string.length() < 10)
		std::cout << std::setw(10);
	return(string);
}

void	PhoneBook::Print_PhoneBook()
{
	std::cout << "\033[32m|";
	std::cout << "INDEX     "; 
	std::cout << "|";
	std::cout << "NAME      "; 
	std::cout << "|" << "LASTNAME  "; 
	std::cout << "|" << "NICKINAME "; 
	std::cout << "|" << std::endl;
	std::cout << "|" << "__________";
	std::cout << "|" << "__________"; 
	std::cout << "|" << "__________";
	std::cout << "|" << "__________";
	std::cout << "|\033[0m" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i ;
		std::cout << "|"; 
		std::cout << Check_len(contatto[i].GetName()); 
		std::cout << "|"; 
		std::cout << Check_len(contatto[i].GetLastName()); 
		std::cout << "|";
		std::cout << Check_len(contatto[i].GetNikName()); 
		std::cout << "|"; 
		std::cout << std::endl;
		std::cout << "|" << "__________" << "|" << "__________" << "|" << "__________" << "|" << "__________" << "|" << std::endl;
	}
}

int main(void)
{
	std::string imput;
	PhoneBook	rubrica;
	Contatto	contatto;
	std::cout << "\033[34mADD -> aggiungi i contatti"; 
	std::cout << std::endl;
	std::cout << "\033[32mSEARCH -> vedi e trovi all'interno della rubrica" << std::endl;
	std::cout << "\033[31mEXIT -> esci dal programma ed elimini i contatti" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "\033[31m\033[9m|\033[0m ";
		imput.clear();
		while (imput.empty())
			getline(std::cin, imput);
		if(!imput.compare("ADD"))
				rubrica.Gest_contactat();
		else if(!imput.compare("SEARCH"))
		{
			rubrica.Print_PhoneBook();
			rubrica.Search_Phonebook();
		}
		else if(!imput.compare("EXIT"))
		{
			std::cout << "\033[31mfine del programma ";
			std::cout << "\033[31m(tutti i contatti sono stati eliminati)";
			std::cout << std::endl; 
			break;
		}
		else
			std::cout << "\033[31mmette uno dei comandi prestabiliti " << std::endl;
	}
	return(0);
}