/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:08 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/17 16:31:30 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}
HumanB::~HumanB() {}

void HumanB::attack () {
	if(_weapon)
		std::cout << BOLD << CYAN << this->_name << RESET << " attacks with their " << YELLOW << _weapon->getType() << RESET << std::endl;
	else
		std::cout << BOLD << CYAN << this->_name << RESET << RED << " run away" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}