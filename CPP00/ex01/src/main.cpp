/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:28:47 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/12 11:43:53 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include <iostream>

inline void printUsage() {
	std::cout 	<< "Use" << BOLD BLUE 
				<< " ADD" << RESET 
				<< ", " << RESET BOLD GREEN 
				<< "SEARCH " << RESET 
				<< "or " << BOLD RED 
				<< "EXIT" << RESET 
				<< "."
	<< std::endl;
}

int main (int ac, char **av)
{
	(void)av;
	PhoneBook repertoire;
	if(ac == 1)
	{	
		while (1)
		{
			printUsage();
			std::string input;
			std::getline(std::cin, input);
			if (std::cin.fail())
				break;
			if (input == "ADD" || input == "add")
				repertoire.add();
			else if (input == "SEARCH" || input == "search")
				repertoire.search();
			else if (input == "EXIT" || input == "exit")
				break;
		}
	}
	else
		std::cout << "No argument needed" << std::endl;
}