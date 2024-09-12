/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:18:14 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/12 16:11:53 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie(std::string name );

// pile == stack
// tas == heap
int main(void)
{	
	Zombie *test = newZombie("Nadège");
	
	std::cout << "allocating in heap" << std::endl;
	test->announce();
	std::cout << std::endl;
	
	std::cout << "allocating in stack" << std::endl;
	randomChump("Flora");

	std::cout << std::endl;
	std::cout << "observation :" << std::endl;
	
	std::cout << BOLD BLUE << "Use the heap : " << RESET
			  << "When you need objects to persist beyond the current scope, for dynamic memory allocation. Manage memory manually using new and delete." << std::endl;
	std::cout << BOLD GREEN << "Use the stack : " << RESET
			  << "For local objects with a short lifespan that are automatically destroyed when their scope ends. It’s faster but has limited size and is managed automatically." << std::endl;
	delete test;
}