/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:29:44 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 11:15:54 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

PhoneBook::~PhoneBook() {}


inline void printSearchUsage() {
		std::cout << "enter a number (0-7) to print a specific contact" << std::endl;
}

PhoneBook::PhoneBook() : _currentIndex(0) {}

void	PhoneBook::getInput(std::string &input)
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

    std::cout << "Enter first name :";
    getInput(input);
    contacts[_currentIndex].setFirstName(input);

    std::cout << "Enter last name :";
    getInput(input);
    contacts[_currentIndex].setLastName(input);

    std::cout << "Enter nickname :";
    getInput(input);
    contacts[_currentIndex].setNickname(input);

    std::cout << "Enter phone number :";
    getInput(input);
    contacts[_currentIndex].setPhoneNumber(input);

    std::cout << RED << "Enter darkest secret :" << RESET;
    getInput(input);
    contacts[_currentIndex].setDarkestSecret(input);

    std::cout << "Contact added at index " << GREEN << _currentIndex << RESET << "." << std::endl;

    _currentIndex++;
}

void PhoneBook::printContact(int index)
{
	std::string tmp;
	std::cout << "first name :" << contacts[index].getFirstName() << std::endl;
	std::cout << "last name :" << contacts[index].getLastName() << std::endl;
	std::cout << "nickname :" << contacts[index].getNickname() << std::endl;
	std::cout << "phone number :" << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "darkest secret :" << contacts[index].getDarkestSecret() << std::endl;

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
		std::string tmp;
		std::cout  << "|" << std::setw(10) << std::right << i << "|";
		tmp = contacts[i].getFirstName();
		if(tmp.size() > 9)
			tmp = tmp.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right << tmp << "|";

		tmp = contacts[i].getLastName();
			if(tmp.size() > 9)
				tmp = tmp.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right << tmp << "|";

		tmp = contacts[i].getNickname();
			if(tmp.size() > 9)
				tmp = tmp.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right << tmp << "|" << std::endl;
	}
	std::cout << std::setw(40) << "---------------------------------------------" << std::endl;
}


void PhoneBook::search()
{
	int index;
	std::string input;
	printPhoneBook();
	
	while(1)
	{
		printSearchUsage();
		getInput(input);
		if (input == "return" || input == "RETURN")
			break;
			else if (!std::all_of(input.begin(), input.end(), isdigit) || input.empty())
				continue;
		else
		{
			index = std::stoi(input);
			if (index >= 0 && index < 8)
			{	
				printContact(index);
				break;
			}
		}	
	}
}