/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:27:07 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/18 16:01:01 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	
	std::cout << BLUE << "Harl complaining about : " << GREEN << "DEBUG" << RESET << std::endl;
	harl.complain("DEBUG");

	std::cout << std::endl << BLUE << "Harl complaining about : " << GREEN << "INFO" << RESET << std::endl;
	harl.complain("INFO");

	std::cout << std::endl << BLUE << "Harl complaining about : " << GREEN << "WARNING" << RESET << std::endl;
	harl.complain("WARNING");

	std::cout << std::endl << BLUE << "Harl complaining about : " << GREEN << "ERROR" << RESET << std::endl;
	harl.complain("ERROR");
	
	return 0;
}