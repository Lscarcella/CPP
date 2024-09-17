/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:12 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/17 15:35:06 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// quand une classe fait référence a une de ses propres instances mettre this.
// quand une variable est privée mettre _ devant pour la différencier.

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name),  _weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack () {
	std::cout << BOLD << GREEN << this->_name << RESET << " attacks with their " << RED << _weapon.getType() << RESET<< std::endl;
}