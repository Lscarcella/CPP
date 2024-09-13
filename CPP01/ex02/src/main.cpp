/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:40:33 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 14:07:00 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string announce = "HI ,THIS IS BRAIN";
	std::string *stringPTR = &announce;
	std::string &stringREF = announce;

	std::cout << &announce << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << announce << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}