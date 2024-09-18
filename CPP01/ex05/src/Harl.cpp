/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:27:02 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/18 15:53:56 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	_method_tab[0] = &Harl::debug;
	_method_tab[1] = &Harl::info;
	_method_tab[2] = &Harl::warning;
	_method_tab[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been comingfor years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string level_tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i <= 3; i++)
	{
		if(level == level_tab[i])
		{
			(this->*_method_tab[i])();
			break;
		}
	}
}