/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:28:47 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/11 16:58:09 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include <iostream>

void	get_input(std::string &input)
{
	std::getline(std::cin, input);
	if (std::cin.fail())
			return ;
	while (input.empty())
	{
		std::cout << "cant be empty" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.fail())
			return ;
	}
}
void PhoneBook::add() {
    if (_currentIndex >= 8)
        _currentIndex = 0;

    std::string input;

    std::cout << "Enter first name: ";
    get_input(input);
    contacts[_currentIndex].setFirstName(input);

    std::cout << "Enter last name: ";
    get_input(input);
    contacts[_currentIndex].setLastName(input);

    std::cout << "Enter nickname: ";
    get_input(input);
    contacts[_currentIndex].setNickname(input);

    std::cout << "Enter phone number: ";
    get_input(input);
    contacts[_currentIndex].setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    get_input(input);
    contacts[_currentIndex].setDarkestSecret(input);

    std::cout << "Contact added at index " << _currentIndex << "." << std::endl;

    _currentIndex++;
}

void PhoneBook::printContact(int index)
{
	std::string tmp;
	std::cout  << "|" << std::setw(10) << std::right << index << "|";
	
	tmp = contacts[index].getFirstName();
		if(tmp.size() > 9)
			tmp = tmp.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << tmp << "|";

	tmp = contacts[index].getLastName();
		if(tmp.size() > 9)
			tmp = tmp.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << tmp << "|";

	tmp = contacts[index].getNickname();
		if(tmp.size() > 9)
			tmp = tmp.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << tmp << "|" << std::endl;
}

void PhoneBook::printPhoneBook()
{
	std::cout << std::setw(40) << "---------------------------------------------" << std::endl << "|";
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	std::cout << std::setw(40) << "---------------------------------------------" << std::endl;

	for(int i = 0; i <= 7; i++)
	{
		printContact(i);
	}
	std::cout << std::setw(40) << "---------------------------------------------" << std::endl;
}

void PhoneBook::search()
{
	printPhoneBook();
	
	// demander quel contact imprimer (par exemple 6)
	// imprimer le contact -> printContact(index I);
}

int main (int ac, char **av)
{
	(void)av;
	PhoneBook repertoire;
	if(ac == 1)
	{	
		std::cout << "Use ADD, SEARCH or EXIT." << std::endl;
		while (1)
		{
			std::string input;
			std::getline(std::cin, input);
			if (std::cin.fail())
				break;
			if (input == "ADD" || input == "add")
			{
				repertoire.add();
				std::cout << "Use ADD, SEARCH or EXIT." << std::endl;
			}
			else if (input == "SEARCH" || input == "search")
			{
				repertoire.search();
			}
			else if (input == "EXIT" || input == "exit")
				break;
		}
	}
	else
		std::cout << "No argument needed" << std::endl;
}