/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:48:32 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 11:55:52 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}  //constructor
Zombie::~Zombie() {} //destructor

void Zombie::setName(std::string newName)
{
	name = newName;
}

void	Zombie::announce(void)
{
	std::cout << BOLD << name << RESET << ": " << MAGENTA  << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}