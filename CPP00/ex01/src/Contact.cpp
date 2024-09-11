/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:14:14 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/11 15:01:56 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
//usage : premier mot en minuscule, ensuite première lettre de chaque mot en maj
// pour une classe, première lettre en Maj

Contact::Contact() {}
Contact::~Contact() {}

// Contact::printContact(){}

// setters
void Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	_nickname = nickname;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

// getters
const std::string Contact::getFirstName(void) const {
	return (_firstName);
}

const std::string Contact::getLastName(void) const {
	return(_lastName);
}

const std::string Contact::getNickname(void) const {
	return(_nickname);
}

const std::string Contact::getDarkestSecret(void) const {
	return(_darkestSecret);
}

const std::string Contact::getPhoneNumber(void) const {
	return(_phoneNumber);
}