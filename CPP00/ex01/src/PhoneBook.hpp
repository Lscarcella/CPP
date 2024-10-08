/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:45:19 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/12 11:44:13 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "./Contact.hpp"
#include <iomanip>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"

class PhoneBook {
	private:		
		
		Contact contacts[8];
		int _currentIndex;

	public:
		PhoneBook();	//constructor
		~PhoneBook();	//destructor

	// Methods
	void add();
    void search();
	void printContact(int index);
	void printPhoneBook();
	void getInput(std::string &input);
};