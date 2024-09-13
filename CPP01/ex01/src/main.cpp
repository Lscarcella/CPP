/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:48:34 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 12:32:52 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	int N;
	
	N = 30;
	Zombie *Zombietab = zombieHorde(N, "(x_x)");

	for(int i = 1; i < N; i++)
		Zombietab[i].announce();
	delete[]Zombietab;
}	