/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:12:21 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/12 11:27:03 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Contact {
	private:
	
	std::string	_firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _darkestSecret;
	std::string _phoneNumber;
	
	public:
	Contact();	 //constructor
	~Contact(); //destructor

	// Getter
    	const std::string getFirstName(void) const;
		const std::string getLastName(void) const;
		const std::string getNickname(void) const;
		const std::string getDarkestSecret(void) const;
		const std::string getPhoneNumber(void) const;

    // Setter
    	void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setDarkestSecret(std::string darkestSecret);
		void setPhoneNumber(std::string phoneNumber);
	
	//Methods:
};