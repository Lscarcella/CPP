/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:45:19 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/11 16:09:15 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "./Contact.hpp"
#include <iomanip>

// bonne pratique de mettre _devant un attribut privé

class PhoneBook {
	private:		
		
		Contact contacts[8];
		int _currentIndex;

	public:
		PhoneBook();
		~PhoneBook();	//destructor

	// Methods
	void add();
    void search();
	void printContact(int index);
	void printPhoneBook();
};