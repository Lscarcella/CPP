/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:18:24 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/12 16:07:33 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}  //constructor
Zombie::~Zombie() {} //destructor

//setter
void Zombie::setName(std::string newName)
{
	name = newName;
}
void	Zombie::announce(void)
{
	std::cout << BOLD << name << RESET << ": " << MAGENTA  << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}