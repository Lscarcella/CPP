/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:19 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/17 16:35:37 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(void) const {
	return(_type);
}

void Weapon::setType(const std::string& newType){
	_type = newType;
}