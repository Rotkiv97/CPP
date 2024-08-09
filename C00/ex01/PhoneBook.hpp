
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "conctat.hpp"

class PhoneBook{

	private:
		Contatto contatto[8];/* array di oggetti */
		int i;
	/* richiamo un Contatto che e' l'oggetto  in altra classe */

	public:
		PhoneBook();
		~PhoneBook();
		int	GetI();
		void	SetI(int v);
		/*  set = 	viene impostata una variabile,
					devi dichiarare una variabile(quella che voui che ti ritorni)
			get =	get ti ritorna il valore di una variabile, il valore valore di set*/
		void	Gest_contactat();
		void	Print_PhoneBook();
		void	Search_Phonebook();
		void	Check_null();
		int		Check_char(std::string imput);
		int		Check_nbr(std::string imput);
};

#endif