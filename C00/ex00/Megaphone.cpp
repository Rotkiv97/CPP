/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:09:22 by vguidoni          #+#    #+#             */
/*   Updated: 2023/08/26 15:09:24 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)ac;
	if(av[1] == NULL)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for(int i = 1; av[i]; i++)
	{
		for(int y = 0; av[i][y]; y++)
		{
			if(av[i][y] >= 97 && av[i][y] <= 122)
				av[i][y] -= 32;
		}
		std::cout << av[i];
		std::cout << " ";
	}
	std::cout << std::endl;
	return(0);
}
